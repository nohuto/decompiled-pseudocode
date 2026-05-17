/*
 * XREFs of RtlpHeapHandleError @ 0x180115298
 * Callers:
 *     RtlpInsertFreeBlock @ 0x180044950 (RtlpInsertFreeBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x1800450BC (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x18004612C (RtlpFindAndCommitPages.c)
 *     RtlpCreateUCREntry @ 0x18004642C (RtlpCreateUCREntry.c)
 *     RtlpFindUCREntry @ 0x18004664C (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x180047A34 (RtlpPopulateListIndex.c)
 *     RtlCreateHeap @ 0x180048130 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x1800496B0 (RtlDestroyHeap.c)
 *     RtlpHpHeapHandleError @ 0x180115510 (RtlpHpHeapHandleError.c)
 * Callees:
 *     RtlpReportHeapFailure @ 0x1801180A8 (RtlpReportHeapFailure.c)
 */

__int64 RtlpHeapHandleError()
{
  __int64 result; // rax

  if ( !byte_1801843C8 )
    return RtlpReportHeapFailure();
  return result;
}
