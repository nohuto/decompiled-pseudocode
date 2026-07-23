/*
 * XREFs of PopDiscardRange @ 0x140AA28BC
 * Callers:
 *     PopSetRange @ 0x14058EFAC (PopSetRange.c)
 *     PopAllocateHiberContext @ 0x140987DE8 (PopAllocateHiberContext.c)
 * Callees:
 *     RtlSetBits @ 0x1402E0530 (RtlSetBits.c)
 */

void __fastcall PopDiscardRange(_RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlSetBits(a1 + 2, a2, a3);
}
