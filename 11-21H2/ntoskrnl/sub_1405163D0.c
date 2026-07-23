/*
 * XREFs of sub_1405163D0 @ 0x1405163D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1405166D4 @ 0x1405166D4 (sub_1405166D4.c)
 */

__int64 __fastcall sub_1405163D0(
        int a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        char a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  int v14; // [rsp+48h] [rbp-30h]

  if ( a3 && (a8 || (a7 & 1) != 0 && a13) )
    return sub_1405166D4(a1, a2, a3, a4, a5, a6, a7, a8, a9, v14, 0LL, 0, a13);
  else
    return 3221225485LL;
}
