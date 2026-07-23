/*
 * XREFs of sub_1405119B0 @ 0x1405119B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140512054 @ 0x140512054 (sub_140512054.c)
 */

__int64 __fastcall sub_1405119B0(
        int a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        char a10,
        int a11,
        int a12,
        __int64 a13)
{
  if ( a3 && (a8 || (a7 & 1) != 0 && a13) )
    return sub_140512054(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, 0LL, 0);
  else
    return 3221225485LL;
}
