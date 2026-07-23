/*
 * XREFs of PopFxIssueDirectedPowerTransition @ 0x14058AE84
 * Callers:
 *     PopIssueDirectedPowerTransition @ 0x14098BD90 (PopIssueDirectedPowerTransition.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxQueueWorkOrder @ 0x14028C0AC (PopFxQueueWorkOrder.c)
 *     PopFxAddRefDevice @ 0x1403122C4 (PopFxAddRefDevice.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxBugCheck @ 0x140588C70 (PopFxBugCheck.c)
 */

void __fastcall PopFxIssueDirectedPowerTransition(ULONG_PTR BugCheckParameter2, char a2, __int64 a3)
{
  volatile signed __int64 *v6; // r14
  unsigned __int64 v7; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf

  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 824), 0, 0) & 0x20) == 0 )
    PopFxBugCheck(0x910uLL, 1uLL, BugCheckParameter2, 0LL);
  v6 = (volatile signed __int64 *)(BugCheckParameter2 + 1152);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 1152));
  if ( *(_DWORD *)(BugCheckParameter2 + 1160) || (*(_DWORD *)(BugCheckParameter2 + 32) & 0x2000) != 0 )
    PopFxBugCheck(0x910uLL, 3uLL, BugCheckParameter2, 0LL);
  if ( ((*(_DWORD *)(BugCheckParameter2 + 32) & 0x1000) != 0) == a2 )
    PopFxBugCheck(0x910uLL, (a2 != 0) + 4LL, BugCheckParameter2, 0LL);
  *(_DWORD *)(BugCheckParameter2 + 1160) = 2;
  _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 32), 0x2000u);
  if ( a2 )
    _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 32), 0x1000u);
  else
    _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFEFFF);
  PopFxAddRefDevice(BugCheckParameter2);
  *(_DWORD *)(BugCheckParameter2 + 1180) &= 0xFFFFFFFC;
  *(_QWORD *)(BugCheckParameter2 + 1168) = a3;
  *(_DWORD *)(BugCheckParameter2 + 1176) = -1073741436;
  PopFxQueueWorkOrder(BugCheckParameter2 + 920, BugCheckParameter2);
  KxReleaseSpinLock(v6);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v7 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v12 = (v11 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v11;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v7);
}
