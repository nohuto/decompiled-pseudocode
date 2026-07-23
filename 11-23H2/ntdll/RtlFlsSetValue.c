/*
 * XREFs of RtlFlsSetValue @ 0x1800528A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     ?ChunkAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K@Z @ 0x1800529EC (-ChunkAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K.c)
 */

NTSTATUS __cdecl RtlFlsSetValue(ULONG FlsIndex, PVOID FlsData)
{
  struct _TEB *v2; // rdi
  __int64 v4; // rbx
  unsigned int v5; // ebp
  NTSTATUS v6; // esi
  unsigned int v7; // ecx
  int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  _QWORD *Heap; // rax
  __int64 *v14; // rax

  v2 = NtCurrentTeb();
  if ( FlsIndex - 1 > 0xFEE )
    return -1073741811;
  v4 = (__int64)v2->FlsData;
  v5 = FlsIndex + 16;
  v6 = 0;
  if ( !v4 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x58uLL);
    v4 = (__int64)Heap;
    if ( !Heap )
      return -1073741801;
    *(_OWORD *)Heap = 0LL;
    Heap[10] = 0LL;
    Heap[2] = 0LL;
    Heap[3] = 0LL;
    Heap[4] = 0LL;
    Heap[5] = 0LL;
    Heap[6] = 0LL;
    Heap[7] = 0LL;
    Heap[8] = 0LL;
    Heap[9] = 0LL;
    v2->FlsData = Heap;
    RtlAcquireSRWLockExclusive(&RtlpFlsContext);
    v14 = (__int64 *)qword_180187F20;
    if ( *(__int64 **)qword_180187F20 != &qword_180187F18 )
      __fastfail(3u);
    *(_QWORD *)v4 = &qword_180187F18;
    *(_QWORD *)(v4 + 8) = v14;
    *v14 = v4;
    qword_180187F20 = v4;
    RtlReleaseSRWLockExclusive(&RtlpFlsContext);
  }
  _BitScanReverse(&v7, v5);
  v8 = 1 << v7;
  v9 = v7 - 4;
  v10 = v5 ^ v8;
  v11 = *(_QWORD *)(v4 + 8 * v9 + 16);
  if ( !v11 )
  {
    v11 = RTL_BINARY_ARRAY<RTLP_FLS_SLOT,8,4>::ChunkAllocate(v4 + 16, (unsigned int)v9);
    if ( !v11 )
      return -1073741801;
  }
  *(_QWORD *)(v11 + 8 * v10 + 8) = FlsData;
  *(_DWORD *)(v4 + 80) |= 1u;
  return v6;
}
