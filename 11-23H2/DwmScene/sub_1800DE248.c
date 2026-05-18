/*
 * XREFs of sub_1800DE248 @ 0x1800DE248
 * Callers:
 *     sub_1800DDA48 @ 0x1800DDA48 (sub_1800DDA48.c)
 *     sub_1800DDC64 @ 0x1800DDC64 (sub_1800DDC64.c)
 * Callees:
 *     sub_1800DE2BC @ 0x1800DE2BC (sub_1800DE2BC.c)
 */

__int64 __fastcall sub_1800DE248(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_1800DE2BC(v2 + 32);
  return sub_1800DE100(a1);
}
