/*
 * XREFs of RtlAddAttributeActionToRXact @ 0x180086A10
 * Callers:
 *     RtlAddActionToRXact @ 0x180091DB0 (RtlAddActionToRXact.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 __fastcall RtlAddAttributeActionToRXact(
        __int64 a1,
        int a2,
        const void **a3,
        __int64 a4,
        const void **a5,
        int a6,
        void *Src,
        size_t Size)
{
  const void **v8; // r9
  int v11; // r15d
  __int64 v12; // rcx
  unsigned int v13; // ebp
  unsigned int v14; // edx
  unsigned int v15; // ebx
  __int64 v16; // r14
  __int128 v17; // xmm1
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned int v20; // esi
  __int64 v21; // rbx
  _DWORD *Heap; // rax
  _DWORD *v24; // rsi

  v8 = a3;
  if ( (unsigned int)(a2 - 1) > 1 )
    return 3221225485LL;
  v11 = (Size + 3) & 0xFFFFFFFC;
  v12 = *(_QWORD *)(a1 + 24);
  v13 = (((*(unsigned __int16 *)a5 + 3) & 0xFFFFFFFC) + 71 + v11 + ((*(unsigned __int16 *)a3 + 3) & 0xFFFFFFFC)) & 0xFFFFFFF8;
  v14 = v13 + *(_DWORD *)(v12 + 8);
  if ( v14 < v13 )
    return 3221225495LL;
  v15 = *(_DWORD *)(v12 + 4);
  if ( v14 > v15 )
  {
    do
      v15 *= 2;
    while ( v15 < v14 );
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
    v24 = Heap;
    if ( Heap )
    {
      memmove(Heap, *(const void **)(a1 + 24), *(unsigned int *)(*(_QWORD *)(a1 + 24) + 8LL));
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)(a1 + 24));
      v8 = a3;
      *(_QWORD *)(a1 + 24) = v24;
      v24[1] = v15;
      v12 = *(_QWORD *)(a1 + 24);
      goto LABEL_4;
    }
    return 3221225495LL;
  }
LABEL_4:
  v16 = v12 + *(unsigned int *)(v12 + 8);
  *(_DWORD *)v16 = v13;
  *(_DWORD *)(v16 + 4) = a2;
  *(_OWORD *)(v16 + 8) = *(_OWORD *)v8;
  v17 = *(_OWORD *)a5;
  *(_DWORD *)(v16 + 48) = a6;
  *(_OWORD *)(v16 + 24) = v17;
  *(_QWORD *)(v16 + 40) = a4;
  *(_DWORD *)(v16 + 52) = Size;
  v18 = *(_QWORD *)(a1 + 24);
  v19 = (unsigned int)(*(_DWORD *)(v18 + 8) + 64);
  memmove((void *)(v19 + v18), v8[1], *(unsigned __int16 *)v8);
  *(_QWORD *)(v16 + 16) = (unsigned int)v19;
  LODWORD(v19) = ((*(unsigned __int16 *)a3 + 3) & 0xFFFFFFFC) + v19;
  memmove((void *)((unsigned int)v19 + *(_QWORD *)(a1 + 24)), a5[1], *(unsigned __int16 *)a5);
  *(_QWORD *)(v16 + 32) = (unsigned int)v19;
  v20 = ((*(unsigned __int16 *)a5 + 3) & 0xFFFFFFFC) + v19;
  if ( a2 == 2 )
  {
    v21 = v20;
    memmove((void *)(v20 + *(_QWORD *)(a1 + 24)), Src, (unsigned int)Size);
    v20 += v11;
    *(_QWORD *)(v16 + 56) = v21;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) = (v20 + 7) & 0xFFFFFFF8;
  ++**(_DWORD **)(a1 + 24);
  return 0LL;
}
