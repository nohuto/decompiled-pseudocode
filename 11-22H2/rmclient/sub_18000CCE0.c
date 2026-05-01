/*
 * XREFs of sub_18000CCE0 @ 0x18000CCE0
 * Callers:
 *     sub_1800101BC @ 0x1800101BC (sub_1800101BC.c)
 * Callees:
 *     sub_18000CD40 @ 0x18000CD40 (sub_18000CD40.c)
 *     sub_18000D0B0 @ 0x18000D0B0 (sub_18000D0B0.c)
 */

__int64 __fastcall sub_18000CCE0(__int64 a1)
{
  sub_18000CD40(a1 + 40);
  sub_18000D0B0(a1 + 16);
  return sub_18000CF24(a1 + 8);
}
