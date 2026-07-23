/*
 * XREFs of ViRaiseIrqlToDpcLevel @ 0x1405D1BC0
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x1405D18B8 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x1405D1A18 (ViDeadlockRemoveMemoryRangeThreads.c)
 *     VfDeadlockAcquireResource @ 0x140AD7DAC (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x140AD8738 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x140AD8ECC (VfDeadlockReleaseResource.c)
 *     ViDeadlockDetectionApplySettings @ 0x140AD9D8C (ViDeadlockDetectionApplySettings.c)
 *     ViDeadlockEmptyDatabase @ 0x140AD9E40 (ViDeadlockEmptyDatabase.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x140ADAFA0 (ViIsThreadInsidePagingCodePaths.c)
 * Callees:
 *     <none>
 */

unsigned __int8 ViRaiseIrqlToDpcLevel()
{
  unsigned __int8 CurrentIrql; // r8
  unsigned __int8 v1; // cl
  _DWORD *SchedulerAssist; // r9
  __int64 v3; // rcx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    v1 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags )
    {
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v1 <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v1 == 2 )
          LODWORD(v3) = 4;
        else
          v3 = (-1LL << (v1 + 1)) & 4;
        SchedulerAssist[5] |= v3;
      }
    }
  }
  return CurrentIrql;
}
