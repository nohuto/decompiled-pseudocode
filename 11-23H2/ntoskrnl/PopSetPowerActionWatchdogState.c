/*
 * XREFs of PopSetPowerActionWatchdogState @ 0x14058F4F8
 * Callers:
 *     PopIssueActionRequest @ 0x140989CA4 (PopIssueActionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140250500 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250E80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetTimerEx @ 0x140252820 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x140252AA0 (KeCancelTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 *     PopPowerActionWatchdog @ 0x14058F430 (PopPowerActionWatchdog.c)
 *     PopUpdatePowerActionWatchdogTimeouts @ 0x14098AAC8 (PopUpdatePowerActionWatchdogTimeouts.c)
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
  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C3D1D8);
  if ( dword_140C3D264 != a1 )
  {
    if ( dword_140C3D264 )
    {
      if ( !KeCancelTimer(&stru_140C3D220) )
      {
        PopPowerActionWatchdog();
        goto LABEL_15;
      }
      qword_140C3D268 = 0LL;
      dword_140C3D264 = 0;
    }
    if ( a1 )
    {
      v3 = a1 == 1 ? PopPowerActionTransitioningWatchdogTimeout : PopPowerActionResumingWatchdogTimeout;
      if ( v3 )
      {
        qword_140C3D268 = MEMORY[0xFFFFF78000000008];
        dword_140C3D270 = v3;
        dword_140C3D264 = a1;
        KiSetTimerEx((__int64)&stru_140C3D220, -10000000LL * v3, 0, 0, (__int64)&dword_140C3D1E0);
      }
    }
  }
LABEL_15:
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140C3D1D8);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
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
