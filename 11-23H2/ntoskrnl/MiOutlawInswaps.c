/*
 * XREFs of MiOutlawInswaps @ 0x1403428E4
 * Callers:
 *     MiBeginProcessClean @ 0x140342800 (MiBeginProcessClean.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D360 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140286E74 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402894C0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetWorkingSetSwapSupport @ 0x140342978 (MiGetWorkingSetSwapSupport.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiOutlawInswaps(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  unsigned __int64 v3; // rsi
  __int64 WorkingSetSwapSupport; // rbp
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  v1 = a1 + 1664;
  v2 = *(_QWORD *)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(a1 + 1838));
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 1176));
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v1);
  *((_QWORD *)MiGetSharedVm(v5) + 3) = 2LL;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1176));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v3);
  return WorkingSetSwapSupport;
}
