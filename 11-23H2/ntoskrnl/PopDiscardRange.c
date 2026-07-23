/*
 * XREFs of PopDiscardRange @ 0x140AA266C
 * Callers:
 *     PopSetRange @ 0x14058F40C (PopSetRange.c)
 *     PopAllocateHiberContext @ 0x140987F38 (PopAllocateHiberContext.c)
 * Callees:
 *     RtlSetBits @ 0x1402E07C0 (RtlSetBits.c)
 */

void __fastcall PopDiscardRange(_RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlSetBits(a1 + 2, a2, a3);
}
