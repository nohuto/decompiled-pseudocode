/*
 * XREFs of sub_18000D0B0 @ 0x18000D0B0
 * Callers:
 *     sub_18000CCE0 @ 0x18000CCE0 (sub_18000CCE0.c)
 *     sub_18000CD10 @ 0x18000CD10 (sub_18000CD10.c)
 *     sub_18000F0A8 @ 0x18000F0A8 (sub_18000F0A8.c)
 *     sub_18000F1DC @ 0x18000F1DC (sub_18000F1DC.c)
 * Callees:
 *     sub_18000CF24 @ 0x18000CF24 (sub_18000CF24.c)
 */

__int64 __fastcall sub_18000D0B0(_QWORD *a1)
{
  sub_18000CF24(a1 + 1);
  return sub_18000CF24(a1);
}
