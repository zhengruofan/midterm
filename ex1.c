#include <stdio.h>
int main(){
    int  nc;
    nc=0;
    while (getchar()<=50){
        ++nc;
        if (nc==' '||nc=='\t')
        ++nc;
    }
    long a;
    a=0;

    while (getchar()<=50){
         ++nc;
         printf("%ld\n",a);
    }
         return a;
}