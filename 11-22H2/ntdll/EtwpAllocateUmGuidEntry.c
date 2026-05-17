/*
 * XREFs of EtwpAllocateUmGuidEntry @ 0x180061DBC
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x1800320D8 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwDeliverDataBlock @ 0x180061670 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     EtwpInsertGuidEntry @ 0x180061E2C (EtwpInsertGuidEntry.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

char *__fastcall EtwpAllocateUmGuidEntry(_OWORD *a1)
{
  char *Heap; // rax
  char *v3; // rbx

  Heap = (char *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 176LL);
  v3 = Heap;
  if ( Heap )
  {
    memset_thunk_772440563353939046(Heap, 0, 0xB0uLL);
    *(_OWORD *)(v3 + 24) = *a1;
    *((_DWORD *)v3 + 13) = 1;
    EtwpInsertGuidEntry(v3);
  }
  return v3;
}
