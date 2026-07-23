/*
 * XREFs of PopDisableIrpWatchdog @ 0x1405830EC
 * Callers:
 *     PopDequeueQuerySetIrp @ 0x14028E29C (PopDequeueQuerySetIrp.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer @ 0x140252980 (KeCancelTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     PopIrpWatchdogBugcheck @ 0x140583424 (PopIrpWatchdogBugcheck.c)
 */

void __fastcall PopDisableIrpWatchdog(__int64 a1)
{
  bool v1; // di
  __int64 v2; // rbx
  unsigned __int64 v3; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  bool v8; // zf

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 288));
  if ( *(_DWORD *)(v2 + 188) == 1 && *(_DWORD *)(v2 + 296) == 1 )
  {
    v1 = KeCancelTimer((PKTIMER)(v2 + 56)) == 0;
    *(_DWORD *)(v2 + 296) = 0;
  }
  KxReleaseSpinLock((volatile signed __int64 *)(v2 + 288));
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v3 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v8 = (v7 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v7;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v3);
  if ( v1 )
    PopIrpWatchdogBugcheck(v2);
}
