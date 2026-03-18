/*
 * XREFs of MiDecrementSubsection @ 0x1403A668C
 * Callers:
 *     MiTrimSection @ 0x1402EF974 (MiTrimSection.c)
 *     MiTrimSharedPage @ 0x1403A63BC (MiTrimSharedPage.c)
 *     MiLocateSharedPageViews @ 0x1406364E0 (MiLocateSharedPageViews.c)
 *     MiPurgeBadFileOnlyPages @ 0x14063EA70 (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D360 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402894C0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementSubsections @ 0x14029FA30 (MiDecrementSubsections.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14066B3B4 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiDecrementSubsection(__int64 *BugCheckParameter2)
{
  __int64 v1; // r14
  unsigned __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 result; // rax
  unsigned int v6; // ebx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v10; // zf

  v1 = *BugCheckParameter2;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*BugCheckParameter2 + 72));
  v4 = MiDecrementSubsections((ULONG_PTR)BugCheckParameter2, (__int64)BugCheckParameter2, 0);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 72));
  result = (unsigned int)KiIrqlFlags;
  v6 = 0;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v10 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v10 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v3);
  if ( v4 )
  {
    LOBYTE(v6) = *(_QWORD *)(v1 + 64) != 0LL;
    return MiReturnCrossPartitionSectionCharges(
             *(_QWORD *)(qword_140C673C8 + 8LL * (*(_WORD *)(v1 + 60) & 0x3FF)),
             v6,
             v4);
  }
  return result;
}
