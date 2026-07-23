/*
 * XREFs of RtlpExtendListLookup @ 0x18004A628
 * Callers:
 *     RtlpActivateLowFragmentationHeap @ 0x18004997C (RtlpActivateLowFragmentationHeap.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlpPopulateListIndex @ 0x1800478D4 (RtlpPopulateListIndex.c)
 */

void __fastcall RtlpExtendListLookup(__int64 *HeapHandle, __int64 a2)
{
  unsigned int v4; // esi
  unsigned __int64 v5; // rbp
  _DWORD *Heap; // rax

  if ( !*(_QWORD *)a2 )
  {
    v4 = (1055 - *(_DWORD *)(a2 + 8)) & 0xFFFFFFE0;
    v5 = (unsigned __int64)v4 >> 3;
    Heap = RtlAllocateHeap(HeapHandle, 0x80000Au, v4 * (*(_DWORD *)(a2 + 12) != 0 ? 16LL : 8LL) + v5 + 56);
    if ( Heap )
    {
      *((_BYTE *)Heap - 1) = 1;
      Heap[2] = v4 + *(_DWORD *)(a2 + 8);
      Heap[6] = *(_DWORD *)(a2 + 8);
      Heap[3] = *(_DWORD *)(a2 + 12);
      *((_QWORD *)Heap + 5) = Heap + 14;
      *((_QWORD *)Heap + 6) = (char *)Heap + v5 + 56;
      *((_QWORD *)Heap + 4) = *(_QWORD *)(a2 + 32);
      *(_QWORD *)a2 = Heap;
      RtlpPopulateListIndex((__int64)HeapHandle, HeapHandle[39], (unsigned __int64)Heap);
    }
  }
}
