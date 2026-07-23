/*
 * XREFs of PoFxRegisterDripsWatchdogCallback @ 0x1403B44D0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxBugCheck @ 0x1405890D0 (PopFxBugCheck.c)
 */

void __fastcall PoFxRegisterDripsWatchdogCallback(ULONG_PTR BugCheckParameter2, __int64 a2, char a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf

  v4 = *(_QWORD *)(BugCheckParameter2 + 48);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 88));
  if ( *(_QWORD *)(BugCheckParameter2 + 168) )
    PopFxBugCheck(0x622uLL, BugCheckParameter2, 0LL, 0LL);
  if ( a3 )
    _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 824), 8u);
  *(_QWORD *)(BugCheckParameter2 + 864) = a4;
  *(_QWORD *)(BugCheckParameter2 + 168) = a2;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 88));
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v9 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v14 = (v13 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v9);
}
