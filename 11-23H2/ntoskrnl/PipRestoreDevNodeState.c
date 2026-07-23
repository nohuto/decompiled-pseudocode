/*
 * XREFs of PipRestoreDevNodeState @ 0x1403B7168
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1403B728C (PnpRemoveLockedDeviceNode.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1408691E0 (PnpRequestDeviceRemovalWorker.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140882D28 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpCancelRemoveLockedDeviceNode @ 0x14095913C (PnpCancelRemoveLockedDeviceNode.c)
 *     PnpCancelStopDeviceNode @ 0x14096E5F4 (PnpCancelStopDeviceNode.c)
 * Callees:
 *     PipAreDriversLoadedWorker @ 0x14022B21C (PipAreDriversLoadedWorker.c)
 *     PipIsDevNodeDNStarted @ 0x14022B290 (PipIsDevNodeDNStarted.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140797400 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipRestoreDevNodeState(__int64 a1)
{
  unsigned __int64 v2; // rdi
  int v3; // ebp
  int IsDevNodeDNStarted; // esi
  int v5; // r9d
  __int64 v6; // rcx
  int v7; // r10d
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rcx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v14; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v3 = PipAreDriversLoadedWorker(*(_DWORD *)(a1 + 300), *(_DWORD *)(a1 + 304));
  IsDevNodeDNStarted = PipIsDevNodeDNStarted(a1);
  *(_DWORD *)(a1 + 300) = v5;
  v6 = *(unsigned int *)(a1 + 388);
  *(_QWORD *)(a1 + 888) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)(a1 + 4 * v6 + 308) = v7;
  *(_DWORD *)(a1 + 388) = (*(_DWORD *)(a1 + 388) + 1) % 0x14u;
  result = KxReleaseSpinLock((volatile signed __int64 *)&PnpSpinLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v2 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v14 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v14 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( (unsigned int)PipAreDriversLoadedWorker(*(_DWORD *)(a1 + 300), *(_DWORD *)(a1 + 304)) != v3
      || (result = PipIsDevNodeDNStarted(a1), (_DWORD)result != IsDevNodeDNStarted) )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v9, v10, 11LL);
      result = PipIsDevNodeDNStarted(a1);
      if ( (_DWORD)result != IsDevNodeDNStarted )
        return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v11, *(_QWORD *)(a1 + 48), 26LL);
    }
  }
  return result;
}
