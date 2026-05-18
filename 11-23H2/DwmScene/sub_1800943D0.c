/*
 * XREFs of sub_1800943D0 @ 0x1800943D0
 * Callers:
 *     sub_180094674 @ 0x180094674 (sub_180094674.c)
 * Callees:
 *     sub_180094170 @ 0x180094170 (sub_180094170.c)
 */

__int64 __fastcall sub_1800943D0(
        float *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        char a8)
{
  __int64 v11; // r8
  float *Src; // r10
  unsigned __int64 v13; // rcx
  float *v15; // r10
  float *v16; // rdx
  unsigned __int64 v17; // rcx

  if ( a4 > a5 )
  {
    v15 = a1;
    v16 = (float *)(a2 + 16 * (a5 >> 1));
    v17 = (a2 - (__int64)a1) >> 4;
    while ( (__int64)v17 > 0 )
    {
      if ( v15[4 * (v17 >> 1)] <= *v16 )
      {
        v15 += 4 * (v17 >> 1) + 4;
        v17 += -1LL - (v17 >> 1);
      }
      else
      {
        v17 >>= 1;
      }
    }
    return sub_180094170(
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
    v11 = a2;
    Src = &a1[4 * (a4 >> 1)];
    v13 = (a3 - a2) >> 4;
    while ( (__int64)v13 > 0 )
    {
      if ( *Src <= *(float *)(v11 + 16 * (v13 >> 1)) )
      {
        v13 >>= 1;
      }
      else
      {
        v11 += 16 * (v13 >> 1) + 16;
        v13 += -1LL - (v13 >> 1);
      }
    }
    return sub_180094170((int)a1, a2, a3, a4, a5, a6, a7, a8, Src, v11, a4 >> 1, (v11 - a2) >> 4);
  }
}
