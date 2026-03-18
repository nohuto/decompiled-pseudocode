/*
 * XREFs of MiLockHugePfn @ 0x1406213F4
 * Callers:
 *     MiZeroPage @ 0x1402D09F0 (MiZeroPage.c)
 *     MiGetHugeRangeFromNode @ 0x1403C50E4 (MiGetHugeRangeFromNode.c)
 *     MiDecrementHugeContext @ 0x1403D6658 (MiDecrementHugeContext.c)
 *     MiAddPartitionHugeRange @ 0x14061F204 (MiAddPartitionHugeRange.c)
 *     MiGetPageInHugePageBadStatus @ 0x14061FF0C (MiGetPageInHugePageBadStatus.c)
 *     MiHotRemoveHugeRange @ 0x1406200D4 (MiHotRemoveHugeRange.c)
 *     MiMarkHugePfnBad @ 0x140621618 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x140621DF4 (MiMarkHugePfnGood.c)
 *     MiMoveBadHugeRangeCrossPartition @ 0x1406220B8 (MiMoveBadHugeRangeCrossPartition.c)
 *     MiReleaseMemoryRuns @ 0x1406222EC (MiReleaseMemoryRuns.c)
 *     MiReturnUnusedHugeDescriptors @ 0x140622710 (MiReturnUnusedHugeDescriptors.c)
 *     MiZeroHugeRangeWorker @ 0x140622DD0 (MiZeroHugeRangeWorker.c)
 *     MiUpdateBadPfnIdentity @ 0x14062B2EC (MiUpdateBadPfnIdentity.c)
 *     MiFreePartitionPageRun @ 0x140659CFC (MiFreePartitionPageRun.c)
 *     MiInsertPartitionPages @ 0x14065A480 (MiInsertPartitionPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x140A4431C (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiLockHugePfnInternal @ 0x140621468 (MiLockHugePfnInternal.c)
 */

unsigned __int8 __fastcall MiLockHugePfn(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  int v3; // eax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
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
