/*
 * XREFs of RtlpHeapHandleError @ 0x1405B50BC
 * Callers:
 *     RtlpCreateUCREntry @ 0x1405AC78C (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1405AC8CC (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1405AD0DC (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x1405ADC3C (RtlpInsertFreeBlock.c)
 *     RtlpHpHeapHandleError @ 0x1405B5104 (RtlpHpHeapHandleError.c)
 *     RtlpFindUCREntry @ 0x1405B54DC (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x1405B5944 (RtlpPopulateListIndex.c)
 *     RtlCreateHeap @ 0x1407D9600 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x1407E97B0 (RtlDestroyHeap.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

void __noreturn RtlpHeapHandleError()
{
  if ( dword_140C0C278 == 22 )
    KeBugCheckEx(0xC2u, 0x46uLL, qword_140C0C280, 0LL, 0LL);
  KeBugCheckEx(0x13Au, dword_140C0C278, qword_140C0C280, qword_140C0C288, 0LL);
}
