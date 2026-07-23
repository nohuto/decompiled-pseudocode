/*
 * XREFs of MiLockHugePfn @ 0x140621944
 * Callers:
 *     MiZeroPage @ 0x1402D0C80 (MiZeroPage.c)
 *     MiGetHugeRangeFromNode @ 0x1403C52C4 (MiGetHugeRangeFromNode.c)
 *     MiDecrementHugeContext @ 0x1403D6838 (MiDecrementHugeContext.c)
 *     MiAddPartitionHugeRange @ 0x14061F754 (MiAddPartitionHugeRange.c)
 *     MiGetPageInHugePageBadStatus @ 0x14062045C (MiGetPageInHugePageBadStatus.c)
 *     MiHotRemoveHugeRange @ 0x140620624 (MiHotRemoveHugeRange.c)
 *     MiMarkHugePfnBad @ 0x140621B68 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x140622344 (MiMarkHugePfnGood.c)
 *     MiMoveBadHugeRangeCrossPartition @ 0x140622608 (MiMoveBadHugeRangeCrossPartition.c)
 *     MiReleaseMemoryRuns @ 0x14062283C (MiReleaseMemoryRuns.c)
 *     MiReturnUnusedHugeDescriptors @ 0x140622C60 (MiReturnUnusedHugeDescriptors.c)
 *     MiZeroHugeRangeWorker @ 0x140623320 (MiZeroHugeRangeWorker.c)
 *     MiUpdateBadPfnIdentity @ 0x14062B83C (MiUpdateBadPfnIdentity.c)
 *     MiFreePartitionPageRun @ 0x14065A24C (MiFreePartitionPageRun.c)
 *     MiInsertPartitionPages @ 0x14065A9D0 (MiInsertPartitionPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x140A445CC (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiLockHugePfnInternal @ 0x1406219B8 (MiLockHugePfnInternal.c)
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
