/*
 * XREFs of RtlpNameprepAsciiWorker @ 0x18000D74C
 * Callers:
 *     RtlIdnToAscii @ 0x18000C8E0 (RtlIdnToAscii.c)
 *     RtlCanonicalizeDomainName @ 0x18000D5A0 (RtlCanonicalizeDomainName.c)
 *     RtlIdnToNameprepUnicode @ 0x18010BC90 (RtlIdnToNameprepUnicode.c)
 * Callees:
 *     RtlpNameprepAsciiRealWorker @ 0x18000D858 (RtlpNameprepAsciiRealWorker.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlpNameprepAsciiWorker(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  PVOID Heap; // rsi
  PVOID v11; // rax
  void *v12; // rdi
  unsigned int v13; // ebx

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
