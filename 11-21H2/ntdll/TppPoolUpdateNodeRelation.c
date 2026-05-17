/*
 * XREFs of TppPoolUpdateNodeRelation @ 0x180074CE4
 * Callers:
 *     TpAllocPoolInternal @ 0x180074674 (TpAllocPoolInternal.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x180123E80 (TppAdjustRunningThreadGoalWithLock.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     NtQuerySystemInformationEx @ 0x1800A6D80 (NtQuerySystemInformationEx.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

__int64 __fastcall TppPoolUpdateNodeRelation(__int64 a1)
{
  unsigned __int64 Heap; // rbx
  unsigned int v2; // esi
  unsigned __int64 v4; // r9
  int v5; // edi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned int v9; // [rsp+20h] [rbp-28h]
  unsigned int v10; // [rsp+58h] [rbp+10h] BYREF
  int v11; // [rsp+60h] [rbp+18h] BYREF

  Heap = 0LL;
  v2 = 0;
  v9 = 0;
  v4 = 0LL;
  while ( 1 )
  {
    v11 = 1;
    v5 = NtQuerySystemInformationEx(107LL, &v11, 4LL, v4, v9, &v10);
    if ( v5 >= 0 )
      break;
    if ( v5 != -1073741820 )
      goto LABEL_6;
    if ( Heap )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, v10);
    if ( !Heap )
      return (unsigned int)-1073741801;
    v2 = v10;
    v4 = Heap;
    v9 = v10;
  }
  memset(*(void **)(a1 + 48), 0, 16LL * (unsigned int)TppNumberNodes);
  v6 = Heap;
  v7 = Heap + v2;
  if ( Heap < v7 )
  {
    do
    {
      *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * *(unsigned int *)(v6 + 8)) = *(_OWORD *)(v6 + 32);
      v6 += *(unsigned int *)(v6 + 4);
    }
    while ( v6 < v7 );
  }
  v5 = 0;
LABEL_6:
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
  return (unsigned int)v5;
}
