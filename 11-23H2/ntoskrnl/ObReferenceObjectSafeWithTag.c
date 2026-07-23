/*
 * XREFs of ObReferenceObjectSafeWithTag @ 0x1402C38E0
 * Callers:
 *     MiCapturePfnVm @ 0x140215CDC (MiCapturePfnVm.c)
 *     MiWakeZeroingThreads @ 0x1402224D4 (MiWakeZeroingThreads.c)
 *     KiSwapThread @ 0x14023F4C0 (KiSwapThread.c)
 *     KiDispatchInterrupt @ 0x140249600 (KiDispatchInterrupt.c)
 *     KiAbProcessThreadLocks @ 0x1402BC5E0 (KiAbProcessThreadLocks.c)
 *     MiSelectSessionAttachProcess @ 0x1402C2178 (MiSelectSessionAttachProcess.c)
 *     MiEmptyPageAccessLog @ 0x1402E21D0 (MiEmptyPageAccessLog.c)
 *     MiViewMayContainPage @ 0x1402F0E60 (MiViewMayContainPage.c)
 *     PsGetNextPartitionUnsafe @ 0x140311180 (PsGetNextPartitionUnsafe.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140319E90 (AlpcpLookasidePacketCallbackRoutine.c)
 *     IoNotifyQuotaState @ 0x140368F90 (IoNotifyQuotaState.c)
 *     HalpDmaFindAdapterByDeviceObject @ 0x140390D18 (HalpDmaFindAdapterByDeviceObject.c)
 *     MiStoreWriteModifiedPages @ 0x14046DEAA (MiStoreWriteModifiedPages.c)
 *     HalpDmaFindAdapterByDeviceId @ 0x1404FFE64 (HalpDmaFindAdapterByDeviceId.c)
 *     KiMonitorCacheErrata @ 0x140579830 (KiMonitorCacheErrata.c)
 *     PspJobCycleTimeNotificationDpcRoutine @ 0x1405A4960 (PspJobCycleTimeNotificationDpcRoutine.c)
 *     MiLocateSharedPageViews @ 0x140636A30 (MiLocateSharedPageViews.c)
 *     PspGetNextJobProcess @ 0x1406A0D90 (PspGetNextJobProcess.c)
 *     PspEnforceLimitsProcessCallback @ 0x1406A3100 (PspEnforceLimitsProcessCallback.c)
 *     PspGetNextJob @ 0x1406A3338 (PspGetNextJob.c)
 *     PspGetNextChildJob @ 0x1406A35B8 (PspGetNextChildJob.c)
 *     PsGetNextProcessThread @ 0x140742CA0 (PsGetNextProcessThread.c)
 *     ExpGetProcessInformation @ 0x140742FB0 (ExpGetProcessInformation.c)
 *     PsGetNextProcess @ 0x1407443A0 (PsGetNextProcess.c)
 *     PspGetPreviousProcessThread @ 0x14076D438 (PspGetPreviousProcessThread.c)
 *     PspExitThread @ 0x14076DC1C (PspExitThread.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14077DB48 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PopEtGetNextEnergyTracker @ 0x1407B1184 (PopEtGetNextEnergyTracker.c)
 *     PsGetNextProcessEx @ 0x1407C0820 (PsGetNextProcessEx.c)
 *     ExpGetNextCallback @ 0x140880D00 (ExpGetNextCallback.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1409B1FE8 (PspAddProcessToWorkingSetChangeList.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x1409B2910 (PspQueryProcessInterferenceCountCallback.c)
 *     PspGetNextSyscallProviderProcess @ 0x1409B4E04 (PspGetNextSyscallProviderProcess.c)
 *     PsGetPreviousProcess @ 0x1409B7DE0 (PsGetPreviousProcess.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1405830C8 (ObpPushStackInfo.c)
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
