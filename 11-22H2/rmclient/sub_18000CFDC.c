/*
 * XREFs of sub_18000CFDC @ 0x18000CFDC
 * Callers:
 *     sub_18000CD10 @ 0x18000CD10 (sub_18000CD10.c)
 * Callees:
 *     sub_18000D0D8 @ 0x18000D0D8 (sub_18000D0D8.c)
 *     sub_18000F624 @ 0x18000F624 (sub_18000F624.c)
 */

__int64 __fastcall sub_18000CFDC(__int64 a1)
{
  sub_18000F624();
  sub_18000D0D8(a1 + 200);
  return sub_18000D110(a1 + 8);
}
