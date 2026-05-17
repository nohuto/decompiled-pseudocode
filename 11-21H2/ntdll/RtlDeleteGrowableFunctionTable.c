/*
 * XREFs of RtlDeleteGrowableFunctionTable @ 0x1800779E0
 * Callers:
 *     RtlDeleteFunctionTable @ 0x1800775B0 (RtlDeleteFunctionTable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x18001C904 (LdrProtectMrdata.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlProtectHeap @ 0x180030B10 (RtlProtectHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x1800342E0 (LdrControlFlowGuardEnforced.c)
 *     RtlAvlRemoveNode @ 0x180077B70 (RtlAvlRemoveNode.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     NtSetInformationProcess @ 0x1800A43F0 (NtSetInformationProcess.c)
 */

signed __int64 __fastcall RtlDeleteGrowableFunctionTable(__int64 a1)
{
  int v2; // eax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  int v9; // edi
  __int64 v10; // rdx
  _QWORD *v11; // rax
  void *ProcessHeap; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9
  int v16; // edx
  __int64 v18; // [rsp+20h] [rbp-18h] BYREF
  char v19; // [rsp+28h] [rbp-10h]

  if ( *(_DWORD *)(a1 + 80) != 3 )
  {
    RtlRaiseStatus(3221225485LL);
    __debugbreak();
  }
  v18 = a1;
  v19 = 1;
  v2 = NtSetInformationProcess(-1LL, 53LL, &v18, 16LL);
  if ( v2 < 0 )
  {
    RtlRaiseStatus((unsigned int)v2);
    __debugbreak();
  }
  LdrProtectMrdata(0, v3, v4, v5);
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v6, v7, v8);
    v9 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v9 == -1 )
        goto LABEL_21;
    }
    else
    {
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v9 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpDynamicFunctionTableLock, v6, v7, v8);
  RtlAvlRemoveNode(&RtlpDynamicFunctionTableTreeMin, a1 + 88);
  RtlAvlRemoveNode(&RtlpDynamicFunctionTableTreeMax, a1 + 112);
  v10 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v11 = *(_QWORD **)(a1 + 8), *v11 != a1) )
    __fastfail(3u);
  *v11 = v10;
  *(_QWORD *)(v10 + 8) = v11;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
    ProcessHeap = (void *)LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlFreeHeap((__int64)ProcessHeap, 0, a1);
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v13, v14, v15);
    v16 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      *(_DWORD *)LdrpMrdataHeapUnprotected = v16 - 1;
      if ( v16 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      return LdrProtectMrdata(1, v13, v14, v15);
    }
LABEL_21:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  return LdrProtectMrdata(1, v13, v14, v15);
}
