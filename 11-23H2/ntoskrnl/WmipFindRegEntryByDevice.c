/*
 * XREFs of WmipFindRegEntryByDevice @ 0x1403C25C4
 * Callers:
 *     WmipQueryWmiDataBlock @ 0x1407AB580 (WmipQueryWmiDataBlock.c)
 *     WmipUpdateRegistration @ 0x140863244 (WmipUpdateRegistration.c)
 *     IoWMIRegistrationControl @ 0x14086BEB0 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x14086BF88 (WmipRegisterDevice.c)
 *     WmipDeregisterDevice @ 0x140882568 (WmipDeregisterDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x140250500 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250E80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseMutex @ 0x1402AFF70 (KeReleaseMutex.c)
 *     WmipDoFindRegEntryByDevice @ 0x1403C2654 (WmipDoFindRegEntryByDevice.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall WmipFindRegEntryByDevice(__int64 a1)
{
  unsigned __int64 v2; // rdi
  __int64 RegEntryByDevice; // rax
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v2 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  RegEntryByDevice = WmipDoFindRegEntryByDevice(a1);
  v4 = RegEntryByDevice;
  if ( RegEntryByDevice )
    _InterlockedIncrement((volatile signed __int32 *)(RegEntryByDevice + 48));
  KxReleaseSpinLock((volatile signed __int64 *)&WmipRegistrationSpinLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v10 = (v9 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v9;
      if ( v10 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  KeReleaseMutex(&WmipSMMutex, 0);
  return v4;
}
