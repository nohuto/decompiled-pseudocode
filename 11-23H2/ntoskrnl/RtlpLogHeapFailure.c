/*
 * XREFs of RtlpLogHeapFailure @ 0x1405B503C
 * Callers:
 *     RtlpHpFixedVsFree @ 0x1402018E0 (RtlpHpFixedVsFree.c)
 *     RtlpHpVsContextAllocateInternal @ 0x14024A180 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpAllocateHeap @ 0x14024D4F0 (RtlpHpAllocateHeap.c)
 *     RtlpHpVsContextFreeList @ 0x14024EEC0 (RtlpHpVsContextFreeList.c)
 *     RtlpHpSegMgrCommit @ 0x14024F150 (RtlpHpSegMgrCommit.c)
 *     RtlpHpVaMgrCtxQuery @ 0x14024FB50 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpFreeHeap @ 0x1402AC750 (RtlpHpFreeHeap.c)
 *     ExAllocateHeapPool @ 0x1402AD570 (ExAllocateHeapPool.c)
 *     RtlpHpSegFree @ 0x1403153EC (RtlpHpSegFree.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140315F50 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     ExFreeHeapPool @ 0x140323340 (ExFreeHeapPool.c)
 *     RtlpHpVsContextFree @ 0x1403238C0 (RtlpHpVsContextFree.c)
 *     RtlpHpLargeFree @ 0x1403240FC (RtlpHpLargeFree.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x140324948 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlFreeHeap @ 0x14034CBA0 (RtlFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x14034CC04 (RtlpFreeHeapInternal.c)
 *     RtlAllocateHeap @ 0x14034CC80 (RtlAllocateHeap.c)
 *     RtlSizeHeap @ 0x1405AA2B0 (RtlSizeHeap.c)
 *     RtlpAllocateHeap @ 0x1405AB7B8 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405AC148 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x1405AC538 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x1405ACC6C (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1405ACDAC (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1405AD5BC (RtlpFindAndCommitPages.c)
 *     RtlpFreeHeap @ 0x1405AD818 (RtlpFreeHeap.c)
 *     RtlpInitializeHeapSegment @ 0x1405ADE6C (RtlpInitializeHeapSegment.c)
 *     RtlpInsertFreeBlock @ 0x1405AE11C (RtlpInsertFreeBlock.c)
 *     RtlpInsertUCRBlock @ 0x1405AE464 (RtlpInsertUCRBlock.c)
 *     RtlpProbeUserBufferSafe @ 0x1405AE52C (RtlpProbeUserBufferSafe.c)
 *     RtlpRemoveUCRBlock @ 0x1405AE5BC (RtlpRemoveUCRBlock.c)
 *     RtlpSizeHeapInternal @ 0x1405AE7DC (RtlpSizeHeapInternal.c)
 *     RtlpAnalyzeHeapFailure @ 0x1405B5268 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapListCompare @ 0x1405B5CB4 (RtlpHeapListCompare.c)
 *     RtlpHpCheckAllocationSizeLimit @ 0x1405B63B4 (RtlpHpCheckAllocationSizeLimit.c)
 *     RtlZeroHeap @ 0x1409BE060 (RtlZeroHeap.c)
 *     RtlpDestroyHeapSegment @ 0x1409BE560 (RtlpDestroyHeapSegment.c)
 * Callees:
 *     RtlpHpHeapHandleError @ 0x1405B55E4 (RtlpHpHeapHandleError.c)
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
