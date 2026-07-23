/*
 * XREFs of RtlpHeapHandleError @ 0x1405B559C
 * Callers:
 *     RtlpCreateUCREntry @ 0x1405ACC6C (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1405ACDAC (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1405AD5BC (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x1405AE11C (RtlpInsertFreeBlock.c)
 *     RtlpHpHeapHandleError @ 0x1405B55E4 (RtlpHpHeapHandleError.c)
 *     RtlpFindUCREntry @ 0x1405B59BC (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x1405B5E24 (RtlpPopulateListIndex.c)
 *     RtlCreateHeap @ 0x1407D9350 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x1407E9500 (RtlDestroyHeap.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

void __noreturn RtlpHeapHandleError()
{
  if ( dword_140C0C278 == 22 )
    KeBugCheckEx(0xC2u, 0x46uLL, qword_140C0C280, 0LL, 0LL);
  KeBugCheckEx(0x13Au, dword_140C0C278, qword_140C0C280, qword_140C0C288, 0LL);
}
