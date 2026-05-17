/*
 * XREFs of RtlpNameprepAsciiWorker @ 0x18000D53C
 * Callers:
 *     RtlIdnToAscii @ 0x18000C6D0 (RtlIdnToAscii.c)
 *     RtlCanonicalizeDomainName @ 0x18000D390 (RtlCanonicalizeDomainName.c)
 *     RtlIdnToNameprepUnicode @ 0x18010D130 (RtlIdnToNameprepUnicode.c)
 * Callees:
 *     RtlpNameprepAsciiRealWorker @ 0x18000D648 (RtlpNameprepAsciiRealWorker.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlpNameprepAsciiWorker(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  __int64 Heap; // rsi
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned int v13; // ebx

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 1022LL);
  v11 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 1030LL);
  v12 = v11;
  if ( Heap && v11 )
  {
    v13 = RtlpNameprepAsciiRealWorker(a1, a2, a3, a4, a5, a6, Heap);
LABEL_4:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
    goto LABEL_5;
  }
  v13 = -1073741801;
  if ( Heap )
    goto LABEL_4;
LABEL_5:
  if ( v12 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v12);
  return v13;
}
