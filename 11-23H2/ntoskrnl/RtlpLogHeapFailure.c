/*
 * XREFs of RtlpLogHeapFailure @ 0x1405B4ACC
 * Callers:
 *     RtlpHpFixedVsFree @ 0x1402018E0 (RtlpHpFixedVsFree.c)
 *     RtlpHpVsContextAllocateInternal @ 0x14024A0B0 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpAllocateHeap @ 0x14024D420 (RtlpHpAllocateHeap.c)
 *     RtlpHpVsContextFreeList @ 0x14024EDF0 (RtlpHpVsContextFreeList.c)
 *     RtlpHpSegMgrCommit @ 0x14024F080 (RtlpHpSegMgrCommit.c)
 *     RtlpHpVaMgrCtxQuery @ 0x14024FA80 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpFreeHeap @ 0x1402AC4C0 (RtlpHpFreeHeap.c)
 *     ExAllocateHeapPool @ 0x1402AD2E0 (ExAllocateHeapPool.c)
 *     RtlpHpSegFree @ 0x14031515C (RtlpHpSegFree.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140315CC0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     ExFreeHeapPool @ 0x1403230B0 (ExFreeHeapPool.c)
 *     RtlpHpVsContextFree @ 0x140323630 (RtlpHpVsContextFree.c)
 *     RtlpHpLargeFree @ 0x140323E6C (RtlpHpLargeFree.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x1403246B8 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlFreeHeap @ 0x14034CA00 (RtlFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x14034CA64 (RtlpFreeHeapInternal.c)
 *     RtlAllocateHeap @ 0x14034CAE0 (RtlAllocateHeap.c)
 *     RtlSizeHeap @ 0x1405A9D40 (RtlSizeHeap.c)
 *     RtlpAllocateHeap @ 0x1405AB248 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405ABBD8 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x1405ABFC8 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x1405AC6FC (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1405AC83C (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1405AD04C (RtlpFindAndCommitPages.c)
 *     RtlpFreeHeap @ 0x1405AD2A8 (RtlpFreeHeap.c)
 *     RtlpInitializeHeapSegment @ 0x1405AD8FC (RtlpInitializeHeapSegment.c)
 *     RtlpInsertFreeBlock @ 0x1405ADBAC (RtlpInsertFreeBlock.c)
 *     RtlpInsertUCRBlock @ 0x1405ADEF4 (RtlpInsertUCRBlock.c)
 *     RtlpProbeUserBufferSafe @ 0x1405ADFBC (RtlpProbeUserBufferSafe.c)
 *     RtlpRemoveUCRBlock @ 0x1405AE04C (RtlpRemoveUCRBlock.c)
 *     RtlpSizeHeapInternal @ 0x1405AE26C (RtlpSizeHeapInternal.c)
 *     RtlpAnalyzeHeapFailure @ 0x1405B4CF8 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapListCompare @ 0x1405B5744 (RtlpHeapListCompare.c)
 *     RtlpHpCheckAllocationSizeLimit @ 0x1405B5E44 (RtlpHpCheckAllocationSizeLimit.c)
 *     RtlZeroHeap @ 0x1409BDE60 (RtlZeroHeap.c)
 *     RtlpDestroyHeapSegment @ 0x1409BE360 (RtlpDestroyHeapSegment.c)
 * Callees:
 *     RtlpHpHeapHandleError @ 0x1405B5074 (RtlpHpHeapHandleError.c)
 */

void __fastcall RtlpLogHeapFailure(int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4, __int64 a5, __int64 a6)
{
  if ( qword_140C0C280 != a2 )
  {
    qword_140C0C298 = a5;
    qword_140C0C2A0 = a6;
    dword_140C0C278 = a1;
    qword_140C0C280 = a2;
    qword_140C0C288 = a3;
    qword_140C0C290 = a4;
    RtlpHpHeapHandleError();
  }
}
