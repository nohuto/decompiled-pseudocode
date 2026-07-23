/*
 * XREFs of PopThermalEventTransitionEnableDeepSleep @ 0x14058FAC8
 * Callers:
 *     NtInitiatePowerAction @ 0x14098B410 (NtInitiatePowerAction.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepClearDisengageReason @ 0x14028E63C (PopDeepSleepClearDisengageReason.c)
 *     KeCancelTimer2 @ 0x14031DD00 (KeCancelTimer2.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall PopThermalEventTransitionEnableDeepSleep(int a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v5; // eax
  bool v6; // zf

  if ( (unsigned int)(a1 - 3) <= 3 )
  {
    v1 = KeAcquireSpinLockRaiseToDpc(&PopThermalEventTransitionContext);
    KeCancelTimer2((__int64)&unk_140C3C730);
    byte_140C3C7B8 = 0;
    PopDeepSleepClearDisengageReason(0xAu);
    KxReleaseSpinLock((volatile signed __int64 *)&PopThermalEventTransitionContext);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v1 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v5 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
        v6 = (v5 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v5;
        if ( v6 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v1);
  }
}
