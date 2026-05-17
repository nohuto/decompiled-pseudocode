/*
 * XREFs of RtlpHeapHandleError @ 0x180116748
 * Callers:
 *     RtlpInsertFreeBlock @ 0x1800447F0 (RtlpInsertFreeBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x180044F5C (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x180045FCC (RtlpFindAndCommitPages.c)
 *     RtlpCreateUCREntry @ 0x1800462CC (RtlpCreateUCREntry.c)
 *     RtlpFindUCREntry @ 0x1800464EC (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x1800478D4 (RtlpPopulateListIndex.c)
 *     RtlCreateHeap @ 0x180047FD0 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x180049550 (RtlDestroyHeap.c)
 *     RtlpHpHeapHandleError @ 0x1801169C0 (RtlpHpHeapHandleError.c)
 * Callees:
 *     RtlpReportHeapFailure @ 0x180119558 (RtlpReportHeapFailure.c)
 */

__int64 RtlpHeapHandleError()
{
  __int64 result; // rax

  if ( !byte_180187488 )
    return RtlpReportHeapFailure();
  return result;
}
