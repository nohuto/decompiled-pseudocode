/*
 * XREFs of RtlpLogHeapFailure @ 0x180121540
 * Callers:
 *     RtlpHpVsContextFree @ 0x180036C50 (RtlpHpVsContextFree.c)
 *     RtlpHpVsContextAllocateInternal @ 0x1800374D0 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpFreeHeap @ 0x1800397E0 (RtlpFreeHeap.c)
 *     RtlSizeHeap @ 0x18003ABB0 (RtlSizeHeap.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x18003B350 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x18003BD50 (RtlpFreeHeapInternal.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x18003C5F0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlpAllocateHeapInternal @ 0x18003CD60 (RtlpAllocateHeapInternal.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18003D6C0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpAllocateHeap @ 0x18003F320 (RtlpAllocateHeap.c)
 *     RtlReAllocateHeap @ 0x180042320 (RtlReAllocateHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x1800423B0 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x1800425F0 (RtlpReAllocateHeap.c)
 *     RtlpHpCheckAllocationSizeLimit @ 0x180043928 (RtlpHpCheckAllocationSizeLimit.c)
 *     RtlpHpSegReAlloc @ 0x180043970 (RtlpHpSegReAlloc.c)
 *     RtlpHpSegFree @ 0x180043E44 (RtlpHpSegFree.c)
 *     RtlpGrowBlockInPlace @ 0x1800440A4 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x180044490 (RtlpCreateSplitBlock.c)
 *     RtlpInsertFreeBlock @ 0x180044950 (RtlpInsertFreeBlock.c)
 *     RtlpHeapFindListLookupEntry @ 0x180044C30 (RtlpHeapFindListLookupEntry.c)
 *     RtlpHeapAddListEntry @ 0x180044ED4 (RtlpHeapAddListEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1800450BC (RtlpDeCommitFreeBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x180045758 (RtlpCoalesceFreeBlocks.c)
 *     RtlpFindAndCommitPages @ 0x18004612C (RtlpFindAndCommitPages.c)
 *     RtlpCreateUCREntry @ 0x18004642C (RtlpCreateUCREntry.c)
 *     RtlpInsertUCRBlock @ 0x1800465A4 (RtlpInsertUCRBlock.c)
 *     RtlpRemoveUCRBlock @ 0x180046740 (RtlpRemoveUCRBlock.c)
 *     RtlpHpHeapValidateProtection @ 0x180046858 (RtlpHpHeapValidateProtection.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x180047384 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpInitializeHeapSegment @ 0x180047EBC (RtlpInitializeHeapSegment.c)
 *     RtlpHeapRemoveListEntry @ 0x18004913C (RtlpHeapRemoveListEntry.c)
 *     RtlpDestroyHeapSegment @ 0x180049914 (RtlpDestroyHeapSegment.c)
 *     RtlpHpLargeFree @ 0x180064234 (RtlpHpLargeFree.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1800647B0 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpVsContextGrowInPlace @ 0x1800719D4 (RtlpHpVsContextGrowInPlace.c)
 *     RtlGetUserInfoHeap @ 0x180075EA0 (RtlGetUserInfoHeap.c)
 *     RtlpProbeUserBufferSafe @ 0x180076254 (RtlpProbeUserBufferSafe.c)
 *     RtlSetUserValueHeap @ 0x1800762D0 (RtlSetUserValueHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800FDEF0 (RtlSetUserFlagsHeap.c)
 *     RtlpCoalesceHeap @ 0x1800FE77C (RtlpCoalesceHeap.c)
 *     RtlZeroHeap @ 0x180101F50 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x1801071B0 (RtlpValidateHeapSegment.c)
 *     RtlpAnalyzeHeapFailure @ 0x180114F24 (RtlpAnalyzeHeapFailure.c)
 *     RtlpLocalInfoAllocFromCache @ 0x180118AA0 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpLowFragHeapFlushCaches @ 0x1801192A4 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpHpVsContextFreeInternal @ 0x180122EE4 (RtlpHpVsContextFreeInternal.c)
 * Callees:
 *     RtlpHpHeapHandleError @ 0x180115510 (RtlpHpHeapHandleError.c)
 */

__int64 __fastcall RtlpLogHeapFailure(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  if ( qword_180181870 != a2 )
  {
    qword_180181888 = a5;
    qword_180181890 = a6;
    dword_180181868 = a1;
    qword_180181870 = a2;
    qword_180181878 = a3;
    qword_180181880 = a4;
    return RtlpHpHeapHandleError(a1, a2, a3);
  }
  return result;
}
