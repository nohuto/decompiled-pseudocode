/*
 * XREFs of sub_180094630 @ 0x180094630
 * Callers:
 *     sub_180094540 @ 0x180094540 (sub_180094540.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180094630(
        float *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        char a8)
{
  if ( a4 <= a5 && a4 <= a7 )
    return sub_180094C48(a1, a2, a3, a6);
  if ( a5 > a7 )
    return sub_180094260(a1, a2, a3, a4, a5, a6, a7, a8);
  return sub_180094D80(a1);
}
