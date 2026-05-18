/*
 * XREFs of sub_18000D45C @ 0x18000D45C
 * Callers:
 *     sub_18000EE74 @ 0x18000EE74 (sub_18000EE74.c)
 * Callees:
 *     sub_18000D508 @ 0x18000D508 (sub_18000D508.c)
 *     sub_18000D61C @ 0x18000D61C (sub_18000D61C.c)
 */

__int64 __fastcall sub_18000D45C(__int64 a1)
{
  sub_18000D508(a1 + 40);
  sub_18000D61C(a1 + 16);
  return sub_18000D5A4(a1 + 8);
}
