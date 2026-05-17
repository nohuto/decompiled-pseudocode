/*
 * XREFs of RtlDeleteFunctionTable @ 0x1800775B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x18001C904 (LdrProtectMrdata.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlProtectHeap @ 0x180030B10 (RtlProtectHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x1800342E0 (LdrControlFlowGuardEnforced.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800779E0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAvlRemoveNode @ 0x180077B70 (RtlAvlRemoveNode.c)
 */

BOOLEAN __cdecl RtlDeleteFunctionTable(PRUNTIME_FUNCTION FunctionTable)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r9
  __int64 v5; // rsi
  BOOLEAN v6; // di
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  __int64 i; // rbx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  int v14; // edi
  int v15; // edi
  __int64 *v16; // rcx
  __int64 *v17; // rcx
  __int64 v18; // rcx
  __int64 *v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r9
  void *v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r9
  int v27; // edx

  v5 = 0LL;
  v6 = 0;
  LdrProtectMrdata(0, v1, v2, v3);
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpDynamicFunctionTableLock, v7, v8, v9);
  for ( i = RtlpDynamicFunctionTable; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &RtlpDynamicFunctionTable )
      goto LABEL_19;
    v5 = i;
    if ( *(PRUNTIME_FUNCTION *)(i + 16) == FunctionTable )
      break;
  }
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v11, v12, v13);
    v14 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v14 == -1 )
        goto LABEL_33;
    }
    else
    {
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v14 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  v15 = *(_DWORD *)(i + 80);
  if ( v15 != 3 )
  {
    v16 = &RtlpDynamicCallbackTableTreeMin;
    if ( v15 != 2 )
      v16 = &RtlpDynamicFunctionTableTreeMin;
    RtlAvlRemoveNode(v16, i + 88);
    v17 = &RtlpDynamicCallbackTableTreeMax;
    if ( v15 != 2 )
      v17 = &RtlpDynamicFunctionTableTreeMax;
    RtlAvlRemoveNode(v17, i + 112);
    v18 = *(_QWORD *)i;
    if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || (v19 = *(__int64 **)(i + 8), *v19 != i) )
      __fastfail(3u);
    *v19 = v18;
    *(_QWORD *)(v18 + 8) = v19;
  }
  v6 = 1;
LABEL_19:
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1, v20, v21, v22);
  if ( v6 )
  {
    if ( *(_DWORD *)(v5 + 80) == 3 )
    {
      RtlDeleteGrowableFunctionTable(v5);
    }
    else
    {
      v23 = (unsigned int)LdrControlFlowGuardEnforced() ? (void *)LdrpMrdataHeap : NtCurrentPeb()->ProcessHeap;
      RtlFreeHeap((__int64)v23, 0, v5);
    }
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v24, v25, v26);
      v27 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        *(_DWORD *)LdrpMrdataHeapUnprotected = v27 - 1;
        if ( v27 == 1 )
          RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        return v6;
      }
LABEL_33:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
  }
  return v6;
}
