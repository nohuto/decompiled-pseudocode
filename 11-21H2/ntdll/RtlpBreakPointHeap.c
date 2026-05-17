/*
 * XREFs of RtlpBreakPointHeap @ 0x180106C88
 * Callers:
 *     RtlpCheckHeapSignature @ 0x180015DC8 (RtlpCheckHeapSignature.c)
 *     RtlpCreateSplitBlock @ 0x1800214F0 (RtlpCreateSplitBlock.c)
 *     RtlpGrowBlockInPlace @ 0x1800219DC (RtlpGrowBlockInPlace.c)
 *     RtlpCoalesceFreeBlocks @ 0x180023750 (RtlpCoalesceFreeBlocks.c)
 *     RtlpReAllocateHeap @ 0x180024890 (RtlpReAllocateHeap.c)
 *     RtlpFreeHeap @ 0x180025D30 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18002B160 (RtlpAllocateHeap.c)
 *     RtlpValidateHeapEntry @ 0x18007C0D8 (RtlpValidateHeapEntry.c)
 *     RtlpCheckBusyBlockTail @ 0x18010295C (RtlpCheckBusyBlockTail.c)
 *     RtlDebugAllocateHeap @ 0x180104194 (RtlDebugAllocateHeap.c)
 *     RtlDebugCreateHeap @ 0x18010495C (RtlDebugCreateHeap.c)
 *     RtlDebugFreeHeap @ 0x180104FAC (RtlDebugFreeHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1801059F0 (RtlDebugReAllocateHeap.c)
 *     RtlpValidateHeap @ 0x180106CB0 (RtlpValidateHeap.c)
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
