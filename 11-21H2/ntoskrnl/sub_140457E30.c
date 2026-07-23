/*
 * XREFs of sub_140457E30 @ 0x140457E30
 * Callers:
 *     <none>
 * Callees:
 *     sub_140211804 @ 0x140211804 (sub_140211804.c)
 */

__int64 __fastcall sub_140457E30(
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
        unsigned int *a11,
        unsigned int a12,
        int a13,
        int a14,
        unsigned int **a15)
{
  unsigned int v16; // [rsp+48h] [rbp-30h]

  if ( a3 && a11 && (a8 || (a7 & 1) != 0 && a15) )
    return sub_140211804(a1, a2, a3, a4, a5, a6, a7, a8, a9, v16, a11, a12, a15);
  else
    return 3221225485LL;
}
