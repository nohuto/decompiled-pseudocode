/*
 * XREFs of StorpLogPerUnitStatistics @ 0x1C00039A4
 * Callers:
 *     StorpLogStatistics @ 0x1C00037DC (StorpLogStatistics.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C0087538 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C0003640 (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     RaidUnitDeviceHealthTelemetrySupported @ 0x1C00036C4 (RaidUnitDeviceHealthTelemetrySupported.c)
 *     StorpTelemetrySendUnitPauseRequestCounters @ 0x1C0003728 (StorpTelemetrySendUnitPauseRequestCounters.c)
 *     StorpTelemetrySendUnitErrorDataSummary @ 0x1C0003CA8 (StorpTelemetrySendUnitErrorDataSummary.c)
 *     RaUnitAcquireRemoveLock @ 0x1C000B570 (RaUnitAcquireRemoveLock.c)
 *     StorpTelemetrySendUnitPerfData @ 0x1C00118A8 (StorpTelemetrySendUnitPerfData.c)
 *     StorpTelemetrySendUnitQos @ 0x1C00643D8 (StorpTelemetrySendUnitQos.c)
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
  if ( (a2 & 0x20) != 0 && *(_BYTE *)(a1 + 3232) == 1 )
    StorpTelemetrySendUnitQos(a1);
  if ( (a2 & 8) != 0 )
    StorpTelemetrySendAdaptiveIdleCounters(a1);
  if ( (a2 & 0x80u) != 0 )
  {
    if ( RaidUnitDeviceHealthTelemetrySupported(a1) )
    {
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
      v5 = WorkItem;
      if ( WorkItem )
      {
        if ( (int)RaUnitAcquireRemoveLock(a1, WorkItem, 0LL) < 0 )
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
      if ( *(_DWORD *)(a1 + 48) == 1 && *(_DWORD *)(a1 + 3296) == 17 )
      {
        v6 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
        v7 = v6;
        if ( v6 )
        {
          if ( (int)RaUnitAcquireRemoveLock(a1, v6, 0LL) < 0 )
            IoFreeWorkItem(v7);
          else
            IoQueueWorkItem(v7, StorpDeviceLogPagesWorkItemRoutine, NormalWorkQueue, v7);
        }
      }
    }
  }
  if ( (a2 & 0x30) != 0 )
  {
    *(_DWORD *)(a1 + 2136) = 0;
    *(_DWORD *)(a1 + 1272) = 0;
  }
}
