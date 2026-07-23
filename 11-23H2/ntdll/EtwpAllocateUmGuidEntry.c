/*
 * XREFs of EtwpAllocateUmGuidEntry @ 0x18005EF2C
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x180031F78 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwDeliverDataBlock @ 0x18005E7E0 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     EtwpInsertGuidEntry @ 0x18005EF9C (EtwpInsertGuidEntry.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

char *__fastcall EtwpAllocateUmGuidEntry(_OWORD *a1)
{
  char *Heap; // rax
  char *v3; // rbx

  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xB0uLL);
  v3 = Heap;
  if ( Heap )
  {
    memset_thunk_772440563353939046(Heap, 0, 0xB0uLL);
    *(_OWORD *)(v3 + 24) = *a1;
    *((_DWORD *)v3 + 13) = 1;
    EtwpInsertGuidEntry((PRTL_BALANCED_NODE)v3);
  }
  return v3;
}
