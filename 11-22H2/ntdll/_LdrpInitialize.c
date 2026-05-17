/*
 * XREFs of _LdrpInitialize @ 0x180073F6C
 * Callers:
 *     LdrpInitializeInternal @ 0x180073EC8 (LdrpInitializeInternal.c)
 * Callees:
 *     LdrpWaitForInitializationComplete @ 0x180002CAC (LdrpWaitForInitializationComplete.c)
 *     LdrpLogDllState @ 0x180019CC4 (LdrpLogDllState.c)
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     RtlReleaseSRWLockShared @ 0x180026E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     LdrpInitializeThread @ 0x180028A58 (LdrpInitializeThread.c)
 *     RtlSleepConditionVariableSRW @ 0x180069740 (RtlSleepConditionVariableSRW.c)
 *     LdrpInitializationComplete @ 0x180074060 (LdrpInitializationComplete.c)
 *     RtlInitializeHeapGC @ 0x1800811B0 (RtlInitializeHeapGC.c)
 *     LdrpTouchThreadStack @ 0x18008433C (LdrpTouchThreadStack.c)
 *     LdrpInitializationFailure @ 0x18008A4F0 (LdrpInitializationFailure.c)
 *     ZwTerminateProcess @ 0x18009F370 (ZwTerminateProcess.c)
 *     ZwCreateEvent @ 0x18009F6F0 (ZwCreateEvent.c)
 *     ZwTestAlert @ 0x1800A27E0 (ZwTestAlert.c)
 *     LdrInitializeMrdata @ 0x1800AD9C0 (LdrInitializeMrdata.c)
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 *     LdrpDoDebuggerBreak @ 0x1800DD294 (LdrpDoDebuggerBreak.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x1800DEA60 (LdrpInitializeProcessWrapperFilter.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 */

__int64 __fastcall LdrpInitialize(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  struct _TEB *v4; // r13
  __int64 result; // rax
  $DF4FA9F692459BA109B62B4026D83C94 *v6; // r14
  _PEB *ProcessEnvironmentBlock; // r15
  unsigned int v8; // edi
  int v9; // eax
  char v10; // al
  int v11; // eax
  struct _PEB *v12; // rax
  int v13; // [rsp+30h] [rbp-48h]

  v4 = NtCurrentTeb();
  while ( 1 )
  {
    result = (unsigned int)_InterlockedCompareExchange(&LdrpProcessInitialized, 1, 0);
    v6 = &v4->6126;
    if ( (_DWORD)result == 1 && (v6->SameTebFlags & 0x2000) == 0 )
      goto LABEL_15;
    ProcessEnvironmentBlock = v4->ProcessEnvironmentBlock;
    if ( !(_DWORD)result )
      break;
    v8 = 0;
    if ( !ProcessEnvironmentBlock->InheritedAddressSpace )
      goto LABEL_5;
    LdrpInitCompleteEvent = 0LL;
    if ( _InterlockedCompareExchange(&LdrpProcessInitialized, 1, 2) == 2 )
    {
      if ( ProcessEnvironmentBlock->InheritedAddressSpace )
      {
        v12 = NtCurrentPeb();
        LdrpForkActiveLock = 0LL;
        LdrpForkConditionVariable = 0LL;
        v12->InheritedAddressSpace = 0;
        if ( v12->BeingDebugged )
          LdrpDoDebuggerBreak();
      }
      result = LdrpInitializationComplete(&LdrpProcessInitialized, &LdrpInitCompleteEvent, 5252LL);
      v8 = 0;
LABEL_5:
      if ( (v6->SameTebFlags & 0x40) == 0 )
      {
        if ( LdrpForkInProgress )
        {
          RtlAcquireSRWLockShared(&LdrpForkActiveLock, a2, a3, a4);
          while ( LdrpForkInProgress )
            RtlSleepConditionVariableSRW(&LdrpForkConditionVariable, &LdrpForkActiveLock, 0LL, 1);
          RtlReleaseSRWLockShared(&LdrpForkActiveLock);
        }
        if ( UseWOW64 )
          g_LdrpWow64LdrpInitialize(a1);
        result = LdrpInitializeThread(a1, a2, a3);
      }
      goto LABEL_10;
    }
LABEL_15:
    LdrpWaitForInitializationComplete(&LdrpProcessInitialized, (HANDLE *)&LdrpInitCompleteEvent);
  }
  ZwCreateEvent(&LdrpInitCompleteEvent, 2031619LL, 0LL, 0LL, 0);
  v6->SameTebFlags |= 0x20u;
  ProcessEnvironmentBlock->LoaderLock = (_RTL_CRITICAL_SECTION *)&LdrpLoaderLock;
  LdrInitState = 0;
  _interlockedbittestandset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
  qword_1801992D8 = (__int64)&RtlpDynamicFunctionTable;
  RtlpDynamicFunctionTable = (__int64)&RtlpDynamicFunctionTable;
  RtlpDynamicFunctionTableLock = 0LL;
  RtlpDynamicFunctionTableTreeMin = 0LL;
  RtlpDynamicFunctionTableTreeMax = 0LL;
  RtlpDynamicCallbackTableTreeMin = 0LL;
  RtlpDynamicCallbackTableTreeMax = 0LL;
  v9 = LdrInitializeMrdata();
  v8 = v9;
  if ( v9 >= 0 )
  {
    v10 = LdrpDetourExist;
    if ( LdrpIsSecureProcess )
      v10 = 1;
    LdrpDetourExist = v10;
    v11 = LdrpInitializeProcess(a1, a2);
    v8 = v11;
    v13 = v11;
    if ( v11 >= 0 )
    {
      LdrpLogDllState(*(_QWORD *)(LdrpImageEntry + 48), LdrpImageEntry + 72, 0x14AEu);
      if ( ProcessEnvironmentBlock->MinimumStackCommit )
        v13 = LdrpTouchThreadStack();
      LdrInitState = 3;
      _interlockedbittestandreset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
      result = RtlInitializeHeapGC(LdrpThreadPool);
      v8 = v13;
      if ( v13 >= 0 && (!UseWOW64 || LdrpProcessInitialized == 1) )
        result = LdrpInitializationComplete(&LdrpProcessInitialized, &LdrpInitCompleteEvent, 5252LL);
    }
    else
    {
      result = LdrpLogInternal(
                 (unsigned int)"minkernel\\ntdll\\ldrinit.c",
                 2295LL,
                 (__int64)"_LdrpInitialize",
                 0LL,
                 "Process initialization failed with status 0x%08lx\n",
                 v11);
    }
  }
  else
  {
    result = LdrpLogInternal(
               (unsigned int)"minkernel\\ntdll\\ldrinit.c",
               2271LL,
               (__int64)"_LdrpInitialize",
               0LL,
               "LDR:MRDATA: Process initialization failed with status 0x%08lx\n",
               v9);
  }
LABEL_10:
  if ( (v8 & 0x80000000) != 0 )
  {
    LdrpInitializationFailure(v8);
    ZwTerminateProcess(-1LL, v8);
    RtlRaiseStatus(v8);
  }
  if ( (v6->SameTebFlags & 0x2000) == 0 )
    return ZwTestAlert();
  return result;
}
