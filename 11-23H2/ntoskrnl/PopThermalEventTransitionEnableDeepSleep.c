/*
 * XREFs of PopThermalEventTransitionEnableDeepSleep @ 0x14058FA38
 * Callers:
 *     NtInitiatePowerAction @ 0x14098B360 (NtInitiatePowerAction.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140250500 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250E80 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepClearDisengageReason @ 0x14028E75C (PopDeepSleepClearDisengageReason.c)
 *     KeCancelTimer2 @ 0x14031DEE0 (KeCancelTimer2.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopThermalEventTransitionEnableDeepSleep(int a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v6; // zf

  result = (unsigned int)(a1 - 3);
  if ( (unsigned int)result <= 3 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&PopThermalEventTransitionContext);
    KeCancelTimer2((__int64)&unk_140C3C7F0);
    byte_140C3C878 = 0;
    PopDeepSleepClearDisengageReason(0xAu);
    KxReleaseSpinLock((volatile signed __int64 *)&PopThermalEventTransitionContext);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v6 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v6 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v2);
  }
  return result;
}
