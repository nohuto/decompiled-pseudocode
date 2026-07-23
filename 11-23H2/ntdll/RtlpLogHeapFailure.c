/*
 * XREFs of RtlpLogHeapFailure @ 0x1801229C0
 * Callers:
 *     RtlpHpVsContextFree @ 0x180036AF0 (RtlpHpVsContextFree.c)
 *     RtlpHpVsContextAllocateInternal @ 0x180037370 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpFreeHeap @ 0x180039680 (RtlpFreeHeap.c)
 *     RtlSizeHeap @ 0x18003AA50 (RtlSizeHeap.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x18003B1F0 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x18003BBF0 (RtlpFreeHeapInternal.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x18003C490 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlpAllocateHeapInternal @ 0x18003CC00 (RtlpAllocateHeapInternal.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18003D560 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpAllocateHeap @ 0x18003F1C0 (RtlpAllocateHeap.c)
 *     RtlReAllocateHeap @ 0x1800421C0 (RtlReAllocateHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x180042250 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x180042490 (RtlpReAllocateHeap.c)
 *     RtlpHpCheckAllocationSizeLimit @ 0x1800437C8 (RtlpHpCheckAllocationSizeLimit.c)
 *     RtlpHpSegReAlloc @ 0x180043810 (RtlpHpSegReAlloc.c)
 *     RtlpHpSegFree @ 0x180043CE4 (RtlpHpSegFree.c)
 *     RtlpGrowBlockInPlace @ 0x180043F44 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x180044330 (RtlpCreateSplitBlock.c)
 *     RtlpInsertFreeBlock @ 0x1800447F0 (RtlpInsertFreeBlock.c)
 *     RtlpHeapFindListLookupEntry @ 0x180044AD0 (RtlpHeapFindListLookupEntry.c)
 *     RtlpHeapAddListEntry @ 0x180044D74 (RtlpHeapAddListEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x180044F5C (RtlpDeCommitFreeBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x1800455F8 (RtlpCoalesceFreeBlocks.c)
 *     RtlpFindAndCommitPages @ 0x180045FCC (RtlpFindAndCommitPages.c)
 *     RtlpCreateUCREntry @ 0x1800462CC (RtlpCreateUCREntry.c)
 *     RtlpInsertUCRBlock @ 0x180046444 (RtlpInsertUCRBlock.c)
 *     RtlpRemoveUCRBlock @ 0x1800465E0 (RtlpRemoveUCRBlock.c)
 *     RtlpHpHeapValidateProtection @ 0x1800466F8 (RtlpHpHeapValidateProtection.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x180047224 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpInitializeHeapSegment @ 0x180047D5C (RtlpInitializeHeapSegment.c)
 *     RtlpHeapRemoveListEntry @ 0x180048FDC (RtlpHeapRemoveListEntry.c)
 *     RtlpDestroyHeapSegment @ 0x1800497B4 (RtlpDestroyHeapSegment.c)
 *     RtlpHpLargeFree @ 0x180064104 (RtlpHpLargeFree.c)
 *     RtlpHpVaMgrCtxQuery @ 0x180064680 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpVsContextGrowInPlace @ 0x180071CF4 (RtlpHpVsContextGrowInPlace.c)
 *     RtlGetUserInfoHeap @ 0x180076510 (RtlGetUserInfoHeap.c)
 *     RtlpProbeUserBufferSafe @ 0x1800768C4 (RtlpProbeUserBufferSafe.c)
 *     RtlSetUserValueHeap @ 0x180076940 (RtlSetUserValueHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800FF300 (RtlSetUserFlagsHeap.c)
 *     RtlpCoalesceHeap @ 0x1800FFB8C (RtlpCoalesceHeap.c)
 *     RtlZeroHeap @ 0x180103360 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x1801085C0 (RtlpValidateHeapSegment.c)
 *     RtlpAnalyzeHeapFailure @ 0x1801163A4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpLocalInfoAllocFromCache @ 0x180119F20 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18011A724 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpHpVsContextFreeInternal @ 0x180124364 (RtlpHpVsContextFreeInternal.c)
 * Callees:
 *     RtlpHpHeapHandleError @ 0x180116990 (RtlpHpHeapHandleError.c)
 */

__int64 __fastcall RtlpLogHeapFailure(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  if ( qword_1801848C0 != a2 )
  {
    qword_1801848D8 = a5;
    qword_1801848E0 = a6;
    dword_1801848B8 = a1;
    qword_1801848C0 = a2;
    qword_1801848C8 = a3;
    qword_1801848D0 = a4;
    return RtlpHpHeapHandleError(a1, a2, a3);
  }
  return result;
}
