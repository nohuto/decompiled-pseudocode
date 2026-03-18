/*
 * XREFs of WdipSemEnableScenario @ 0x1407E550C
 * Callers:
 *     WdipStartEndScenario @ 0x1407E549C (WdipStartEndScenario.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     EtwEventEnabled @ 0x140258420 (EtwEventEnabled.c)
 *     WdipSemQueryScenarioTable @ 0x1407E564C (WdipSemQueryScenarioTable.c)
 *     WdipSemGetLoggerIds @ 0x1407E56B4 (WdipSemGetLoggerIds.c)
 *     WdipSemDeleteTransitionalInstance @ 0x14082FD70 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemReserveInstanceTableEntry @ 0x14082FEDC (WdipSemReserveInstanceTableEntry.c)
 *     WdipSemEnableContextProviders @ 0x1408302E0 (WdipSemEnableContextProviders.c)
 *     WdipSemWriteSemActionsEvent @ 0x140830598 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemActivateInstance @ 0x140862A50 (WdipSemActivateInstance.c)
 *     WdipSemShutdown @ 0x1409DDBF0 (WdipSemShutdown.c)
 *     WdipSemWriteSemFailureEvent @ 0x1409DE56C (WdipSemWriteSemFailureEvent.c)
 */

__int64 __fastcall WdipSemEnableScenario(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdi
  char v8; // si
  int LoggerIds; // ebx
  __int64 ScenarioTable; // rax
  __int64 v11; // rax
  struct _KTHREAD *v13; // rax

  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  v8 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  if ( !a1 || !a3 )
  {
    LoggerIds = -1073741811;
    goto LABEL_13;
  }
  if ( WdipSemEnabled )
  {
    LoggerIds = WdipSemGetLoggerIds();
    if ( LoggerIds < 0 )
    {
      v8 = 1;
      goto LABEL_13;
    }
    ScenarioTable = WdipSemQueryScenarioTable(a1, a2);
    if ( ScenarioTable )
    {
      v11 = WdipSemReserveInstanceTableEntry(ScenarioTable, a3);
      v7 = v11;
      if ( v11 )
      {
        WdipSemEnableContextProviders(v11);
        if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_START) )
          WdipSemWriteSemActionsEvent(&WDI_SEM_EVENT_SCENARIO_START, v7);
        WdipSemActivateInstance(v7);
        goto LABEL_10;
      }
    }
  }
  LoggerIds = -1073741823;
LABEL_13:
  if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_START_FAILED) )
    WdipSemWriteSemFailureEvent((unsigned int)&WDI_SEM_EVENT_SCENARIO_START_FAILED, a1, a2, a3, LoggerIds);
  if ( v7 )
    WdipSemDeleteTransitionalInstance(v7);
LABEL_10:
  ExReleasePushLockEx((__int64 *)&WdipSemPushLock, 0LL);
  KeLeaveCriticalRegion();
  if ( v8 )
  {
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&WdipSemPushLock, 0LL);
    if ( WdipSemEnabled )
      WdipSemShutdown();
    ExReleasePushLockEx((__int64 *)&WdipSemPushLock, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)LoggerIds;
}
