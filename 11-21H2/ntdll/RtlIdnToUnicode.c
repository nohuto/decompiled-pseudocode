/*
 * XREFs of RtlIdnToUnicode @ 0x1800314A0
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x180031A00 (RtlCanonicalizeDomainName.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlpIdnToUnicodeWorker @ 0x180031550 (RtlpIdnToUnicodeWorker.c)
 */

__int64 __fastcall RtlIdnToUnicode(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 Heap; // rax
  __int64 v10; // rdi
  unsigned int v11; // ebx

  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 1022LL);
  v10 = Heap;
  if ( !Heap )
    return 3221225495LL;
  v11 = RtlpIdnToUnicodeWorker(a1, a2, a3, a4, a5, Heap);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
  return v11;
}
