/*
 * XREFs of RtlFlsSetValue @ 0x18005B620
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     ?ChunkAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K@Z @ 0x18005B76C (-ChunkAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K.c)
 */

__int64 __fastcall RtlFlsSetValue(int a1, __int64 a2)
{
  struct _TEB *v2; // rdi
  __int64 FlsData; // rbx
  unsigned int v5; // ebp
  unsigned int v6; // esi
  unsigned int v7; // ecx
  int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 Heap; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9
  __int64 *v17; // rax

  v2 = NtCurrentTeb();
  if ( (unsigned int)(a1 - 1) > 0xFEE )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    FlsData = (__int64)v2->FlsData;
    v5 = a1 + 16;
    v6 = 0;
    if ( !FlsData )
    {
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 88LL);
      FlsData = Heap;
      if ( !Heap )
        return (unsigned int)-1073741801;
      *(_OWORD *)Heap = 0LL;
      *(_QWORD *)(Heap + 80) = 0LL;
      *(_QWORD *)(Heap + 16) = 0LL;
      *(_QWORD *)(Heap + 24) = 0LL;
      *(_QWORD *)(Heap + 32) = 0LL;
      *(_QWORD *)(Heap + 40) = 0LL;
      *(_QWORD *)(Heap + 48) = 0LL;
      *(_QWORD *)(Heap + 56) = 0LL;
      *(_QWORD *)(Heap + 64) = 0LL;
      *(_QWORD *)(Heap + 72) = 0LL;
      v2->FlsData = (void *)Heap;
      RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpFlsContext, v14, v15, v16);
      v17 = (__int64 *)qword_18017ABE0;
      if ( *(__int64 **)qword_18017ABE0 != &qword_18017ABD8 )
        __fastfail(3u);
      *(_QWORD *)FlsData = &qword_18017ABD8;
      *(_QWORD *)(FlsData + 8) = v17;
      *v17 = FlsData;
      qword_18017ABE0 = FlsData;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)&RtlpFlsContext);
    }
    _BitScanReverse(&v7, v5);
    v8 = 1 << v7;
    v9 = v7 - 4;
    v10 = v5 ^ v8;
    v11 = *(_QWORD *)(FlsData + 8 * v9 + 16);
    if ( !v11 )
    {
      v11 = RTL_BINARY_ARRAY<RTLP_FLS_SLOT,8,4>::ChunkAllocate(FlsData + 16, (unsigned int)v9);
      if ( !v11 )
        return (unsigned int)-1073741801;
    }
    *(_QWORD *)(v11 + 8 * v10 + 8) = a2;
    *(_DWORD *)(FlsData + 80) |= 1u;
  }
  return v6;
}
