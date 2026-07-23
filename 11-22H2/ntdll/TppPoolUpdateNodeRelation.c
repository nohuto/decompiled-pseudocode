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
  char *Heap; // rdi
  int v3; // esi
  void *v4; // r9
  NTSTATUS v5; // ebx
  int v6; // ebx
  char *v7; // r9
  char *v8; // r11
  unsigned __int16 i; // r10
  __int64 v10; // rax
  ULONG SystemInformationLength; // [rsp+20h] [rbp-28h]
  SIZE_T Size; // [rsp+58h] [rbp+10h] BYREF
  int InputBuffer; // [rsp+60h] [rbp+18h] BYREF

  SystemInformationLength = 0;
  Heap = 0LL;
  v3 = 0;
  v4 = 0LL;
  while ( 1 )
  {
    InputBuffer = 6;
    v5 = NtQuerySystemInformationEx(
           SystemLogicalProcessorAndGroupInformation,
           &InputBuffer,
           4u,
           v4,
           SystemInformationLength,
           (PULONG)&Size);
    if ( v5 >= 0 )
      break;
    if ( v5 != -1073741820 )
      goto LABEL_13;
    if ( Heap )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, (unsigned int)Size);
    if ( !Heap )
      return (unsigned int)-1073741801;
    v3 = Size;
    v4 = Heap;
    SystemInformationLength = Size;
  }
  v6 = TppMaximumGroups;
  memset_thunk_772440563353939046(
    *(void **)(a1 + 48),
    0,
    16 * (unsigned int)TppNumberNodes * (unsigned __int64)(unsigned int)TppMaximumGroups);
  v7 = Heap;
  v8 = &Heap[v3];
  if ( Heap < v8 )
  {
    do
    {
      for ( i = 0;
            i < *((_WORD *)v7 + 15);
            *(_OWORD *)(*(_QWORD *)(a1 + 48)
                      + 16LL * (*((_DWORD *)v7 + 2) * v6 + (unsigned int)*(unsigned __int16 *)&v7[16 * v10 + 40])) = *(_OWORD *)&v7[16 * (unsigned int)v10 + 32] )
      {
        v10 = i++;
      }
      v7 += *((unsigned int *)v7 + 1);
    }
    while ( v7 < v8 );
  }
  v5 = 0;
LABEL_13:
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
  return (unsigned int)v5;
}
