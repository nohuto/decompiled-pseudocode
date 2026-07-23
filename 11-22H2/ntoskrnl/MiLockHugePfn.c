/*
 * XREFs of MiLockHugePfn @ 0x140621464
 * Callers:
 *     MiZeroPage @ 0x1402D09F0 (MiZeroPage.c)
 *     MiGetHugeRangeFromNode @ 0x1403C4A84 (MiGetHugeRangeFromNode.c)
 *     MiDecrementHugeContext @ 0x1403D5FF8 (MiDecrementHugeContext.c)
 *     MiAddPartitionHugeRange @ 0x14061F274 (MiAddPartitionHugeRange.c)
 *     MiGetPageInHugePageBadStatus @ 0x14061FF7C (MiGetPageInHugePageBadStatus.c)
 *     MiHotRemoveHugeRange @ 0x140620144 (MiHotRemoveHugeRange.c)
 *     MiMarkHugePfnBad @ 0x140621688 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x140621E64 (MiMarkHugePfnGood.c)
 *     MiMoveBadHugeRangeCrossPartition @ 0x140622128 (MiMoveBadHugeRangeCrossPartition.c)
 *     MiReleaseMemoryRuns @ 0x14062235C (MiReleaseMemoryRuns.c)
 *     MiReturnUnusedHugeDescriptors @ 0x140622780 (MiReturnUnusedHugeDescriptors.c)
 *     MiZeroHugeRangeWorker @ 0x140622E40 (MiZeroHugeRangeWorker.c)
 *     MiUpdateBadPfnIdentity @ 0x14062B35C (MiUpdateBadPfnIdentity.c)
 *     MiFreePartitionPageRun @ 0x140659D6C (MiFreePartitionPageRun.c)
 *     MiInsertPartitionPages @ 0x14065A4F0 (MiInsertPartitionPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x140A4438C (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiLockHugePfnInternal @ 0x1406214D8 (MiLockHugePfnInternal.c)
 */

unsigned __int8 __fastcall MiLockHugePfn(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  int v3; // eax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v3 = 4;
    if ( CurrentIrql != 2 )
      v3 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v3;
  }
  MiLockHugePfnInternal(a1, 0LL);
  return CurrentIrql;
}
