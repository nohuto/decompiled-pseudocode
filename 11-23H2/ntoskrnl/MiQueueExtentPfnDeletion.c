/*
 * XREFs of MiQueueExtentPfnDeletion @ 0x14063F0B8
 * Callers:
 *     MiWorkingSetManager @ 0x14021D5F0 (MiWorkingSetManager.c)
 *     MiClearFileOnlyPfn @ 0x14063C200 (MiClearFileOnlyPfn.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D360 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402894C0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A930 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiWakeFileOnlyReaper @ 0x14064044C (MiWakeFileOnlyReaper.c)
 */

void __fastcall MiQueueExtentPfnDeletion(_QWORD *a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v6; // eax
  bool v7; // zf

  if ( a1 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C6CEA0);
    *a1 = qword_140C656E0;
    qword_140C656E0 = (__int64)a1;
    MiWakeFileOnlyReaper();
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C6CEA0);
  }
  else
  {
    v2 = ExAcquireSpinLockExclusive(&dword_140C6CEA0);
    MiWakeFileOnlyReaper();
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C6CEA0);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
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
    __writecr8(v2);
  }
}
