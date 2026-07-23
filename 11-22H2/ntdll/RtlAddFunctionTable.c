/*
 * XREFs of RtlAddFunctionTable @ 0x1800EB1E0
 * Callers:
 *     <none>
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18002C570 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180032FA0 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlProtectHeap @ 0x180049280 (RtlProtectHeap.c)
 *     RtlAvlInsertNodeEx @ 0x180072490 (RtlAvlInsertNodeEx.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081A04 (LdrEnsureMrdataHeapExists.c)
 *     ZwQuerySystemTime @ 0x18009F930 (ZwQuerySystemTime.c)
 */

BOOLEAN __cdecl RtlAddFunctionTable(PRUNTIME_FUNCTION FunctionTable, ULONG EntryCount, ULONG64 BaseAddress)
{
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  PVOID ProcessHeap; // rcx
  LARGE_INTEGER *Heap; // rax
  __int64 v11; // rbx
  int v12; // eax
  int v13; // r8d
  unsigned __int64 BeginAddress; // rax
  PRUNTIME_FUNCTION v16; // r9
  ULONG v17; // r11d
  unsigned __int64 EndAddress; // rcx
  int v19; // edx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r8
  _QWORD *v24; // rdx
  bool v25; // r8
  _QWORD *v26; // rax
  _QWORD *v27; // rdx
  bool v28; // r8
  _QWORD *v29; // rax
  __int64 *v30; // rax
  int v31; // eax
  int v32; // ecx

  if ( LdrEnsureMrdataHeapExists() < 0 )
    return 0;
  LOBYTE(v6) = LdrControlFlowGuardEnforced();
  if ( v6 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v7 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v7 == -1 )
        goto LABEL_45;
    }
    else
    {
      RtlProtectHeap(LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v7 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  LOBYTE(v8) = LdrControlFlowGuardEnforced();
  if ( v8 )
    ProcessHeap = LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = (LARGE_INTEGER *)RtlAllocateHeap(ProcessHeap, 0, 0x88uLL);
  v11 = (__int64)Heap;
  if ( !Heap )
  {
    LOBYTE(v12) = LdrControlFlowGuardEnforced();
    if ( v12 )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v13 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_45;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v13 - 1;
      if ( v13 == 1 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return 0;
  }
  Heap[2].QuadPart = (__int64)FunctionTable;
  Heap[10].HighPart = EntryCount;
  ZwQuerySystemTime(Heap + 3);
  BeginAddress = FunctionTable->BeginAddress;
  v16 = FunctionTable + 1;
  *(_QWORD *)(v11 + 32) = BeginAddress;
  v17 = 1;
  EndAddress = FunctionTable->EndAddress;
  *(_DWORD *)(v11 + 80) = 0;
  *(_QWORD *)(v11 + 40) = EndAddress;
  *(_QWORD *)(v11 + 48) = BaseAddress;
  if ( EntryCount > 1 )
  {
    v19 = 0;
    v20 = (unsigned int)BeginAddress;
    v21 = (unsigned int)EndAddress;
    do
    {
      if ( !v19 && v16->BeginAddress < FunctionTable[v17 - 1].BeginAddress )
      {
        *(_DWORD *)(v11 + 80) = 1;
        v19 = 1;
      }
      v22 = v16->BeginAddress;
      BeginAddress = v20;
      if ( v22 < v20 )
      {
        *(_QWORD *)(v11 + 32) = v22;
        BeginAddress = (unsigned int)v22;
      }
      v23 = v16->EndAddress;
      EndAddress = v21;
      if ( v23 > v21 )
      {
        *(_QWORD *)(v11 + 40) = v23;
        EndAddress = (unsigned int)v23;
      }
      ++v16;
      ++v17;
      v20 = BeginAddress;
      v21 = EndAddress;
    }
    while ( v17 < EntryCount );
  }
  *(_QWORD *)(v11 + 32) = BaseAddress + BeginAddress;
  *(_QWORD *)(v11 + 40) = EndAddress + BaseAddress;
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  v24 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
  v25 = 0;
  if ( !RtlpDynamicFunctionTableTreeMin )
    goto LABEL_34;
  while ( *(_QWORD *)(v11 + 32) < *(v24 - 7) )
  {
    v26 = (_QWORD *)*v24;
    if ( !*v24 )
      goto LABEL_34;
LABEL_32:
    v24 = v26;
  }
  v26 = (_QWORD *)v24[1];
  if ( v26 )
    goto LABEL_32;
  v25 = 1;
LABEL_34:
  RtlAvlInsertNodeEx((unsigned __int64 *)&RtlpDynamicFunctionTableTreeMin, (unsigned __int64)v24, v25, v11 + 88);
  v27 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
  v28 = 0;
  if ( !RtlpDynamicFunctionTableTreeMax )
    goto LABEL_41;
  while ( 2 )
  {
    if ( *(_QWORD *)(v11 + 40) < *(v27 - 10) )
    {
      v29 = (_QWORD *)*v27;
      if ( !*v27 )
        goto LABEL_41;
      goto LABEL_39;
    }
    v29 = (_QWORD *)v27[1];
    if ( v29 )
    {
LABEL_39:
      v27 = v29;
      continue;
    }
    break;
  }
  v28 = 1;
LABEL_41:
  RtlAvlInsertNodeEx((unsigned __int64 *)&RtlpDynamicFunctionTableTreeMax, (unsigned __int64)v27, v28, v11 + 112);
  v30 = (__int64 *)qword_1801992D8;
  if ( *(__int64 **)qword_1801992D8 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v11 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v11 + 8) = v30;
  *v30 = v11;
  qword_1801992D8 = v11;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  LOBYTE(v31) = LdrControlFlowGuardEnforced();
  if ( v31 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v32 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
LABEL_45:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v32 - 1;
    if ( v32 == 1 )
      RtlProtectHeap(LdrpMrdataHeap, 1u);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  return 1;
}
