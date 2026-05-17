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
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  int v9; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  __int64 v12; // rbx
  unsigned __int64 v13; // r8
  unsigned __int64 BeginAddress; // rax
  PRUNTIME_FUNCTION v15; // rdx
  unsigned __int64 v16; // r9
  unsigned __int64 EndAddress; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r9
  _QWORD *v21; // rdx
  __int64 v22; // r8
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // r8
  _QWORD *v26; // rax
  __int64 *v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // r9
  int v34; // ecx
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // r9
  int v39; // r8d
  unsigned __int64 v40; // r10
  int v41; // r11d

  if ( (int)LdrEnsureMrdataHeapExists() < 0 )
    return 0;
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v6, v7, v8);
    v9 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v9 == -1 )
        goto LABEL_51;
    }
    else
    {
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v9 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
    ProcessHeap = (void *)LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, 136LL);
  v12 = Heap;
  if ( !Heap )
  {
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v36, v37, v38);
      v39 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_51;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v39 - 1;
      if ( v39 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return 0;
  }
  *(_QWORD *)(Heap + 16) = FunctionTable;
  *(_DWORD *)(Heap + 84) = EntryCount;
  ZwQuerySystemTime(Heap + 24);
  BeginAddress = FunctionTable->BeginAddress;
  v15 = FunctionTable + 1;
  *(_QWORD *)(v12 + 32) = BeginAddress;
  v16 = 1LL;
  EndAddress = FunctionTable->EndAddress;
  *(_DWORD *)(v12 + 80) = 0;
  *(_QWORD *)(v12 + 40) = EndAddress;
  *(_QWORD *)(v12 + 48) = BaseAddress;
  if ( EntryCount > 1 )
  {
    v40 = EndAddress;
    v13 = BeginAddress;
    v41 = 0;
    do
    {
      if ( !v41 && v15->BeginAddress < FunctionTable[(unsigned int)(v16 - 1)].BeginAddress )
      {
        v41 = 1;
        *(_DWORD *)(v12 + 80) = 1;
      }
      BeginAddress = v15->BeginAddress;
      if ( BeginAddress >= v13 )
      {
        BeginAddress = v13;
      }
      else
      {
        v13 = (unsigned int)BeginAddress;
        *(_QWORD *)(v12 + 32) = BeginAddress;
      }
      EndAddress = v15->EndAddress;
      if ( EndAddress <= v40 )
        EndAddress = *(_QWORD *)(v12 + 40);
      else
        *(_QWORD *)(v12 + 40) = EndAddress;
      ++v15;
      v16 = (unsigned int)(v16 + 1);
      v40 = EndAddress;
    }
    while ( (unsigned int)v16 < EntryCount );
  }
  *(_QWORD *)(v12 + 32) = BaseAddress + BeginAddress;
  *(_QWORD *)(v12 + 40) = EndAddress + BaseAddress;
  LdrProtectMrdata(0, (unsigned __int64)v15, v13, v16);
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpDynamicFunctionTableLock, v18, v19, v20);
  v21 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
  LOBYTE(v22) = 0;
  if ( !RtlpDynamicFunctionTableTreeMin )
    goto LABEL_16;
  while ( *(_QWORD *)(v12 + 32) < *(v21 - 7) )
  {
    v23 = (_QWORD *)*v21;
    if ( !*v21 )
      goto LABEL_16;
LABEL_13:
    v21 = v23;
  }
  v23 = (_QWORD *)v21[1];
  if ( v23 )
    goto LABEL_13;
  LOBYTE(v22) = 1;
LABEL_16:
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMin, v21, v22, v12 + 88);
  v24 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
  LOBYTE(v25) = 0;
  if ( !RtlpDynamicFunctionTableTreeMax )
    goto LABEL_22;
  while ( 2 )
  {
    if ( *(_QWORD *)(v12 + 40) < *(v24 - 10) )
    {
      v26 = (_QWORD *)*v24;
      if ( !*v24 )
        goto LABEL_22;
      goto LABEL_19;
    }
    v26 = (_QWORD *)v24[1];
    if ( v26 )
    {
LABEL_19:
      v24 = v26;
      continue;
    }
    break;
  }
  LOBYTE(v25) = 1;
LABEL_22:
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMax, v24, v25, v12 + 112);
  v27 = (__int64 *)qword_18018F2C8;
  if ( *(__int64 **)qword_18018F2C8 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v12 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v12 + 8) = v27;
  *v27 = v12;
  qword_18018F2C8 = v12;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1, v28, v29, v30);
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v31, v32, v33);
    v34 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      *(_DWORD *)LdrpMrdataHeapUnprotected = v34 - 1;
      if ( v34 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      return 1;
    }
LABEL_51:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  return 1;
}
