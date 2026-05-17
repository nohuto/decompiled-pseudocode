/*
 * XREFs of RtlpHeapHandleError @ 0x180114EB0
 * Callers:
 *     RtlpPopulateListIndex @ 0x18001FF74 (RtlpPopulateListIndex.c)
 *     RtlpFindAndCommitPages @ 0x180020B1C (RtlpFindAndCommitPages.c)
 *     RtlpCreateUCREntry @ 0x180020E2C (RtlpCreateUCREntry.c)
 *     RtlpFindUCREntry @ 0x1800210AC (RtlpFindUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x180022B64 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x1800231D4 (RtlpInsertFreeBlock.c)
 *     RtlCreateHeap @ 0x18002F7E0 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x1800570A0 (RtlDestroyHeap.c)
 *     RtlpHpHeapHandleError @ 0x180115130 (RtlpHpHeapHandleError.c)
 * Callees:
 *     RtlpReportHeapFailure @ 0x180117C30 (RtlpReportHeapFailure.c)
 */

__int64 RtlpHeapHandleError()
{
  __int64 result; // rax

  if ( !byte_18017A188 )
    return RtlpReportHeapFailure();
  return result;
}
