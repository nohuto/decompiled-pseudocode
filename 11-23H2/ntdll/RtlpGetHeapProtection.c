/*
 * XREFs of RtlpGetHeapProtection @ 0x1800466C4
 * Callers:
 *     RtlpFreeHeapInternal @ 0x18003BBF0 (RtlpFreeHeapInternal.c)
 *     RtlpExtendHeap @ 0x180045D18 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x180045FCC (RtlpFindAndCommitPages.c)
 *     RtlpCommitBlock @ 0x1800467BC (RtlpCommitBlock.c)
 *     RtlpFreeUserBlockToHeap @ 0x180047CC0 (RtlpFreeUserBlockToHeap.c)
 *     RtlpInitializeHeapSegment @ 0x180047D5C (RtlpInitializeHeapSegment.c)
 *     RtlProtectHeap @ 0x180049120 (RtlProtectHeap.c)
 *     RtlpCreateLowFragHeap @ 0x180049364 (RtlpCreateLowFragHeap.c)
 *     RtlpExtendLowFragHeapSegment @ 0x18007386C (RtlpExtendLowFragHeapSegment.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x180082D7C (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpQueryExtendedInformationHeap @ 0x18008B1F0 (RtlpQueryExtendedInformationHeap.c)
 *     RtlpGetContainingRange @ 0x180100424 (RtlpGetContainingRange.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18011A724 (RtlpLowFragHeapFlushCaches.c)
 * Callees:
 *     RtlpHpHeapValidateProtection @ 0x1800466F8 (RtlpHpHeapValidateProtection.c)
 */

__int64 __fastcall RtlpGetHeapProtection(_DWORD *a1, int a2)
{
  __int64 result; // rax

  result = (a1[28] & 0x40000) != 0 ? 64 : 4;
  if ( a2 )
    return RtlpHpHeapValidateProtection(a1);
  return result;
}
