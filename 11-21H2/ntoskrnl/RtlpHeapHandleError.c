/*
 * XREFs of RtlpHeapHandleError @ 0x1405F1F34
 * Callers:
 *     RtlpCreateUCREntry @ 0x1405E952C (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1405E966C (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1405E9E8C (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x1405EA9DC (RtlpInsertFreeBlock.c)
 *     RtlpHpHeapHandleError @ 0x1405F1F7C (RtlpHpHeapHandleError.c)
 *     RtlpFindUCREntry @ 0x1405F2358 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x1405F27C0 (RtlpPopulateListIndex.c)
 *     RtlDestroyHeap @ 0x1406E9E30 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x1407F3B40 (RtlCreateHeap.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __noreturn RtlpHeapHandleError()
{
  if ( dword_140C0BEA8 == 22 )
    KeBugCheckEx(0xC2u, 0x46uLL, qword_140C0BEB0, 0LL, 0LL);
  KeBugCheckEx(0x13Au, dword_140C0BEA8, qword_140C0BEB0, qword_140C0BEB8, 0LL);
}
