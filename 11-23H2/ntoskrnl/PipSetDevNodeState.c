/*
 * XREFs of PipSetDevNodeState @ 0x14022AF94
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1403B728C (PnpRemoveLockedDeviceNode.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14068C35C (PipCallDriverAddDeviceQueryRoutine.c)
 *     PipCallDriverAddDevice @ 0x1406C8264 (PipCallDriverAddDevice.c)
 *     PnpProcessAssignResources @ 0x140790C8C (PnpProcessAssignResources.c)
 *     PipProcessStartPhase2 @ 0x140791088 (PipProcessStartPhase2.c)
 *     PnpStartDeviceNode @ 0x1407936C0 (PnpStartDeviceNode.c)
 *     PipEnumerateDevice @ 0x140794F6C (PipEnumerateDevice.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x14079529C (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PipEnumerateCompleted @ 0x1407955F0 (PipEnumerateCompleted.c)
 *     PiProcessNewDeviceNode @ 0x140795938 (PiProcessNewDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x14079BBB4 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNodeAsync @ 0x1407E2778 (PiProcessNewDeviceNodeAsync.c)
 *     IopInitializeDeviceInstanceKey @ 0x140812494 (IopInitializeDeviceInstanceKey.c)
 *     IopLegacyResourceAllocation @ 0x140815B14 (IopLegacyResourceAllocation.c)
 *     IoReportDetectedDevice @ 0x1408350D0 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x140862E84 (PnpDriverLoadingFailed.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1408691E0 (PnpRequestDeviceRemovalWorker.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140882D28 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpRestartDeviceNode @ 0x140958EBC (PnpRestartDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140959338 (PnpQueryRemoveLockedDeviceNode.c)
 *     PiInitializeDevice @ 0x14096DCE4 (PiInitializeDevice.c)
 *     PnpQueryStopDeviceNode @ 0x14096EA28 (PnpQueryStopDeviceNode.c)
 *     PnpStopDeviceSubtree @ 0x14096EE90 (PnpStopDeviceSubtree.c)
 *     PipProcessRestartPhase2 @ 0x14096F608 (PipProcessRestartPhase2.c)
 *     IopInitializePlugPlayServices @ 0x140B3E904 (IopInitializePlugPlayServices.c)
 * Callees:
 *     PipAreDriversLoadedWorker @ 0x14022B21C (PipAreDriversLoadedWorker.c)
 *     PipIsDevNodeDNStarted @ 0x14022B290 (PipIsDevNodeDNStarted.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     PnpRemoveDeviceActionRequests @ 0x1403D6720 (PnpRemoveDeviceActionRequests.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140797400 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PpDevCfgTraceDeviceStart @ 0x1408793F0 (PpDevCfgTraceDeviceStart.c)
 */

__int64 __fastcall PipSetDevNodeState(__int64 a1, int a2)
{
  int v4; // r15d
  int IsDevNodeDNStarted; // esi
  char v6; // r14
  KIRQL v7; // al
  __int64 v8; // r8
  unsigned int v9; // r10d
  unsigned __int64 v10; // rdi
  int v11; // r10d
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 result; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rcx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v22; // zf

  v4 = 0;
  IsDevNodeDNStarted = 0;
  v6 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v9 = *(_DWORD *)(a1 + 300);
  v10 = v7;
  if ( v9 != a2 )
  {
    v4 = PipAreDriversLoadedWorker(v9, *(unsigned int *)(a1 + 304), v8, *(_QWORD *)(a1 + 888));
    IsDevNodeDNStarted = PipIsDevNodeDNStarted(a1);
    *(_DWORD *)(a1 + 300) = a2;
    *(_DWORD *)(a1 + 304) = v11;
    v6 = 1;
    v12 = *(unsigned int *)(a1 + 388);
    *(_QWORD *)(a1 + 888) = MEMORY[0xFFFFF78000000014];
    *(_QWORD *)(a1 + 896) = v13;
    *(_DWORD *)(a1 + 4 * v12 + 308) = v11;
    *(_DWORD *)(a1 + 388) = (*(_DWORD *)(a1 + 388) + 1) % 0x14u;
  }
  result = KxReleaseSpinLock(&PnpSpinLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v10 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
      v22 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      v15 = (unsigned int)result & SchedulerAssist[5];
      SchedulerAssist[5] = v15;
      if ( v22 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v10);
  if ( v6 )
  {
    v16 = *(_QWORD *)(a1 + 48);
    if ( v16
      && ((unsigned int)PipAreDriversLoadedWorker(*(unsigned int *)(a1 + 300), *(unsigned int *)(a1 + 304), v15, v16) != v4
       || (unsigned int)PipIsDevNodeDNStarted(a1) != IsDevNodeDNStarted) )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v17, v18, 11LL);
      if ( (unsigned int)PipIsDevNodeDNStarted(a1) != IsDevNodeDNStarted )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v19, *(_QWORD *)(a1 + 48), 26LL);
    }
    result = *(unsigned int *)(a1 + 704);
    if ( (result & 1) != 0 )
      result = PpDevCfgTraceDeviceStart(a1);
  }
  if ( a2 == 790 )
    return PnpRemoveDeviceActionRequests(*(_QWORD *)(a1 + 32));
  return result;
}
