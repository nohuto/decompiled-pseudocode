/*
 * XREFs of IoStopDiskIoAttributionForContext @ 0x1403625C8
 * Callers:
 *     PspRemoveIoAttribution @ 0x1407D85E0 (PspRemoveIoAttribution.c)
 *     PspIoRateEntryActivate @ 0x1407D866C (PspIoRateEntryActivate.c)
 *     PspIoRateEntryDeactivate @ 0x1407D8778 (PspIoRateEntryDeactivate.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024B930 (RtlRbRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D360 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402894C0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExWaitForRundownProtectionRelease @ 0x14030A340 (ExWaitForRundownProtectionRelease.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall IoStopDiskIoAttributionForContext(struct _EX_RUNDOWN_REF *a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r9
  int v5; // eax
  _DWORD *SchedulerAssist; // r8
  bool v7; // zf

  v2 = ExAcquireSpinLockExclusive(&IopDiskIoAttributionLock);
  RtlRbRemoveNode((unsigned __int64 *)&IopDiskIoAttributionTree, (unsigned __int64)a1);
  a1[2].Count = -1LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(&IopDiskIoAttributionLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v5 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v7 = (v5 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v5;
      if ( v7 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  ExWaitForRundownProtectionRelease(a1 + 21);
}
