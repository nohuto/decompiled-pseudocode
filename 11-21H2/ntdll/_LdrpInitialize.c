/*
 * XREFs of _LdrpInitialize @ 0x18007B2BC
 * Callers:
 *     LdrpInitializeInternal @ 0x18007B218 (LdrpInitializeInternal.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     LdrpInitializeThread @ 0x18003FC80 (LdrpInitializeThread.c)
 *     LdrpLogDllState @ 0x180044F74 (LdrpLogDllState.c)
 *     RtlSleepConditionVariableSRW @ 0x18006AF50 (RtlSleepConditionVariableSRW.c)
 *     LdrpInitializationComplete @ 0x18007B3A4 (LdrpInitializationComplete.c)
 *     LdrpWaitForInitializationComplete @ 0x18007B404 (LdrpWaitForInitializationComplete.c)
 *     RtlInitializeHeapGC @ 0x180086500 (RtlInitializeHeapGC.c)
 *     LdrpTouchThreadStack @ 0x180089280 (LdrpTouchThreadStack.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     LdrpInitializationFailure @ 0x180091F40 (LdrpInitializationFailure.c)
 *     ZwTerminateProcess @ 0x1800A45F0 (ZwTerminateProcess.c)
 *     ZwCreateEvent @ 0x1800A4970 (ZwCreateEvent.c)
 *     ZwTestAlert @ 0x1800A79E0 (ZwTestAlert.c)
 *     LdrpDoDebuggerBreak @ 0x1800DCB14 (LdrpDoDebuggerBreak.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x1800E0148 (LdrpInitializeProcessWrapperFilter.c)
 *     LdrInitializeMrdata @ 0x1800E1FA4 (LdrInitializeMrdata.c)
 */

NTSTATUS __fastcall LdrpInitialize(__int64 a1, __int64 a2, __int64 a3)
{
  struct _TEB *v4; // r14
  NTSTATUS result; // eax
  _PEB *ProcessEnvironmentBlock; // r15
  NTSTATUS v7; // edi
  int v8; // eax
  char v9; // al
  int v10; // eax
  struct _PEB *v11; // rax
  int v12; // [rsp+30h] [rbp-48h]

  v4 = NtCurrentTeb();
  while ( 1 )
  {
    result = _InterlockedCompareExchange(&LdrpProcessInitialized, 1, 0);
    if ( result == 1 && (v4->SameTebFlags & 0x2000) == 0 )
      goto LABEL_15;
    ProcessEnvironmentBlock = v4->ProcessEnvironmentBlock;
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
      if ( (v4->SameTebFlags & 0x40) == 0 )
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
  v4->SameTebFlags |= 0x20u;
  ProcessEnvironmentBlock->LoaderLock = &LdrpLoaderLock;
  LdrInitState = 0;
  _interlockedbittestandset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
  qword_18018F2C8 = (__int64)&RtlpDynamicFunctionTable;
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
                 2294,
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
               2270,
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
  if ( (v4->SameTebFlags & 0x2000) == 0 )
    return ZwTestAlert();
  return result;
}
