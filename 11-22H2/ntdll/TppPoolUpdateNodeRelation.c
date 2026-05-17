/*
 * XREFs of TppPoolUpdateNodeRelation @ 0x18004FE24
 * Callers:
 *     TpAllocPoolInternal @ 0x18004C170 (TpAllocPoolInternal.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x1801258C0 (TppAdjustRunningThreadGoalWithLock.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     NtQuerySystemInformationEx @ 0x1800A1B60 (NtQuerySystemInformationEx.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall TppPoolUpdateNodeRelation(__int64 a1)
{
  unsigned __int64 Heap; // rdi
  unsigned int v3; // esi
  unsigned __int64 v4; // r9
  int v5; // ebx
  int v6; // ebx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r11
  unsigned __int16 i; // r10
  __int64 v10; // rax
  unsigned int v12; // [rsp+20h] [rbp-28h]
  unsigned int v13; // [rsp+58h] [rbp+10h] BYREF
  int v14; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0;
  Heap = 0LL;
  v3 = 0;
  v4 = 0LL;
  while ( 1 )
  {
    v14 = 6;
    v5 = NtQuerySystemInformationEx(107LL, &v14, 4LL, v4, v12, &v13);
    if ( v5 >= 0 )
      break;
    if ( v5 != -1073741820 )
      goto LABEL_13;
    if ( Heap )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, v13);
    if ( !Heap )
      return (unsigned int)-1073741801;
    v3 = v13;
    v4 = Heap;
    v12 = v13;
  }
  v6 = TppMaximumGroups;
  memset_thunk_772440563353939046(
    *(void **)(a1 + 48),
    0,
    16 * (unsigned int)TppNumberNodes * (unsigned __int64)(unsigned int)TppMaximumGroups);
  v7 = Heap;
  v8 = Heap + v3;
  if ( Heap < v8 )
  {
    do
    {
      for ( i = 0;
            i < *(_WORD *)(v7 + 30);
            *(_OWORD *)(*(_QWORD *)(a1 + 48)
                      + 16LL * (*(_DWORD *)(v7 + 8) * v6 + (unsigned int)*(unsigned __int16 *)(v7 + 16 * (v10 + 2) + 8))) = *(_OWORD *)(v7 + 16LL * (unsigned int)v10 + 32) )
      {
        v10 = i++;
      }
      v7 += *(unsigned int *)(v7 + 4);
    }
    while ( v7 < v8 );
  }
  v5 = 0;
LABEL_13:
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
  return (unsigned int)v5;
}
