/*
 * XREFs of RtlpBreakPointHeap @ 0x1801069E8
 * Callers:
 *     RtlpCheckHeapSignature @ 0x18002A04C (RtlpCheckHeapSignature.c)
 *     RtlpFreeHeap @ 0x1800397E0 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18003F320 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeap @ 0x1800425F0 (RtlpReAllocateHeap.c)
 *     RtlpGrowBlockInPlace @ 0x1800440A4 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x180044490 (RtlpCreateSplitBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x180045758 (RtlpCoalesceFreeBlocks.c)
 *     RtlpValidateHeapEntry @ 0x180086E64 (RtlpValidateHeapEntry.c)
 *     RtlpCheckBusyBlockTail @ 0x180102678 (RtlpCheckBusyBlockTail.c)
 *     RtlDebugAllocateHeap @ 0x180103E60 (RtlDebugAllocateHeap.c)
 *     RtlDebugCreateHeap @ 0x180104638 (RtlDebugCreateHeap.c)
 *     RtlDebugFreeHeap @ 0x180104C90 (RtlDebugFreeHeap.c)
 *     RtlDebugReAllocateHeap @ 0x180105704 (RtlDebugReAllocateHeap.c)
 *     RtlpValidateHeap @ 0x180106A10 (RtlpValidateHeap.c)
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
