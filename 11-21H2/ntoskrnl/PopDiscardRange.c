/*
 * XREFs of PopDiscardRange @ 0x140A4F9D8
 * Callers:
 *     PopSetRange @ 0x14038DDD4 (PopSetRange.c)
 *     PopAllocateHiberContext @ 0x140802068 (PopAllocateHiberContext.c)
 * Callees:
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 */

void __fastcall PopDiscardRange(RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlSetBits(a1 + 2, a2, a3);
}
