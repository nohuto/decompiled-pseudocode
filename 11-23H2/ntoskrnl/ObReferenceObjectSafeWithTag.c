/*
 * XREFs of ObReferenceObjectSafeWithTag @ 0x1402C3650
 * Callers:
 *     MiCapturePfnVm @ 0x140215CDC (MiCapturePfnVm.c)
 *     MiWakeZeroingThreads @ 0x1402224D4 (MiWakeZeroingThreads.c)
 *     KiSwapThread @ 0x14023F3F0 (KiSwapThread.c)
 *     KiDispatchInterrupt @ 0x140249530 (KiDispatchInterrupt.c)
 *     KiAbProcessThreadLocks @ 0x1402BC350 (KiAbProcessThreadLocks.c)
 *     MiSelectSessionAttachProcess @ 0x1402C1EE8 (MiSelectSessionAttachProcess.c)
 *     MiEmptyPageAccessLog @ 0x1402E1F40 (MiEmptyPageAccessLog.c)
 *     MiViewMayContainPage @ 0x1402F0BD0 (MiViewMayContainPage.c)
 *     PsGetNextPartitionUnsafe @ 0x140310EF0 (PsGetNextPartitionUnsafe.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140319C00 (AlpcpLookasidePacketCallbackRoutine.c)
 *     IoNotifyQuotaState @ 0x140368DF0 (IoNotifyQuotaState.c)
 *     HalpDmaFindAdapterByDeviceObject @ 0x140390B38 (HalpDmaFindAdapterByDeviceObject.c)
 *     MiStoreWriteModifiedPages @ 0x14046DAAA (MiStoreWriteModifiedPages.c)
 *     HalpDmaFindAdapterByDeviceId @ 0x1404FF914 (HalpDmaFindAdapterByDeviceId.c)
 *     KiMonitorCacheErrata @ 0x140579340 (KiMonitorCacheErrata.c)
 *     PspJobCycleTimeNotificationDpcRoutine @ 0x1405A43F0 (PspJobCycleTimeNotificationDpcRoutine.c)
 *     MiLocateSharedPageViews @ 0x1406364E0 (MiLocateSharedPageViews.c)
 *     PspGetNextJobProcess @ 0x1406A0D90 (PspGetNextJobProcess.c)
 *     PspEnforceLimitsProcessCallback @ 0x1406A3100 (PspEnforceLimitsProcessCallback.c)
 *     PspGetNextJob @ 0x1406A3338 (PspGetNextJob.c)
 *     PspGetNextChildJob @ 0x1406A35B8 (PspGetNextChildJob.c)
 *     PsGetNextProcessThread @ 0x140742AB0 (PsGetNextProcessThread.c)
 *     ExpGetProcessInformation @ 0x140742DC0 (ExpGetProcessInformation.c)
 *     PsGetNextProcess @ 0x1407441B0 (PsGetNextProcess.c)
 *     PspGetPreviousProcessThread @ 0x14076D248 (PspGetPreviousProcessThread.c)
 *     PspExitThread @ 0x14076DA2C (PspExitThread.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14077D958 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PopEtGetNextEnergyTracker @ 0x1407B0F94 (PopEtGetNextEnergyTracker.c)
 *     PsGetNextProcessEx @ 0x1407C0550 (PsGetNextProcessEx.c)
 *     ExpGetNextCallback @ 0x140880AC0 (ExpGetNextCallback.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1409B1DE8 (PspAddProcessToWorkingSetChangeList.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x1409B2710 (PspQueryProcessInterferenceCountCallback.c)
 *     PspGetNextSyscallProviderProcess @ 0x1409B4C04 (PspGetNextSyscallProviderProcess.c)
 *     PsGetPreviousProcess @ 0x1409B7BE0 (PsGetPreviousProcess.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140582BD8 (ObpPushStackInfo.c)
 */

char __fastcall ObReferenceObjectSafeWithTag(__int64 a1)
{
  signed __int64 *v1; // rcx
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  v1 = (signed __int64 *)(a1 - 48);
  _m_prefetchw(v1);
  v2 = *v1;
  if ( !*v1 )
    return 0;
  while ( 1 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64(v1, v2 + 1, v2);
    if ( v3 == v2 )
      break;
    if ( !v2 )
      return 0;
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)v1);
  return 1;
}
