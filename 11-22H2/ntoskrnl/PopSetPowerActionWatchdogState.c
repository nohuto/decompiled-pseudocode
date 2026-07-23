/*
 * XREFs of PopSetPowerActionWatchdogState @ 0x14058F588
 * Callers:
 *     PopIssueActionRequest @ 0x140989D54 (PopIssueActionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetTimerEx @ 0x140252700 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x140252980 (KeCancelTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     PopPowerActionWatchdog @ 0x14058F4C0 (PopPowerActionWatchdog.c)
 *     PopUpdatePowerActionWatchdogTimeouts @ 0x14098AB78 (PopUpdatePowerActionWatchdogTimeouts.c)
 */

void __fastcall PopSetPowerActionWatchdogState(unsigned int a1)
{
  unsigned __int64 v2; // rdi
  int v3; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  bool v8; // zf

  if ( a1 > 2 )
    return;
  if ( a1 == 1 )
    PopUpdatePowerActionWatchdogTimeouts();
  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C3CF38);
  if ( dword_140C3CFC4 != a1 )
  {
    if ( dword_140C3CFC4 )
    {
      if ( !KeCancelTimer(&stru_140C3CF80) )
      {
        PopPowerActionWatchdog();
        goto LABEL_15;
      }
      qword_140C3CFC8 = 0LL;
      dword_140C3CFC4 = 0;
    }
    if ( a1 )
    {
      v3 = a1 == 1 ? PopPowerActionTransitioningWatchdogTimeout : PopPowerActionResumingWatchdogTimeout;
      if ( v3 )
      {
        qword_140C3CFC8 = MEMORY[0xFFFFF78000000008];
        dword_140C3CFD0 = v3;
        dword_140C3CFC4 = a1;
        KiSetTimerEx((__int64)&stru_140C3CF80, -10000000LL * v3, 0, 0, (__int64)&dword_140C3CF40);
      }
    }
  }
LABEL_15:
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140C3CF38);
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
      v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v8 = (v7 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v7;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v2);
}
