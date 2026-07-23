/*
 * XREFs of RtlAddFunctionTable @ 0x180077780
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x18001C904 (LdrProtectMrdata.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlProtectHeap @ 0x180030B10 (RtlProtectHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x1800342E0 (LdrControlFlowGuardEnforced.c)
 *     RtlAvlInsertNodeEx @ 0x180078450 (RtlAvlInsertNodeEx.c)
 *     LdrEnsureMrdataHeapExists @ 0x180087234 (LdrEnsureMrdataHeapExists.c)
 *     ZwQuerySystemTime @ 0x1800A4BB0 (ZwQuerySystemTime.c)
 */

BOOLEAN __cdecl RtlAddFunctionTable(PRUNTIME_FUNCTION FunctionTable, ULONG EntryCount, ULONG64 BaseAddress)
{
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  PVOID ProcessHeap; // rcx
  LARGE_INTEGER *Heap; // rax
  __int64 v11; // rbx
  unsigned __int64 BeginAddress; // rax
  PRUNTIME_FUNCTION v13; // rdx
  ULONG v14; // r9d
  unsigned __int64 EndAddress; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // r8
  _QWORD *v18; // rax
  _QWORD *v19; // rdx
  __int64 v20; // r8
  _QWORD *v21; // rax
  __int64 *v22; // rax
  int v23; // eax
  int v24; // ecx
  int v26; // eax
  int v27; // r8d
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // r8
  int v30; // r11d

  if ( (int)LdrEnsureMrdataHeapExists() < 0 )
    return 0;
  LOBYTE(v6) = LdrControlFlowGuardEnforced();
  if ( v6 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v7 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v7 == -1 )
        goto LABEL_51;
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
    LOBYTE(v26) = LdrControlFlowGuardEnforced();
    if ( v26 )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v27 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_51;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v27 - 1;
      if ( v27 == 1 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return 0;
  }
  Heap[2].QuadPart = (__int64)FunctionTable;
  Heap[10].HighPart = EntryCount;
  ZwQuerySystemTime(Heap + 3);
  BeginAddress = FunctionTable->BeginAddress;
  v13 = FunctionTable + 1;
  *(_QWORD *)(v11 + 32) = BeginAddress;
  v14 = 1;
  EndAddress = FunctionTable->EndAddress;
  *(_DWORD *)(v11 + 80) = 0;
  *(_QWORD *)(v11 + 40) = EndAddress;
  *(_QWORD *)(v11 + 48) = BaseAddress;
  if ( EntryCount > 1 )
  {
    v28 = EndAddress;
    v29 = BeginAddress;
    v30 = 0;
    do
    {
      if ( !v30 && v13->BeginAddress < FunctionTable[v14 - 1].BeginAddress )
      {
        v30 = 1;
        *(_DWORD *)(v11 + 80) = 1;
      }
      BeginAddress = v13->BeginAddress;
      if ( BeginAddress >= v29 )
      {
        BeginAddress = v29;
      }
      else
      {
        v29 = (unsigned int)BeginAddress;
        *(_QWORD *)(v11 + 32) = BeginAddress;
      }
      EndAddress = v13->EndAddress;
      if ( EndAddress <= v28 )
        EndAddress = *(_QWORD *)(v11 + 40);
      else
        *(_QWORD *)(v11 + 40) = EndAddress;
      ++v13;
      ++v14;
      v28 = EndAddress;
    }
    while ( v14 < EntryCount );
  }
  *(_QWORD *)(v11 + 32) = BaseAddress + BeginAddress;
  *(_QWORD *)(v11 + 40) = EndAddress + BaseAddress;
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  v16 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
  LOBYTE(v17) = 0;
  if ( !RtlpDynamicFunctionTableTreeMin )
    goto LABEL_16;
  while ( *(_QWORD *)(v11 + 32) < *(v16 - 7) )
  {
    v18 = (_QWORD *)*v16;
    if ( !*v16 )
      goto LABEL_16;
LABEL_13:
    v16 = v18;
  }
  v18 = (_QWORD *)v16[1];
  if ( v18 )
    goto LABEL_13;
  LOBYTE(v17) = 1;
LABEL_16:
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMin, v16, v17, v11 + 88);
  v19 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
  LOBYTE(v20) = 0;
  if ( !RtlpDynamicFunctionTableTreeMax )
    goto LABEL_22;
  while ( 2 )
  {
    if ( *(_QWORD *)(v11 + 40) < *(v19 - 10) )
    {
      v21 = (_QWORD *)*v19;
      if ( !*v19 )
        goto LABEL_22;
      goto LABEL_19;
    }
    v21 = (_QWORD *)v19[1];
    if ( v21 )
    {
LABEL_19:
      v19 = v21;
      continue;
    }
    break;
  }
  LOBYTE(v20) = 1;
LABEL_22:
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMax, v19, v20, v11 + 112);
  v22 = (__int64 *)qword_18018F2C8;
  if ( *(__int64 **)qword_18018F2C8 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v11 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v11 + 8) = v22;
  *v22 = v11;
  qword_18018F2C8 = v11;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  LOBYTE(v23) = LdrControlFlowGuardEnforced();
  if ( v23 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v24 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      *(_DWORD *)LdrpMrdataHeapUnprotected = v24 - 1;
      if ( v24 == 1 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      return 1;
    }
LABEL_51:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  return 1;
}
