/*
 * XREFs of RtlpGetHeapProtection @ 0x180046824
 * Callers:
 *     RtlpFreeHeapInternal @ 0x18003BD50 (RtlpFreeHeapInternal.c)
 *     RtlpExtendHeap @ 0x180045E78 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x18004612C (RtlpFindAndCommitPages.c)
 *     RtlpCommitBlock @ 0x18004691C (RtlpCommitBlock.c)
 *     RtlpFreeUserBlockToHeap @ 0x180047E20 (RtlpFreeUserBlockToHeap.c)
 *     RtlpInitializeHeapSegment @ 0x180047EBC (RtlpInitializeHeapSegment.c)
 *     RtlProtectHeap @ 0x180049280 (RtlProtectHeap.c)
 *     RtlpCreateLowFragHeap @ 0x1800494C4 (RtlpCreateLowFragHeap.c)
 *     RtlpExtendLowFragHeapSegment @ 0x1800731FC (RtlpExtendLowFragHeapSegment.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x18008270C (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpQueryExtendedInformationHeap @ 0x18008A9F0 (RtlpQueryExtendedInformationHeap.c)
 *     RtlpGetContainingRange @ 0x1800FF014 (RtlpGetContainingRange.c)
 *     RtlpLowFragHeapFlushCaches @ 0x1801192A4 (RtlpLowFragHeapFlushCaches.c)
 * Callees:
 *     RtlpHpHeapValidateProtection @ 0x180046858 (RtlpHpHeapValidateProtection.c)
 */

__int64 __fastcall RtlpGetHeapProtection(_DWORD *a1, int a2)
{
  __int64 result; // rax

  result = (a1[28] & 0x40000) != 0 ? 64 : 4;
  if ( a2 )
    return RtlpHpHeapValidateProtection(a1);
  return result;
}
