/*
 * XREFs of StorpLogPerUnitStatistics @ 0x1C001B5D8
 * Callers:
 *     StorpLogStatistics @ 0x1C001B410 (StorpLogStatistics.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C00A1444 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x1C0007014 (RaUnitAcquireRemoveLock.c)
 *     StorpTelemetrySendUnitErrorDataSummary @ 0x1C001B6D8 (StorpTelemetrySendUnitErrorDataSummary.c)
 *     StorpTelemetrySendUnitPerfData @ 0x1C001BA38 (StorpTelemetrySendUnitPerfData.c)
 *     RaidUnitDeviceHealthTelemetrySupported @ 0x1C001C818 (RaidUnitDeviceHealthTelemetrySupported.c)
 *     StorpTelemetrySendUnitPauseRequestCounters @ 0x1C001C880 (StorpTelemetrySendUnitPauseRequestCounters.c)
 *     StorpTelemetrySendUnitQos @ 0x1C001CB64 (StorpTelemetrySendUnitQos.c)
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C0071388 (StorpTelemetrySendAdaptiveIdleCounters.c)
 */

void __fastcall StorpLogPerUnitStatistics(__int64 a1, __int16 a2)
{
  PIO_WORKITEM WorkItem; // rax
  struct _IO_WORKITEM *v5; // rsi
  PIO_WORKITEM v6; // rax
  struct _IO_WORKITEM *v7; // rsi

  if ( (a2 & 4) != 0 )
    StorpTelemetrySendUnitPerfData();
  if ( (a2 & 0x10) != 0 )
    StorpTelemetrySendUnitErrorDataSummary(a1);
  if ( (a2 & 0x20) != 0 && *(_BYTE *)(a1 + 3280) == 1 )
    StorpTelemetrySendUnitQos(a1);
  if ( (a2 & 8) != 0 )
    StorpTelemetrySendAdaptiveIdleCounters(a1);
  if ( (a2 & 0x80u) != 0 )
  {
    if ( (unsigned __int8)RaidUnitDeviceHealthTelemetrySupported(a1) )
    {
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
      v5 = WorkItem;
      if ( WorkItem )
      {
        if ( (int)RaUnitAcquireRemoveLock(a1, (__int64)WorkItem, 0LL) < 0 )
          IoFreeWorkItem(v5);
        else
          IoQueueWorkItem(v5, StorpDeviceHealthWorkItemRoutine, NormalWorkQueue, v5);
      }
    }
  }
  if ( (a2 & 0x40) != 0 )
    StorpTelemetrySendUnitPauseRequestCounters(a1);
  if ( (a2 & 0x100) != 0 )
  {
    if ( *(_QWORD *)(a1 + 104) )
    {
      if ( *(_DWORD *)(a1 + 48) == 1 && *(_DWORD *)(a1 + 3344) == 17 )
      {
        v6 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
        v7 = v6;
        if ( v6 )
        {
          if ( (int)RaUnitAcquireRemoveLock(a1, (__int64)v6, 0LL) < 0 )
            IoFreeWorkItem(v7);
          else
            IoQueueWorkItem(v7, StorpDeviceLogPagesWorkItemRoutine, NormalWorkQueue, v7);
        }
      }
    }
  }
  if ( (a2 & 0x30) != 0 )
  {
    *(_DWORD *)(a1 + 2184) = 0;
    *(_DWORD *)(a1 + 1328) = 0;
  }
}
