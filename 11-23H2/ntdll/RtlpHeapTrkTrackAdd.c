/*
 * XREFs of RtlpHeapTrkTrackAdd @ 0x18010CBA8
 * Callers:
 *     RtlpHeapTrkInterceptor @ 0x18010C670 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlpHeapTrkHash @ 0x1800B0BDE (RtlpHeapTrkHash.c)
 *     RtlpHeapTrkTrackStack @ 0x18010CEAC (RtlpHeapTrkTrackStack.c)
 */

void __fastcall RtlpHeapTrkTrackAdd(__int64 a1, __int64 a2)
{
  _QWORD *Heap; // rbx
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rax

  Heap = RtlAllocateHeap(HeapHandle, 0, 0x28uLL);
  if ( Heap )
  {
    v5 = (unsigned int)RtlpHeapTrkHash(a2);
    Heap[2] = a1;
    Heap[3] = a2;
    v6 = RtlpHeapTrkTrackStack();
    Heap[4] = v6;
    if ( v6 )
    {
      v7 = v5 & 0xF;
      RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180188A20 + 8 * v7));
      v8 = qword_1801886A0 + 16 * v5;
      v9 = *(_QWORD *)v8;
      if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 )
        __fastfail(3u);
      *Heap = v9;
      Heap[1] = v8;
      *(_QWORD *)(v9 + 8) = Heap;
      *(_QWORD *)v8 = Heap;
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180188A20 + 8 * v7));
    }
    else
    {
      RtlFreeHeap(HeapHandle, 0, Heap);
    }
  }
}
