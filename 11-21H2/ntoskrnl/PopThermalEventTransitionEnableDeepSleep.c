/*
 * XREFs of PopThermalEventTransitionEnableDeepSleep @ 0x14038B744
 * Callers:
 *     NtInitiatePowerAction @ 0x1407FEA60 (NtInitiatePowerAction.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer2 @ 0x1402D3FB0 (KeCancelTimer2.c)
 *     PopDeepSleepClearDisengageReason @ 0x1402D6004 (PopDeepSleepClearDisengageReason.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopThermalEventTransitionEnableDeepSleep(int a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v5; // zf

  result = (unsigned int)(a1 - 3);
  if ( (unsigned int)result <= 3 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&PopThermalEventTransitionContext);
    KeCancelTimer2((__int64)&unk_140C22170);
    byte_140C221F8 = 0;
    PopDeepSleepClearDisengageReason(0xAu);
    KxReleaseSpinLock(&PopThermalEventTransitionContext);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v5 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v5 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
  }
  return result;
}
