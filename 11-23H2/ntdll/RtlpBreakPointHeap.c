/*
 * XREFs of RtlpBreakPointHeap @ 0x180107DF8
 * Callers:
 *     RtlpCheckHeapSignature @ 0x180029E7C (RtlpCheckHeapSignature.c)
 *     RtlpFreeHeap @ 0x180039680 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18003F1C0 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeap @ 0x180042490 (RtlpReAllocateHeap.c)
 *     RtlpGrowBlockInPlace @ 0x180043F44 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x180044330 (RtlpCreateSplitBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x1800455F8 (RtlpCoalesceFreeBlocks.c)
 *     RtlpValidateHeapEntry @ 0x180087664 (RtlpValidateHeapEntry.c)
 *     RtlpCheckBusyBlockTail @ 0x180103A88 (RtlpCheckBusyBlockTail.c)
 *     RtlDebugAllocateHeap @ 0x180105270 (RtlDebugAllocateHeap.c)
 *     RtlDebugCreateHeap @ 0x180105A48 (RtlDebugCreateHeap.c)
 *     RtlDebugFreeHeap @ 0x1801060A0 (RtlDebugFreeHeap.c)
 *     RtlDebugReAllocateHeap @ 0x180106B14 (RtlDebugReAllocateHeap.c)
 *     RtlpValidateHeap @ 0x180107E20 (RtlpValidateHeap.c)
 * Callees:
 *     <none>
 */

struct _PEB *RtlpBreakPointHeap()
{
  struct _PEB *result; // rax

  result = NtCurrentPeb();
  if ( result->BeingDebugged )
  {
    __debugbreak();
    RtlpHeapInvalidBreakPoint = 0;
  }
  return result;
}
