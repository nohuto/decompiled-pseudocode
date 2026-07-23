/*
 * XREFs of sub_140605078 @ 0x140605078
 * Callers:
 *     sub_140603A00 @ 0x140603A00 (sub_140603A00.c)
 * Callees:
 *     sub_140604FB4 @ 0x140604FB4 (sub_140604FB4.c)
 *     sub_1406050F8 @ 0x1406050F8 (sub_1406050F8.c)
 */

__int64 __fastcall sub_140605078(__int64 a1, int a2, int a3)
{
  __int64 v5; // rbx

  if ( !a1 )
    return 3221225485LL;
  v5 = a1 + 88;
  if ( a1 == -88 )
    return 3221225485LL;
  sub_140604FB4(a1 + 88, a2);
  *(_WORD *)(v5 + 16) = 95;
  sub_140604FB4(v5 + 18, a3);
  *(_WORD *)(v5 + 34) = 95;
  return sub_1406050F8(v5 + 36, a1 + 4, 494LL);
}
