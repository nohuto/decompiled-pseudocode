/*
 * XREFs of RtlIdnToUnicode @ 0x18000E3B0
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x18000D390 (RtlCanonicalizeDomainName.c)
 * Callees:
 *     RtlpIdnToUnicodeWorker @ 0x18000E460 (RtlpIdnToUnicodeWorker.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlIdnToUnicode(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 Heap; // rax
  __int64 v10; // rdi
  unsigned int v11; // ebx

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 1022LL);
  v10 = Heap;
  if ( !Heap )
    return 3221225495LL;
  v11 = RtlpIdnToUnicodeWorker(a1, a2, a3, a4, a5, Heap);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v10);
  return v11;
}
