/*
 * XREFs of RtlpCtAllocateMemory @ 0x1409C2298
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405B1510 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlpCtAllocateMemory(__int64 a1)
{
  return ExAllocatePool2(256LL, a1, 1735672676LL);
}
