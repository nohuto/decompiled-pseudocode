/*
 * XREFs of sub_180094674 @ 0x180094674
 * Callers:
 *     sub_1800945B8 @ 0x1800945B8 (sub_1800945B8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180094674(
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
    return sub_180094CE4(a1, a2, a3, a6);
  if ( a5 > a7 )
    return sub_1800943D0(a1, a2, a3, a4, a5, a6, a7, a8);
  return sub_180094E38(a1);
}
