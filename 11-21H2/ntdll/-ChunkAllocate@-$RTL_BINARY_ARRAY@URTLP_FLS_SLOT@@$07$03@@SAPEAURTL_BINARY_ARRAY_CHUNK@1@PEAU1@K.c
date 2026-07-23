/*
 * XREFs of ?ChunkAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K@Z @ 0x18005B76C
 * Callers:
 *     RtlFlsSetValue @ 0x18005B620 (RtlFlsSetValue.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

_OWORD *__fastcall RTL_BINARY_ARRAY<RTLP_FLS_SLOT,8,4>::ChunkAllocate(__int64 a1, unsigned int a2)
{
  __int64 v3; // rsi
  unsigned int v4; // edi
  _OWORD *Heap; // rax
  _OWORD *v6; // rbx

  v3 = a2;
  v4 = 1 << (a2 + 4);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8 * v4 + 8);
  v6 = Heap;
  if ( Heap )
  {
    *Heap = 0LL;
    if ( v4 )
      memset((char *)Heap + 8, 0, 8LL * v4);
    *(_QWORD *)(a1 + 8 * v3) = v6;
  }
  return v6;
}
