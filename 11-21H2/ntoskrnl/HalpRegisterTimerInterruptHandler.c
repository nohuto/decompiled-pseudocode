/*
 * XREFs of HalpRegisterTimerInterruptHandler @ 0x140524A8C
 * Callers:
 *     HalpSetSystemInformation @ 0x1407F8580 (HalpSetSystemInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpRegisterTimerInterruptHandler(__int64 (__fastcall *a1)(_QWORD))
{
  unsigned __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v6; // eax
  bool v7; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&HalpPerfInterruptHandlerRegistrationLock);
  if ( qword_140D017B8 )
  {
    if ( qword_140D017B8 != KeGetCurrentThread()[1].CycleTime )
      return 3221225473LL;
    HalpTimerProfilingCallback = a1;
    qword_140D017B8 &= -(__int64)(a1 != 0LL);
  }
  else
  {
    HalpTimerProfilingCallback = a1;
    if ( a1 )
      qword_140D017B8 = KeGetCurrentThread()[1].CycleTime;
  }
  KxReleaseSpinLock(&HalpPerfInterruptHandlerRegistrationLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v7 = (v6 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v6;
        if ( v7 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return 0LL;
}
