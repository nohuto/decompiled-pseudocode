/*
 * XREFs of sub_140365B28 @ 0x140365B28
 * Callers:
 *     sub_14034A490 @ 0x14034A490 (sub_14034A490.c)
 * Callees:
 *     sub_140365B78 @ 0x140365B78 (sub_140365B78.c)
 *     sub_140365BA0 @ 0x140365BA0 (sub_140365BA0.c)
 */

__int64 __fastcall sub_140365B28(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r10

  sub_140365B78(a2, a1);
  if ( !*(_QWORD *)(v3 + 8) || *(_WORD *)(v2 + 32) != *(_WORD *)(v2 + 34) )
    return sub_140365BA0(v3, v2, 0LL);
  *(_QWORD *)(v2 + 16) = 0LL;
  return v2;
}
