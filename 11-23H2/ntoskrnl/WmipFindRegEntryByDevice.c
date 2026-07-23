/*
 * XREFs of WmipFindRegEntryByDevice @ 0x1403C27A4
 * Callers:
 *     WmipQueryWmiDataBlock @ 0x1407AB770 (WmipQueryWmiDataBlock.c)
 *     WmipUpdateRegistration @ 0x140863484 (WmipUpdateRegistration.c)
 *     IoWMIRegistrationControl @ 0x14086C0F0 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x14086C1C8 (WmipRegisterDevice.c)
 *     WmipDeregisterDevice @ 0x1408827A8 (WmipDeregisterDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseMutex @ 0x1402B0200 (KeReleaseMutex.c)
 *     WmipDoFindRegEntryByDevice @ 0x1403C2834 (WmipDoFindRegEntryByDevice.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
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
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v2 <= 0xFu
      && CurrentIrql >= 2u )
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
