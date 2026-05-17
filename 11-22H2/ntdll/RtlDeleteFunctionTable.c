/*
 * XREFs of RtlDeleteFunctionTable @ 0x18008C490
 * Callers:
 *     <none>
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18002C570 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180032FA0 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlProtectHeap @ 0x180049280 (RtlProtectHeap.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180071CC0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAvlRemoveNode @ 0x180071E40 (RtlAvlRemoveNode.c)
 */

BOOLEAN __cdecl RtlDeleteFunctionTable(PRUNTIME_FUNCTION FunctionTable)
{
  __int64 v2; // rsi
  BOOLEAN v3; // di
  __int64 i; // rbx
  int v5; // edi
  int v6; // edi
  __int64 *v7; // rcx
  __int64 *v8; // rcx
  __int64 v9; // rcx
  __int64 *v10; // rax
  void *v11; // rcx
  int v12; // edx

  v2 = 0LL;
  v3 = 0;
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  for ( i = RtlpDynamicFunctionTable; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &RtlpDynamicFunctionTable )
      goto LABEL_19;
    v2 = i;
    if ( *(PRUNTIME_FUNCTION *)(i + 16) == FunctionTable )
      break;
  }
  if ( LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v5 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v5 == -1 )
        goto LABEL_35;
    }
    else
    {
      RtlProtectHeap((__m128i *)LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v5 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  v6 = *(_DWORD *)(i + 80);
  if ( v6 != 3 )
  {
    v7 = &RtlpDynamicCallbackTableTreeMin;
    if ( v6 != 2 )
      v7 = &RtlpDynamicFunctionTableTreeMin;
    RtlAvlRemoveNode((unsigned __int64 *)v7, (unsigned __int64 *)(i + 88));
    v8 = &RtlpDynamicCallbackTableTreeMax;
    if ( v6 != 2 )
      v8 = &RtlpDynamicFunctionTableTreeMax;
    RtlAvlRemoveNode((unsigned __int64 *)v8, (unsigned __int64 *)(i + 112));
    v9 = *(_QWORD *)i;
    if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || (v10 = *(__int64 **)(i + 8), *v10 != i) )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
  }
  v3 = 1;
LABEL_19:
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  if ( v3 )
  {
    if ( *(_DWORD *)(v2 + 80) == 3 )
    {
      RtlDeleteGrowableFunctionTable(v2);
    }
    else
    {
      v11 = LdrControlFlowGuardEnforced() ? (void *)LdrpMrdataHeap : NtCurrentPeb()->ProcessHeap;
      RtlFreeHeap((__int64)v11, 0, v2);
    }
    if ( LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v12 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        *(_DWORD *)LdrpMrdataHeapUnprotected = v12 - 1;
        if ( v12 == 1 )
          RtlProtectHeap((__m128i *)LdrpMrdataHeap, 1);
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
