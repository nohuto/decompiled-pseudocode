/*
 * XREFs of sub_180094260 @ 0x180094260
 * Callers:
 *     sub_180094630 @ 0x180094630 (sub_180094630.c)
 * Callees:
 *     sub_180094080 @ 0x180094080 (sub_180094080.c)
 */

__int64 __fastcall sub_180094260(
        float *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        char a8)
{
  __int64 v10; // r8
  float *Src; // r10
  unsigned __int64 v12; // rcx
  unsigned __int64 v14; // rcx
  float *v15; // r10

  if ( a4 > a5 )
  {
    v14 = (a2 - (__int64)a1) >> 4;
    v15 = a1;
    while ( (__int64)v14 > 0 )
    {
      if ( *(float *)(a2 + 16 * (a5 >> 1)) <= v15[4 * (v14 >> 1)] )
      {
        v15 += 4 * (v14 >> 1) + 4;
        v14 += -1LL - (v14 >> 1);
      }
      else
      {
        v14 >>= 1;
      }
    }
    return sub_180094080(
             (int)a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             v15,
             a2 + 16 * (a5 >> 1),
             ((char *)v15 - (char *)a1) >> 4,
             a5 >> 1);
  }
  else
  {
    v10 = a2;
    Src = &a1[4 * (a4 >> 1)];
    v12 = (a3 - a2) >> 4;
    while ( (__int64)v12 > 0 )
    {
      if ( *(float *)(v10 + 16 * (v12 >> 1)) <= *Src )
      {
        v12 >>= 1;
      }
      else
      {
        v10 += 16 * (v12 >> 1) + 16;
        v12 += -1LL - (v12 >> 1);
      }
    }
    return sub_180094080((int)a1, a2, a3, a4, a5, a6, a7, a8, Src, v10, a4 >> 1, (v10 - a2) >> 4);
  }
}
