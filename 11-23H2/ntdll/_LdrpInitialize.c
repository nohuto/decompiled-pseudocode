/*
 * XREFs of _LdrpInitialize @ 0x1800745DC
 * Callers:
 *     LdrpInitializeInternal @ 0x180074538 (LdrpInitializeInternal.c)
 * Callees:
 *     LdrpWaitForInitializationComplete @ 0x180002CDC (LdrpWaitForInitializationComplete.c)
 *     LdrpLogDllState @ 0x180019AB4 (LdrpLogDllState.c)
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     LdrpInitializeThread @ 0x180028888 (LdrpInitializeThread.c)
 *     RtlSleepConditionVariableSRW @ 0x180069720 (RtlSleepConditionVariableSRW.c)
 *     LdrpInitializationComplete @ 0x1800746D0 (LdrpInitializationComplete.c)
 *     RtlInitializeHeapGC @ 0x180081820 (RtlInitializeHeapGC.c)
 *     LdrpTouchThreadStack @ 0x180084B3C (LdrpTouchThreadStack.c)
 *     LdrpInitializationFailure @ 0x18008ACF0 (LdrpInitializationFailure.c)
 *     ZwTerminateProcess @ 0x1800A1430 (ZwTerminateProcess.c)
 *     ZwCreateEvent @ 0x1800A17B0 (ZwCreateEvent.c)
 *     ZwTestAlert @ 0x1800A48A0 (ZwTestAlert.c)
 *     LdrInitializeMrdata @ 0x1800AFA90 (LdrInitializeMrdata.c)
 *     LdrpDoDebuggerBreak @ 0x1800DCC44 (LdrpDoDebuggerBreak.c)
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x1800DFD8C (LdrpInitializeProcessWrapperFilter.c)
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
 */

NTSTATUS __fastcall LdrpInitialize(__int64 a1, __int64 a2, __int64 a3)
{
  struct _TEB *v3; // r13
  NTSTATUS result; // eax
  $DF4FA9F692459BA109B62B4026D83C94 *v5; // r14
  _PEB *ProcessEnvironmentBlock; // r15
  NTSTATUS v7; // edi
  int v8; // eax
  char v9; // al
  int v10; // eax
  struct _PEB *v11; // rax
  int v12; // [rsp+30h] [rbp-48h]

  v3 = NtCurrentTeb();
  while ( 1 )
  {
    result = _InterlockedCompareExchange(&LdrpProcessInitialized, 1, 0);
    v5 = &v3->6126;
    if ( result == 1 && (v5->SameTebFlags & 0x2000) == 0 )
      goto LABEL_15;
    ProcessEnvironmentBlock = v3->ProcessEnvironmentBlock;
    if ( !result )
      break;
    v7 = 0;
    if ( !ProcessEnvironmentBlock->InheritedAddressSpace )
      goto LABEL_5;
    LdrpInitCompleteEvent = 0LL;
    if ( _InterlockedCompareExchange(&LdrpProcessInitialized, 1, 2) == 2 )
    {
      if ( ProcessEnvironmentBlock->InheritedAddressSpace )
      {
        v11 = NtCurrentPeb();
        LdrpForkActiveLock.0 = 0LL;
        LdrpForkConditionVariable.Ptr = 0LL;
        v11->InheritedAddressSpace = 0;
        if ( v11->BeingDebugged )
          LdrpDoDebuggerBreak();
      }
      result = LdrpInitializationComplete(&LdrpProcessInitialized, &LdrpInitCompleteEvent, 5252LL);
      v7 = 0;
LABEL_5:
      if ( (v5->SameTebFlags & 0x40) == 0 )
      {
        if ( LdrpForkInProgress )
        {
          RtlAcquireSRWLockShared(&LdrpForkActiveLock);
          while ( LdrpForkInProgress )
            RtlSleepConditionVariableSRW(&LdrpForkConditionVariable, &LdrpForkActiveLock, 0LL, 1u);
          RtlReleaseSRWLockShared(&LdrpForkActiveLock);
        }
        if ( UseWOW64 )
          g_LdrpWow64LdrpInitialize(a1);
        result = LdrpInitializeThread(a1, a2, a3);
      }
      goto LABEL_10;
    }
LABEL_15:
    LdrpWaitForInitializationComplete(&LdrpProcessInitialized, &LdrpInitCompleteEvent);
  }
  ZwCreateEvent(&LdrpInitCompleteEvent, 0x1F0003u, 0LL, NotificationEvent, 0);
  v5->SameTebFlags |= 0x20u;
  ProcessEnvironmentBlock->LoaderLock = &LdrpLoaderLock;
  LdrInitState = 0;
  _interlockedbittestandset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
  qword_18019C2E0 = (__int64)&RtlpDynamicFunctionTable;
  RtlpDynamicFunctionTable = (__int64)&RtlpDynamicFunctionTable;
  RtlpDynamicFunctionTableLock.0 = 0LL;
  RtlpDynamicFunctionTableTreeMin = 0LL;
  RtlpDynamicFunctionTableTreeMax = 0LL;
  RtlpDynamicCallbackTableTreeMin = 0LL;
  RtlpDynamicCallbackTableTreeMax = 0LL;
  v8 = LdrInitializeMrdata();
  v7 = v8;
  if ( v8 >= 0 )
  {
    v9 = LdrpDetourExist;
    if ( LdrpIsSecureProcess )
      v9 = 1;
    LdrpDetourExist = v9;
    v10 = LdrpInitializeProcess(a1, a2);
    v7 = v10;
    v12 = v10;
    if ( v10 >= 0 )
    {
      LdrpLogDllState(*(_QWORD *)(LdrpImageEntry + 48), LdrpImageEntry + 72, 0x14AEu);
      if ( ProcessEnvironmentBlock->MinimumStackCommit )
        v12 = LdrpTouchThreadStack();
      LdrInitState = 3;
      _interlockedbittestandreset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
      result = RtlInitializeHeapGC(LdrpThreadPool);
      v7 = v12;
      if ( v12 >= 0 && (!UseWOW64 || LdrpProcessInitialized == 1) )
        result = LdrpInitializationComplete(&LdrpProcessInitialized, &LdrpInitCompleteEvent, 5252LL);
    }
    else
    {
      result = LdrpLogInternal(
                 (unsigned int)"minkernel\\ntdll\\ldrinit.c",
                 2297,
                 (__int64)"_LdrpInitialize",
                 0,
                 "Process initialization failed with status 0x%08lx\n",
                 v10);
    }
  }
  else
  {
    result = LdrpLogInternal(
               (unsigned int)"minkernel\\ntdll\\ldrinit.c",
               2273,
               (__int64)"_LdrpInitialize",
               0,
               "LDR:MRDATA: Process initialization failed with status 0x%08lx\n",
               v8);
  }
LABEL_10:
  if ( v7 < 0 )
  {
    LdrpInitializationFailure((unsigned int)v7);
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v7);
    RtlRaiseStatus(v7);
  }
  if ( (v5->SameTebFlags & 0x2000) == 0 )
    return ZwTestAlert();
  return result;
}
