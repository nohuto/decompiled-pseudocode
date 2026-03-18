/*
 * XREFs of ObReferenceObjectSafeWithTag @ 0x140302BD0
 * Callers:
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1402234C0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     IoNotifyQuotaState @ 0x14025AFF0 (IoNotifyQuotaState.c)
 *     MiWakeZeroingThreads @ 0x140267A5C (MiWakeZeroingThreads.c)
 *     MiViewMayContainPage @ 0x14027E474 (MiViewMayContainPage.c)
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     MiSelectSessionAttachProcess @ 0x1402DF940 (MiSelectSessionAttachProcess.c)
 *     MiEmptyPageAccessLog @ 0x140334400 (MiEmptyPageAccessLog.c)
 *     KiAbProcessThreadLocks @ 0x1403591D8 (KiAbProcessThreadLocks.c)
 *     PsGetNextPartitionUnsafe @ 0x140363D98 (PsGetNextPartitionUnsafe.c)
 *     HalpDmaFindAdapterByDeviceObject @ 0x1403CD208 (HalpDmaFindAdapterByDeviceObject.c)
 *     HalpDmaFindAdapterByDeviceId @ 0x140503F38 (HalpDmaFindAdapterByDeviceId.c)
 *     KiMonitorCacheErrata @ 0x140577D00 (KiMonitorCacheErrata.c)
 *     MiLocateSharedPageViews @ 0x14059854C (MiLocateSharedPageViews.c)
 *     PspJobCycleTimeNotificationDpcRoutine @ 0x1405E0E20 (PspJobCycleTimeNotificationDpcRoutine.c)
 *     PspGetNextSyscallProviderProcess @ 0x1406597D0 (PspGetNextSyscallProviderProcess.c)
 *     PopEtGetNextEnergyTracker @ 0x140681A2C (PopEtGetNextEnergyTracker.c)
 *     PspGetNextJob @ 0x14068A6EC (PspGetNextJob.c)
 *     PsGetNextProcessEx @ 0x14068F700 (PsGetNextProcessEx.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14069CEC8 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspGetNextJobProcess @ 0x1406CA970 (PspGetNextJobProcess.c)
 *     PspGetNextChildJob @ 0x1406FF7C4 (PspGetNextChildJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1406FF880 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspEnforceLimitsProcessCallback @ 0x140700200 (PspEnforceLimitsProcessCallback.c)
 *     PspExitThread @ 0x1407A0088 (PspExitThread.c)
 *     PspEnforceLimits @ 0x1407B67A0 (PspEnforceLimits.c)
 *     ExGetNextProcess @ 0x1407B69F0 (ExGetNextProcess.c)
 *     PsGetNextProcess @ 0x1407B6B90 (PsGetNextProcess.c)
 *     ExpGetProcessInformation @ 0x1407B6CA0 (ExpGetProcessInformation.c)
 *     PspGetPreviousProcessThread @ 0x1407E64AC (PspGetPreviousProcessThread.c)
 *     PsGetNextProcessThread @ 0x1407E7750 (PsGetNextProcessThread.c)
 *     ExpGetNextCallback @ 0x1407FAD60 (ExpGetNextCallback.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1409AFDD8 (PspAddProcessToWorkingSetChangeList.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x1409B04E0 (PspQueryProcessInterferenceCountCallback.c)
 *     PsGetPreviousProcess @ 0x1409B49A0 (PsGetPreviousProcess.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1405C5EC8 (ObpPushStackInfo.c)
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
