/*
 * XREFs of EtwpFillProcessorStreamIndexMap @ 0x180125660
 * Callers:
 *     EtwpInitLoggerContext @ 0x18005BF28 (EtwpInitLoggerContext.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 */

__int64 __fastcall EtwpFillProcessorStreamIndexMap(__int64 a1, unsigned __int16 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rsi
  unsigned int v6; // r10d
  unsigned int i; // r11d
  _QWORD *Heap; // rax
  _QWORD *v11; // r8
  __int64 result; // rax
  char *v13; // r14
  unsigned __int16 v14; // r11
  unsigned __int16 v15; // dx
  unsigned int j; // r9d
  unsigned __int16 v17; // si
  __int64 v18; // rcx

  v4 = a2;
  v6 = 8 * a2;
  for ( i = 0; i < a4; i += (*(unsigned __int16 *)(i + a3 + 4) + 7) & 0xFFFFFFF8 )
    v6 += 2 * *(_DWORD *)(i + a3 + 44);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v6);
  v11 = Heap;
  if ( !Heap )
    return 3221225495LL;
  v13 = (char *)&Heap[v4];
  v14 = 0;
  v15 = 0;
  for ( j = 0; j < a4; j += (*(unsigned __int16 *)(j + a3 + 4) + 7) & 0xFFFFFFF8 )
  {
    v17 = 0;
    for ( Heap[v15] = &v13[2 * v14]; (unsigned int)v17 < *(_DWORD *)(j + a3 + 44); ++v17 )
    {
      v18 = v14;
      *(_WORD *)&v13[2 * v14] = v14;
      ++v14;
      *(_WORD *)(*(_QWORD *)(a1 + 536) + 4 * v18) = v15;
      *(_WORD *)(*(_QWORD *)(a1 + 536) + 4 * v18 + 2) = v17;
    }
    ++v15;
  }
  *(_DWORD *)(a1 + 480) = v15;
  result = 0LL;
  *(_QWORD *)(a1 + 488) = v11;
  return result;
}
