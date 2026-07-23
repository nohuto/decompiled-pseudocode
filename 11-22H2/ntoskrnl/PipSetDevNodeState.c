/*
 * XREFs of PipSetDevNodeState @ 0x14022AEA4
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1403B6A4C (PnpRemoveLockedDeviceNode.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14068C35C (PipCallDriverAddDeviceQueryRoutine.c)
 *     PipCallDriverAddDevice @ 0x1406C82E4 (PipCallDriverAddDevice.c)
 *     PnpProcessAssignResources @ 0x140790FAC (PnpProcessAssignResources.c)
 *     PipProcessStartPhase2 @ 0x1407913A8 (PipProcessStartPhase2.c)
 *     PnpStartDeviceNode @ 0x1407939E0 (PnpStartDeviceNode.c)
 *     PipEnumerateDevice @ 0x14079528C (PipEnumerateDevice.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1407955BC (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PipEnumerateCompleted @ 0x140795910 (PipEnumerateCompleted.c)
 *     PiProcessNewDeviceNode @ 0x140795C58 (PiProcessNewDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x14079BED4 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNodeAsync @ 0x1407E2A28 (PiProcessNewDeviceNodeAsync.c)
 *     IopInitializeDeviceInstanceKey @ 0x140814744 (IopInitializeDeviceInstanceKey.c)
 *     IopLegacyResourceAllocation @ 0x140817DC4 (IopLegacyResourceAllocation.c)
 *     IoReportDetectedDevice @ 0x140836920 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x140862E64 (PnpDriverLoadingFailed.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140869470 (PnpRequestDeviceRemovalWorker.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140882FB8 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpRestartDeviceNode @ 0x140958D6C (PnpRestartDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1409591E8 (PnpQueryRemoveLockedDeviceNode.c)
 *     PiInitializeDevice @ 0x14096DB94 (PiInitializeDevice.c)
 *     PnpQueryStopDeviceNode @ 0x14096E8D8 (PnpQueryStopDeviceNode.c)
 *     PnpStopDeviceSubtree @ 0x14096ED40 (PnpStopDeviceSubtree.c)
 *     PipProcessRestartPhase2 @ 0x14096F4B8 (PipProcessRestartPhase2.c)
 *     IopInitializePlugPlayServices @ 0x140B42004 (IopInitializePlugPlayServices.c)
 * Callees:
 *     PipAreDriversLoadedWorker @ 0x14022B12C (PipAreDriversLoadedWorker.c)
 *     PipIsDevNodeDNStarted @ 0x14022B1A0 (PipIsDevNodeDNStarted.c)
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     PnpRemoveDeviceActionRequests @ 0x1403D5EE0 (PnpRemoveDeviceActionRequests.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140797720 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PpDevCfgTraceDeviceStart @ 0x140879680 (PpDevCfgTraceDeviceStart.c)
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
