/*
 * XREFs of RtlpGetHeapProtection @ 0x1800202FC
 * Callers:
 *     RtlpExtendHeap @ 0x180020860 (RtlpExtendHeap.c)
 *     RtlpFreeHeapInternal @ 0x180027BF0 (RtlpFreeHeapInternal.c)
 *     RtlpInitializeHeapSegment @ 0x1800304FC (RtlpInitializeHeapSegment.c)
 *     RtlProtectHeap @ 0x180030B10 (RtlProtectHeap.c)
 *     RtlpCreateLowFragHeap @ 0x18005347C (RtlpCreateLowFragHeap.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18006C404 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpFreeUserBlockToHeap @ 0x18006D210 (RtlpFreeUserBlockToHeap.c)
 *     RtlpExtendLowFragHeapSegment @ 0x18007A2EC (RtlpExtendLowFragHeapSegment.c)
 *     RtlpQueryExtendedInformationHeap @ 0x1800833B0 (RtlpQueryExtendedInformationHeap.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1800866D8 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpGetContainingRange @ 0x1800FF314 (RtlpGetContainingRange.c)
 * Callees:
 *     RtlpHpHeapValidateProtection @ 0x1800227CC (RtlpHpHeapValidateProtection.c)
 */

__int64 __fastcall RtlpGetHeapProtection(_DWORD *a1, int a2)
{
  __int64 result; // rax

  result = (a1[28] & 0x40000) != 0 ? 64 : 4;
  if ( a2 )
    return RtlpHpHeapValidateProtection(a1);
  return result;
}
