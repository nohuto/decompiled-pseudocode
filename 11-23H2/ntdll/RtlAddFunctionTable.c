/*
 * XREFs of RtlAddFunctionTable @ 0x1800EC510
 * Callers:
 *     <none>
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18002C3A0 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180032E40 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlProtectHeap @ 0x180049120 (RtlProtectHeap.c)
 *     RtlAvlInsertNodeEx @ 0x180072B00 (RtlAvlInsertNodeEx.c)
 *     LdrEnsureMrdataHeapExists @ 0x180082074 (LdrEnsureMrdataHeapExists.c)
 *     ZwQuerySystemTime @ 0x1800A19F0 (ZwQuerySystemTime.c)
 */

BOOLEAN __cdecl RtlAddFunctionTable(PRUNTIME_FUNCTION FunctionTable, ULONG EntryCount, ULONG64 BaseAddress)
{
  int v6; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  __int64 v9; // rbx
  int v10; // r8d
  unsigned __int64 BeginAddress; // rax
  PRUNTIME_FUNCTION v13; // r9
  ULONG v14; // r11d
  unsigned __int64 EndAddress; // rcx
  int v16; // edx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r8
  _QWORD *v21; // rdx
  bool v22; // r8
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  bool v25; // r8
  _QWORD *v26; // rax
  __int64 *v27; // rax
  int v28; // ecx

  if ( (int)LdrEnsureMrdataHeapExists() < 0 )
    return 0;
  if ( LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v6 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v6 == -1 )
        goto LABEL_45;
    }
    else
    {
      RtlProtectHeap((__m128i *)LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v6 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  if ( LdrControlFlowGuardEnforced() )
    ProcessHeap = (void *)LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, 136LL);
  v9 = Heap;
  if ( !Heap )
  {
    if ( LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v10 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_45;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v10 - 1;
      if ( v10 == 1 )
        RtlProtectHeap((__m128i *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return 0;
  }
  *(_QWORD *)(Heap + 16) = FunctionTable;
  *(_DWORD *)(Heap + 84) = EntryCount;
  ZwQuerySystemTime((_QWORD *)(Heap + 24));
  BeginAddress = FunctionTable->BeginAddress;
  v13 = FunctionTable + 1;
  *(_QWORD *)(v9 + 32) = BeginAddress;
  v14 = 1;
  EndAddress = FunctionTable->EndAddress;
  *(_DWORD *)(v9 + 80) = 0;
  *(_QWORD *)(v9 + 40) = EndAddress;
  *(_QWORD *)(v9 + 48) = BaseAddress;
  if ( EntryCount > 1 )
  {
    v16 = 0;
    v17 = (unsigned int)BeginAddress;
    v18 = (unsigned int)EndAddress;
    do
    {
      if ( !v16 && v13->BeginAddress < FunctionTable[v14 - 1].BeginAddress )
      {
        *(_DWORD *)(v9 + 80) = 1;
        v16 = 1;
      }
      v19 = v13->BeginAddress;
      BeginAddress = v17;
      if ( v19 < v17 )
      {
        *(_QWORD *)(v9 + 32) = v19;
        BeginAddress = (unsigned int)v19;
      }
      v20 = v13->EndAddress;
      EndAddress = v18;
      if ( v20 > v18 )
      {
        *(_QWORD *)(v9 + 40) = v20;
        EndAddress = (unsigned int)v20;
      }
      ++v13;
      ++v14;
      v17 = BeginAddress;
      v18 = EndAddress;
    }
    while ( v14 < EntryCount );
  }
  *(_QWORD *)(v9 + 32) = BaseAddress + BeginAddress;
  *(_QWORD *)(v9 + 40) = EndAddress + BaseAddress;
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  v21 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
  v22 = 0;
  if ( !RtlpDynamicFunctionTableTreeMin )
    goto LABEL_34;
  while ( *(_QWORD *)(v9 + 32) < *(v21 - 7) )
  {
    v23 = (_QWORD *)*v21;
    if ( !*v21 )
      goto LABEL_34;
LABEL_32:
    v21 = v23;
  }
  v23 = (_QWORD *)v21[1];
  if ( v23 )
    goto LABEL_32;
  v22 = 1;
LABEL_34:
  RtlAvlInsertNodeEx((unsigned __int64 *)&RtlpDynamicFunctionTableTreeMin, (unsigned __int64)v21, v22, v9 + 88);
  v24 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
  v25 = 0;
  if ( !RtlpDynamicFunctionTableTreeMax )
    goto LABEL_41;
  while ( 2 )
  {
    if ( *(_QWORD *)(v9 + 40) < *(v24 - 10) )
    {
      v26 = (_QWORD *)*v24;
      if ( !*v24 )
        goto LABEL_41;
      goto LABEL_39;
    }
    v26 = (_QWORD *)v24[1];
    if ( v26 )
    {
LABEL_39:
      v24 = v26;
      continue;
    }
    break;
  }
  v25 = 1;
LABEL_41:
  RtlAvlInsertNodeEx((unsigned __int64 *)&RtlpDynamicFunctionTableTreeMax, (unsigned __int64)v24, v25, v9 + 112);
  v27 = (__int64 *)qword_18019C2E0;
  if ( *(__int64 **)qword_18019C2E0 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v9 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v9 + 8) = v27;
  *v27 = v9;
  qword_18019C2E0 = v9;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  if ( LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v28 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
LABEL_45:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v28 - 1;
    if ( v28 == 1 )
      RtlProtectHeap((__m128i *)LdrpMrdataHeap, 1);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  return 1;
}
