/*
 * XREFs of sub_1408608EC @ 0x1408608EC
 * Callers:
 *     sub_140748758 @ 0x140748758 (sub_140748758.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1408608EC(unsigned int *Src, unsigned int *a2, unsigned int **a3)
{
  unsigned int *v4; // rbx
  unsigned int v6; // ebp
  unsigned int *v7; // rax
  unsigned int *v8; // r14
  unsigned int *Pool2; // rax
  unsigned int *v11; // rdi

  *a3 = 0LL;
  v4 = a2;
  if ( !Src || !Src[7] )
  {
    if ( !a2 || !a2[7] )
      return 0LL;
    if ( !Src || !Src[7] )
    {
LABEL_16:
      Pool2 = (unsigned int *)ExAllocatePool2(256LL, *v4, 1970499664LL);
      v11 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, v4, *v4);
        *a3 = v11;
        return 0LL;
      }
      return 3221225626LL;
    }
  }
  if ( !a2 || !a2[7] )
  {
    v4 = Src;
    goto LABEL_16;
  }
  v6 = *Src - 32 + *a2;
  v7 = (unsigned int *)ExAllocatePool2(256LL, v6, 1970499664LL);
  v8 = v7;
  if ( v7 )
  {
    memmove(v7, Src, *Src);
    memmove((char *)v8 + *Src, v4 + 8, v6 - *Src);
    *v8 = v6;
    v8[7] += v4[7];
    *a3 = v8;
    return 0LL;
  }
  return 3221225626LL;
}
