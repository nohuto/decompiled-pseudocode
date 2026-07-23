/*
 * XREFs of sub_14022876C @ 0x14022876C
 * Callers:
 *     sub_1402286E0 @ 0x1402286E0 (sub_1402286E0.c)
 *     sub_1402C3BA0 @ 0x1402C3BA0 (sub_1402C3BA0.c)
 * Callees:
 *     sub_1402BF640 @ 0x1402BF640 (sub_1402BF640.c)
 *     sub_1405AD6C8 @ 0x1405AD6C8 (sub_1405AD6C8.c)
 */

__int64 __fastcall sub_14022876C(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
    sub_1405AD6C8(a1, a2, a1, a2);
  v3 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v3 ^ (((v3 & 0x3FFFFFFFFFFFFFFFLL) - a2) ^ v3) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v3 & 0x3FFFFFFFFFFFFFFFLL) == a2 )
    return sub_1402BF640(a1);
  else
    return 2LL;
}
