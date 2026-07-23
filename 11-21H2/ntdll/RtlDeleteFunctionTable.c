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
        goto LABEL_33;
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
    RtlAvlRemoveNode(v8, i + 88);
    v9 = &RtlpDynamicCallbackTableTreeMax;
    if ( v7 != 2 )
      v9 = &RtlpDynamicFunctionTableTreeMax;
    RtlAvlRemoveNode(v9, i + 112);
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
LABEL_33:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
  }
  return v3;
}
