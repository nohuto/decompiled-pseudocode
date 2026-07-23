/*
 * XREFs of RtlDeleteFunctionTable @ 0x18008CC90
 * Callers:
 *     <none>
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18002C3A0 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180032E40 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlProtectHeap @ 0x180049120 (RtlProtectHeap.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180072330 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAvlRemoveNode @ 0x1800724B0 (RtlAvlRemoveNode.c)
 */

BOOLEAN __cdecl RtlDeleteFunctionTable(PRUNTIME_FUNCTION FunctionTable)
{
  _DWORD *v2; // rsi
  BOOLEAN v3; // di
  __int64 i; // rbx
  int v5; // eax
  int v6; // edi
  int v7; // edi
  __int64 *v8; // rcx
  __int64 *v9; // rcx
  __int64 v10; // rcx
  __int64 *v11; // rax
  int v12; // eax
  PVOID v13; // rcx
  int v14; // eax
  int v15; // edx

  v2 = 0LL;
  v3 = 0;
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  for ( i = RtlpDynamicFunctionTable; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &RtlpDynamicFunctionTable )
      goto LABEL_19;
    v2 = (_DWORD *)i;
    if ( *(PRUNTIME_FUNCTION *)(i + 16) == FunctionTable )
      break;
  }
  LOBYTE(v5) = LdrControlFlowGuardEnforced();
  if ( v5 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v6 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v6 == -1 )
        goto LABEL_35;
    }
    else
    {
      RtlProtectHeap(LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v6 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  v7 = *(_DWORD *)(i + 80);
  if ( v7 != 3 )
  {
    v8 = &RtlpDynamicCallbackTableTreeMin;
    if ( v7 != 2 )
      v8 = &RtlpDynamicFunctionTableTreeMin;
    RtlAvlRemoveNode((unsigned __int64 *)v8, (unsigned __int64 *)(i + 88));
    v9 = &RtlpDynamicCallbackTableTreeMax;
    if ( v7 != 2 )
      v9 = &RtlpDynamicFunctionTableTreeMax;
    RtlAvlRemoveNode((unsigned __int64 *)v9, (unsigned __int64 *)(i + 112));
    v10 = *(_QWORD *)i;
    if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || (v11 = *(__int64 **)(i + 8), *v11 != i) )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
  }
  v3 = 1;
LABEL_19:
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  if ( v3 )
  {
    if ( v2[20] == 3 )
    {
      RtlDeleteGrowableFunctionTable(v2);
    }
    else
    {
      LOBYTE(v12) = LdrControlFlowGuardEnforced();
      v13 = v12 ? LdrpMrdataHeap : NtCurrentPeb()->ProcessHeap;
      RtlFreeHeap(v13, 0, v2);
    }
    LOBYTE(v14) = LdrControlFlowGuardEnforced();
    if ( v14 )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v15 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        *(_DWORD *)LdrpMrdataHeapUnprotected = v15 - 1;
        if ( v15 == 1 )
          RtlProtectHeap(LdrpMrdataHeap, 1u);
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        return v3;
      }
LABEL_35:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
  }
  return v3;
}
