/*
 * XREFs of EtwpTrackBinaryForSession @ 0x180002248
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x180002154 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlCompareMemory @ 0x1800A3970 (RtlCompareMemory.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

__int64 __fastcall EtwpTrackBinaryForSession(__int64 a1, const void **a2, _QWORD *a3)
{
  SIZE_T v3; // r12
  __int64 *v4; // rsi
  __int64 *v5; // rbx
  unsigned int v6; // edi
  SIZE_T v10; // rcx
  _QWORD *v11; // rsi
  _QWORD *i; // rax
  __int64 v13; // rcx
  _OWORD *Heap; // rax
  __int64 v15; // rcx
  _DWORD *v17; // rbx
  char *v18; // r14
  _OWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax

  v3 = *(unsigned __int16 *)a2;
  v4 = (__int64 *)(a1 + 464);
  v5 = *(__int64 **)(a1 + 464);
  v6 = 0;
  if ( v5 != (__int64 *)(a1 + 464) )
  {
    v10 = v3 + 2;
    do
    {
      if ( *((_DWORD *)v5 + 10) == v10 )
      {
        if ( RtlCompareMemory((char *)v5 + 44, a2[1], v3) == v3 )
        {
          v11 = v5 + 3;
          for ( i = (_QWORD *)v5[3]; i != v11; i = (_QWORD *)*i )
          {
            v13 = *a3 - i[2];
            if ( *a3 == i[2] )
              v13 = a3[1] - i[3];
            if ( !v13 )
              return v6;
          }
          Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20uLL);
          if ( Heap )
          {
            Heap[1] = *(_OWORD *)a3;
            v15 = *v11;
            if ( *(_QWORD **)(*v11 + 8LL) == v11 )
            {
              *(_QWORD *)Heap = v15;
              *((_QWORD *)Heap + 1) = v11;
              *(_QWORD *)(v15 + 8) = Heap;
              *v11 = Heap;
              ++*((_DWORD *)v5 + 4);
              goto LABEL_14;
            }
LABEL_21:
            __fastfail(3u);
          }
          return 14;
        }
        v10 = v3 + 2;
      }
      v5 = (__int64 *)*v5;
    }
    while ( v5 != v4 );
  }
  v17 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(v3 + 46));
  if ( !v17 )
    return 14;
  v17[10] = v3 + 2;
  memmove(v17 + 11, a2[1], v3);
  v18 = (char *)(v17 + 6);
  *(_WORD *)((char *)v17 + v3 + 44) = 0;
  *((_QWORD *)v17 + 4) = v17 + 6;
  *((_QWORD *)v17 + 3) = v17 + 6;
  v17[4] = 0;
  v19 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20uLL);
  if ( !v19 )
    return 14;
  v19[1] = *(_OWORD *)a3;
  v20 = *(_QWORD *)v18;
  if ( *(char **)(*(_QWORD *)v18 + 8LL) != v18 )
    goto LABEL_21;
  *(_QWORD *)v19 = v20;
  *((_QWORD *)v19 + 1) = v18;
  *(_QWORD *)(v20 + 8) = v19;
  *(_QWORD *)v18 = v19;
  v17[4] = 1;
  *(_DWORD *)(a1 + 316) |= 0x10u;
  v21 = *v4;
  if ( *(__int64 **)(*v4 + 8) != v4 )
    goto LABEL_21;
  *(_QWORD *)v17 = v21;
  *((_QWORD *)v17 + 1) = v4;
  *(_QWORD *)(v21 + 8) = v17;
  *v4 = (__int64)v17;
LABEL_14:
  *(_DWORD *)(a1 + 316) |= 0x10u;
  return v6;
}
