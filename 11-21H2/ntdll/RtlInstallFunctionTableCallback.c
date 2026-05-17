/*
 * XREFs of RtlInstallFunctionTableCallback @ 0x180077F10
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x18001C904 (LdrProtectMrdata.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlProtectHeap @ 0x180030B10 (RtlProtectHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x1800342E0 (LdrControlFlowGuardEnforced.c)
 *     RtlStringCbCopyW @ 0x18004C27C (RtlStringCbCopyW.c)
 *     RtlAvlInsertNodeEx @ 0x180078450 (RtlAvlInsertNodeEx.c)
 *     LdrEnsureMrdataHeapExists @ 0x180087234 (LdrEnsureMrdataHeapExists.c)
 *     ZwQuerySystemTime @ 0x1800A4BB0 (ZwQuerySystemTime.c)
 */

BOOLEAN __cdecl RtlInstallFunctionTableCallback(
        ULONG64 TableIdentifier,
        ULONG64 BaseAddress,
        ULONG Length,
        PGET_RUNTIME_FUNCTION_CALLBACK Callback,
        PVOID Context,
        PCWSTR OutOfProcessCallbackDll)
{
  __int64 v6; // rbp
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9
  int v15; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  __int64 v18; // rbx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r9
  _QWORD *v25; // rdx
  __int64 v26; // r8
  _QWORD *v27; // rax
  _QWORD *v28; // rdx
  __int64 v29; // r8
  _QWORD *v30; // rax
  __int64 *v31; // rax
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // r9
  int v38; // r8d
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // r9
  int v43; // ecx

  v6 = Length;
  if ( (TableIdentifier & 3) != 3 || (Length & 0x80000000) != 0 )
    return 0;
  v10 = 0LL;
  if ( OutOfProcessCallbackDll )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( OutOfProcessCallbackDll[v11] );
    v10 = 2 * v11 + 2;
  }
  if ( (int)LdrEnsureMrdataHeapExists() < 0 )
    return 0;
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v12, v13, v14);
    v15 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v15 == -1 )
        goto LABEL_46;
    }
    else
    {
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v15 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    if ( v10 + 136 >= 0xFF000 )
      goto LABEL_41;
    ProcessHeap = (void *)LdrpMrdataHeap;
  }
  else
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  }
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, v10 + 136);
  v18 = Heap;
  if ( !Heap )
  {
LABEL_41:
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v40, v41, v42);
      v43 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_46;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v43 - 1;
      if ( v43 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return 0;
  }
  *(_QWORD *)(Heap + 16) = TableIdentifier;
  ZwQuerySystemTime(Heap + 24);
  *(_QWORD *)(v18 + 32) = BaseAddress;
  *(_QWORD *)(v18 + 40) = BaseAddress + v6;
  *(_QWORD *)(v18 + 64) = Context;
  *(_QWORD *)(v18 + 48) = BaseAddress;
  *(_QWORD *)(v18 + 56) = Callback;
  *(_DWORD *)(v18 + 80) = 2;
  *(_QWORD *)(v18 + 72) = 0LL;
  if ( OutOfProcessCallbackDll )
  {
    *(_QWORD *)(v18 + 72) = v18 + 136;
    RtlStringCbCopyW((_WORD *)(v18 + 136), v10, (__int64)OutOfProcessCallbackDll);
  }
  LdrProtectMrdata(0, v19, v20, v21);
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpDynamicFunctionTableLock, v22, v23, v24);
  v25 = (_QWORD *)RtlpDynamicCallbackTableTreeMin;
  LOBYTE(v26) = 0;
  if ( !RtlpDynamicCallbackTableTreeMin )
    goto LABEL_25;
  while ( *(_QWORD *)(v18 + 32) < *(v25 - 7) )
  {
    v27 = (_QWORD *)*v25;
    if ( !*v25 )
      goto LABEL_25;
LABEL_22:
    v25 = v27;
  }
  v27 = (_QWORD *)v25[1];
  if ( v27 )
    goto LABEL_22;
  LOBYTE(v26) = 1;
LABEL_25:
  RtlAvlInsertNodeEx(&RtlpDynamicCallbackTableTreeMin, v25, v26, v18 + 88);
  v28 = (_QWORD *)RtlpDynamicCallbackTableTreeMax;
  LOBYTE(v29) = 0;
  if ( !RtlpDynamicCallbackTableTreeMax )
    goto LABEL_31;
  while ( 2 )
  {
    if ( *(_QWORD *)(v18 + 40) < *(v28 - 10) )
    {
      v30 = (_QWORD *)*v28;
      if ( !*v28 )
        goto LABEL_31;
      goto LABEL_28;
    }
    v30 = (_QWORD *)v28[1];
    if ( v30 )
    {
LABEL_28:
      v28 = v30;
      continue;
    }
    break;
  }
  LOBYTE(v29) = 1;
LABEL_31:
  RtlAvlInsertNodeEx(&RtlpDynamicCallbackTableTreeMax, v28, v29, v18 + 112);
  v31 = (__int64 *)qword_18018F2C8;
  if ( *(__int64 **)qword_18018F2C8 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v18 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v18 + 8) = v31;
  *v31 = v18;
  qword_18018F2C8 = v18;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1, v32, v33, v34);
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v35, v36, v37);
    v38 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      *(_DWORD *)LdrpMrdataHeapUnprotected = v38 - 1;
      if ( v38 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      return 1;
    }
LABEL_46:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  return 1;
}
