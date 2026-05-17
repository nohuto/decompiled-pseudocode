/*
 * XREFs of RtlpLogHeapFailure @ 0x18011F650
 * Callers:
 *     RtlpHpVsContextFree @ 0x180018CE0 (RtlpHpVsContextFree.c)
 *     RtlpHpVsContextAllocateInternal @ 0x180019520 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHeapListCompare @ 0x180020420 (RtlpHeapListCompare.c)
 *     RtlpFindAndCommitPages @ 0x180020B1C (RtlpFindAndCommitPages.c)
 *     RtlpCreateUCREntry @ 0x180020E2C (RtlpCreateUCREntry.c)
 *     RtlpInsertUCRBlock @ 0x180020FA4 (RtlpInsertUCRBlock.c)
 *     RtlpRemoveUCRBlock @ 0x180021140 (RtlpRemoveUCRBlock.c)
 *     RtlpCreateSplitBlock @ 0x1800214F0 (RtlpCreateSplitBlock.c)
 *     RtlpGrowBlockInPlace @ 0x1800219DC (RtlpGrowBlockInPlace.c)
 *     RtlpHpHeapValidateProtection @ 0x1800227CC (RtlpHpHeapValidateProtection.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x18002283C (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpDeCommitFreeBlock @ 0x180022B64 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x1800231D4 (RtlpInsertFreeBlock.c)
 *     RtlpHeapFindListLookupEntry @ 0x1800234B8 (RtlpHeapFindListLookupEntry.c)
 *     RtlpCoalesceFreeBlocks @ 0x180023750 (RtlpCoalesceFreeBlocks.c)
 *     RtlReAllocateHeap @ 0x180024530 (RtlReAllocateHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x1800245B8 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x180024890 (RtlpReAllocateHeap.c)
 *     RtlpFreeHeap @ 0x180025D30 (RtlpFreeHeap.c)
 *     RtlSizeHeap @ 0x1800270A0 (RtlSizeHeap.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x180027850 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180027BF0 (RtlpFreeHeapInternal.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180028470 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlpAllocateHeapInternal @ 0x180028BF0 (RtlpAllocateHeapInternal.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180029530 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpAllocateHeap @ 0x18002B160 (RtlpAllocateHeap.c)
 *     RtlpHpCheckAllocationSizeLimit @ 0x18002E028 (RtlpHpCheckAllocationSizeLimit.c)
 *     RtlpHpSegReAlloc @ 0x18002E070 (RtlpHpSegReAlloc.c)
 *     RtlpHpSegFree @ 0x18002E414 (RtlpHpSegFree.c)
 *     RtlpHeapRemoveListEntry @ 0x18002E790 (RtlpHeapRemoveListEntry.c)
 *     RtlpHpVsContextGrowInPlace @ 0x18002F118 (RtlpHpVsContextGrowInPlace.c)
 *     RtlpInitializeHeapSegment @ 0x1800304FC (RtlpInitializeHeapSegment.c)
 *     RtlpDestroyHeapSegment @ 0x180057340 (RtlpDestroyHeapSegment.c)
 *     RtlpHpLargeFree @ 0x180058AC4 (RtlpHpLargeFree.c)
 *     RtlpHpVaMgrCtxQuery @ 0x180058C48 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18006C404 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18006CAE4 (RtlpLocalInfoAllocFromCache.c)
 *     RtlGetUserInfoHeap @ 0x180078760 (RtlGetUserInfoHeap.c)
 *     RtlpProbeUserBufferSafe @ 0x180078ADC (RtlpProbeUserBufferSafe.c)
 *     RtlSetUserValueHeap @ 0x180078BC0 (RtlSetUserValueHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800FE1B0 (RtlSetUserFlagsHeap.c)
 *     RtlpCoalesceHeap @ 0x1800FEA84 (RtlpCoalesceHeap.c)
 *     RtlZeroHeap @ 0x180102270 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x180107448 (RtlpValidateHeapSegment.c)
 *     RtlpAnalyzeHeapFailure @ 0x180114AD4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHpVsContextFreeInternal @ 0x180121208 (RtlpHpVsContextFreeInternal.c)
 * Callees:
 *     RtlpHpHeapHandleError @ 0x180115130 (RtlpHpHeapHandleError.c)
 */

__int64 __fastcall RtlpLogHeapFailure(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  if ( qword_180177790 != a2 )
  {
    qword_1801777A8 = a5;
    qword_1801777B0 = a6;
    dword_180177788 = a1;
    qword_180177790 = a2;
    qword_180177798 = a3;
    qword_1801777A0 = a4;
    return RtlpHpHeapHandleError(a1, a2, a3);
  }
  return result;
}
