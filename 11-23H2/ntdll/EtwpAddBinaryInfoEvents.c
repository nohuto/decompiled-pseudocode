/*
 * XREFs of EtwpAddBinaryInfoEvents @ 0x180002A80
 * Callers:
 *     EtwpAddProviderTrackingInfo @ 0x18005E3DC (EtwpAddProviderTrackingInfo.c)
 * Callees:
 *     EtwpAddEventToBuffer @ 0x180002BE0 (EtwpAddEventToBuffer.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall EtwpAddBinaryInfoEvents(__int64 a1, __int64 a2, int a3)
{
  __int64 *v3; // rdi
  int v4; // r15d
  int v5; // ebp
  __int64 *v6; // r10
  unsigned int v7; // r9d
  _DWORD *Heap; // rsi
  __int64 *v10; // rbx
  unsigned int v12; // r14d
  __int64 *i; // rcx
  __int64 v14; // rax
  int v15; // ecx
  int v16; // edx
  unsigned int v17; // edx
  int v18; // [rsp+80h] [rbp+18h] BYREF

  v3 = (__int64 *)(a1 + 464);
  v4 = a3 - *(_DWORD *)(a2 + 48);
  v5 = 0;
  v6 = *(__int64 **)(a1 + 464);
  v7 = 0;
  while ( v6 != v3 )
  {
    v15 = *((_DWORD *)v6 + 4);
    v16 = *((_DWORD *)v6 + 10);
    v6 = (__int64 *)*v6;
    v17 = 16 * v15 + v16 + 4;
    if ( v7 > v17 )
      v17 = v7;
    v7 = v17;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v7);
  if ( Heap )
  {
    v10 = (__int64 *)*v3;
    while ( v10 != v3 )
    {
      *Heap = *((_DWORD *)v10 + 4);
      v12 = 1;
      for ( i = (__int64 *)v10[3]; i != v10 + 3; i = (__int64 *)*i )
      {
        v14 = v12 * 4;
        v12 += 4;
        *(_OWORD *)((char *)Heap + v14) = *((_OWORD *)i + 1);
      }
      memmove(&Heap[v12], (char *)v10 + 44, *((unsigned int *)v10 + 10));
      v5 = EtwpAddEventToBuffer(a2, 67LL, a2 + 88, Heap, v12 * 4 + *((_DWORD *)v10 + 10), v4, &v18);
      if ( v5 < 0 )
        break;
      v10 = (__int64 *)*v10;
      v4 -= (v18 + 7) & 0xFFFFFFF8;
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v5;
}
