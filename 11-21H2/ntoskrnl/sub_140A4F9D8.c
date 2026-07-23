/*
 * XREFs of sub_140A4F9D8 @ 0x140A4F9D8
 * Callers:
 *     sub_14038DDD4 @ 0x14038DDD4 (sub_14038DDD4.c)
 *     sub_140802068 @ 0x140802068 (sub_140802068.c)
 * Callees:
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 */

void __fastcall sub_140A4F9D8(_RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlSetBits(a1 + 2, a2, a3);
}
