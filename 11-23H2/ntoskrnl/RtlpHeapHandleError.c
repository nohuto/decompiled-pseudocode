/*
 * XREFs of RtlpHeapHandleError @ 0x1405B502C
 * Callers:
 *     RtlpCreateUCREntry @ 0x1405AC6FC (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1405AC83C (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1405AD04C (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x1405ADBAC (RtlpInsertFreeBlock.c)
 *     RtlpHpHeapHandleError @ 0x1405B5074 (RtlpHpHeapHandleError.c)
 *     RtlpFindUCREntry @ 0x1405B544C (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x1405B58B4 (RtlpPopulateListIndex.c)
 *     RtlCreateHeap @ 0x1407D9080 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x1407E9230 (RtlDestroyHeap.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

void __noreturn RtlpHeapHandleError()
{
  if ( dword_140C0C278 == 22 )
    KeBugCheckEx(0xC2u, 0x46uLL, qword_140C0C280, 0LL, 0LL);
  KeBugCheckEx(0x13Au, dword_140C0C278, qword_140C0C280, qword_140C0C288, 0LL);
}
