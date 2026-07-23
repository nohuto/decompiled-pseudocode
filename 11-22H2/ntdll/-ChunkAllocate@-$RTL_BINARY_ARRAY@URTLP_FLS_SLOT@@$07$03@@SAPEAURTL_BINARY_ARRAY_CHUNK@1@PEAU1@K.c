/*
 * XREFs of ?ChunkAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K@Z @ 0x180052B4C
 * Callers:
 *     RtlFlsSetValue @ 0x180052A00 (RtlFlsSetValue.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

_OWORD *__fastcall RTL_BINARY_ARRAY<RTLP_FLS_SLOT,8,4>::ChunkAllocate(__int64 a1, unsigned int a2)
{
  __int64 v3; // rsi
  unsigned int v4; // edi
  _OWORD *Heap; // rax
  _OWORD *v6; // rbx

  v3 = a2;
  v4 = 1 << (a2 + 4);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 8 * v4 + 8);
  v6 = Heap;
  if ( Heap )
  {
    *Heap = 0LL;
    if ( v4 )
      memset_thunk_772440563353939046((char *)Heap + 8, 0, 8LL * v4);
    *(_QWORD *)(a1 + 8 * v3) = v6;
  }
  return v6;
}
