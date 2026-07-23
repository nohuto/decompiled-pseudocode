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
  char *Heap; // rbx
  ULONG v2; // esi
  void *v4; // r9
  NTSTATUS v5; // edi
  char *v6; // rdx
  char *v7; // r8
  ULONG v9; // [rsp+20h] [rbp-28h]
  ULONG ReturnLength; // [rsp+58h] [rbp+10h] BYREF
  int InputBuffer; // [rsp+60h] [rbp+18h] BYREF

  Heap = 0LL;
  v2 = 0;
  v9 = 0;
  v4 = 0LL;
  while ( 1 )
  {
    InputBuffer = 1;
    v5 = NtQuerySystemInformationEx(SystemLogicalProcessorAndGroupInformation, &InputBuffer, 4u, v4, v9, &ReturnLength);
    if ( v5 >= 0 )
      break;
    if ( v5 != -1073741820 )
      goto LABEL_6;
    if ( Heap )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, ReturnLength);
    if ( !Heap )
      return (unsigned int)-1073741801;
    v2 = ReturnLength;
    v4 = Heap;
    v9 = ReturnLength;
  }
  memset(*(void **)(a1 + 48), 0, 16LL * (unsigned int)TppNumberNodes);
  v6 = Heap;
  v7 = &Heap[v2];
  if ( Heap < v7 )
  {
    do
    {
      *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * *((unsigned int *)v6 + 2)) = *((_OWORD *)v6 + 2);
      v6 += *((unsigned int *)v6 + 1);
    }
    while ( v6 < v7 );
  }
  v5 = 0;
LABEL_6:
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
  return (unsigned int)v5;
}
