/*
 * XREFs of sub_1407ECF00 @ 0x1407ECF00
 * Callers:
 *     sub_1407ECCD0 @ 0x1407ECCD0 (sub_1407ECCD0.c)
 *     sub_1408277FC @ 0x1408277FC (sub_1408277FC.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_1407ECF5C @ 0x1407ECF5C (sub_1407ECF5C.c)
 */

__int64 __fastcall sub_1407ECF00(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int v3; // eax
  unsigned int v4; // eax

  v2 = 0;
  v3 = sub_140792CCC(a1, 0LL, 28673);
  if ( v3 )
  {
    v4 = sub_140792CCC(a1, v3, 16469);
    if ( v4 )
      return (unsigned int)sub_1407ECF5C(a1, v4, 0LL);
  }
  else
  {
    sub_1406E0C3C(1LL, (__int64)"SdbGetDatabaseEdition");
  }
  return v2;
}
