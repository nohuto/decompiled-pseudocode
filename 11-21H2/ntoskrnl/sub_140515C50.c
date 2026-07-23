/*
 * XREFs of sub_140515C50 @ 0x140515C50
 * Callers:
 *     <none>
 * Callees:
 *     sub_140211804 @ 0x140211804 (sub_140211804.c)
 */

__int64 __fastcall sub_140515C50(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 **a4,
        unsigned __int64 a5,
        unsigned int a6,
        char a7,
        __int64 a8,
        __int64 a9,
        int a10,
        int a11,
        int a12,
        unsigned int **a13)
{
  unsigned int v14; // [rsp+48h] [rbp-30h]

  if ( !a3 )
    return 3221225713LL;
  if ( a8 || (a7 & 1) != 0 && a13 )
    return sub_140211804(a1, a2, a3, a4, a5, a6, a7, a8, a9, v14, 0LL, 0, a13);
  return 3221225485LL;
}
