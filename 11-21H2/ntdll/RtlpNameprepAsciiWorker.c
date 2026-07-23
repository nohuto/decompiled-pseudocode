/*
 * XREFs of RtlpNameprepAsciiWorker @ 0x180031BB0
 * Callers:
 *     RtlIdnToAscii @ 0x180030DC0 (RtlIdnToAscii.c)
 *     RtlCanonicalizeDomainName @ 0x180031A00 (RtlCanonicalizeDomainName.c)
 *     RtlIdnToNameprepUnicode @ 0x18010BAC0 (RtlIdnToNameprepUnicode.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlpNameprepAsciiRealWorker @ 0x180031CBC (RtlpNameprepAsciiRealWorker.c)
 */

__int64 __fastcall RtlpNameprepAsciiWorker(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  PVOID Heap; // rdi
  PVOID v11; // rax
  void *v12; // rbx
  unsigned int v13; // esi

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x3FEuLL);
  v11 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x406uLL);
  v12 = v11;
  if ( Heap && v11 )
  {
    v13 = RtlpNameprepAsciiRealWorker(a1, a2, a3, a4, a5, a6, Heap);
LABEL_4:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    goto LABEL_5;
  }
  v13 = -1073741801;
  if ( Heap )
    goto LABEL_4;
LABEL_5:
  if ( v12 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
  return v13;
}
