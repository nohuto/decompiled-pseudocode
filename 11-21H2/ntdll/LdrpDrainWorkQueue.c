/*
 * XREFs of LdrpDrainWorkQueue @ 0x180051600
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x18001BC10 (RtlQueryInformationActivationContext.c)
 *     LdrUnloadDll @ 0x180038270 (LdrUnloadDll.c)
 *     LdrGetProcedureAddressForCaller @ 0x18003AFD0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpLoadDllInternal @ 0x18003B940 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x18003F710 (LdrpFastpthReloadedDll.c)
 *     LdrpInitializeThread @ 0x18003FC80 (LdrpInitializeThread.c)
 *     LdrShutdownThread @ 0x180041790 (LdrShutdownThread.c)
 *     LdrpFindLoadedDll @ 0x18004F750 (LdrpFindLoadedDll.c)
 *     RtlExitUserProcess @ 0x180054350 (RtlExitUserProcess.c)
 *     LdrEnumerateLoadedModules @ 0x18007D0F0 (LdrEnumerateLoadedModules.c)
 *     LdrpInitializeImportRedirection @ 0x1800888BC (LdrpInitializeImportRedirection.c)
 *     RtlPrepareForProcessCloning @ 0x1800A2FA0 (RtlPrepareForProcessCloning.c)
 *     LdrInitShimEngineDynamic @ 0x1800DC800 (LdrInitShimEngineDynamic.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 *     RtlCloneUserProcess @ 0x1800E2990 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     LdrpProcessWork @ 0x180051120 (LdrpProcessWork.c)
 *     LdrpUpdateStatistics @ 0x1800512F4 (LdrpUpdateStatistics.c)
 *     NtWaitForSingleObject @ 0x1800A40F0 (NtWaitForSingleObject.c)
 */

struct _TEB *__fastcall LdrpDrainWorkQueue(int a1)
{
  HANDLE v1; // r14
  char v2; // si
  char v4; // bp
  __int64 *v5; // rbx
  __int64 v6; // rax
  struct _TEB *result; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  v1 = LdrpWorkCompleteEvent;
  v2 = 0;
  if ( !a1 )
    v1 = LdrpLoadCompleteEvent;
  while ( 1 )
  {
    while ( 1 )
    {
      RtlEnterCriticalSection(&LdrpWorkQueueLock);
      v4 = LdrpDetourExist;
      if ( !LdrpDetourExist || a1 == 1 )
      {
        v5 = (__int64 *)LdrpWorkQueue;
        if ( *(__int64 **)(LdrpWorkQueue + 8) != &LdrpWorkQueue
          || (v6 = *(_QWORD *)LdrpWorkQueue, *(_QWORD *)(*(_QWORD *)LdrpWorkQueue + 8LL) != LdrpWorkQueue) )
        {
          __fastfail(3u);
        }
        LdrpWorkQueue = *(_QWORD *)LdrpWorkQueue;
        *(_QWORD *)(v6 + 8) = &LdrpWorkQueue;
        if ( &LdrpWorkQueue == v5 )
        {
          if ( LdrpWorkInProgress == a1 )
          {
            LdrpWorkInProgress = 1;
            v2 = 1;
          }
        }
        else
        {
          if ( !v4 )
            ++LdrpWorkInProgress;
          LdrpUpdateStatistics();
        }
      }
      else
      {
        if ( LdrpWorkInProgress == a1 )
        {
          LdrpWorkInProgress = 1;
          v2 = 1;
        }
        v5 = &LdrpWorkQueue;
      }
      RtlLeaveCriticalSection(&LdrpWorkQueueLock);
      if ( v2 )
        break;
      if ( &LdrpWorkQueue == v5 )
        NtWaitForSingleObject(v1, 0, 0LL);
      else
        LdrpProcessWork((__int64)(v5 - 8), v4);
    }
    if ( !a1 || (__int64 *)LdrpRetryQueue == &LdrpRetryQueue )
      break;
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    v8 = LdrpRetryQueue;
    *(_QWORD *)(LdrpRetryQueue + 8) = &LdrpWorkQueue;
    LdrpWorkQueue = v8;
    v9 = qword_18017A008;
    *(_QWORD *)qword_18017A008 = &LdrpWorkQueue;
    qword_18017A058 = v9;
    qword_18017A008 = (__int64)&LdrpRetryQueue;
    LdrpRetryQueue = (__int64)&LdrpRetryQueue;
    LdrpRetryingModuleIndex = 0LL;
    RtlLeaveCriticalSection(&LdrpWorkQueueLock);
    v2 = 0;
  }
  result = NtCurrentTeb();
  result->SameTebFlags |= 0x1000u;
  return result;
}
