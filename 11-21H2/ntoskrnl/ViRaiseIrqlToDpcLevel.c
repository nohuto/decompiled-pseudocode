/*
 * XREFs of ViRaiseIrqlToDpcLevel @ 0x1406018DC
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x1406015D4 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x140601734 (ViDeadlockRemoveMemoryRangeThreads.c)
 *     VfDeadlockAcquireResource @ 0x140A97900 (VfDeadlockAcquireResource.c)
 *     VfDeadlockAfterCallDriver @ 0x140A97FF4 (VfDeadlockAfterCallDriver.c)
 *     VfDeadlockBeforeCallDriver @ 0x140A98064 (VfDeadlockBeforeCallDriver.c)
 *     VfDeadlockInitializeResource @ 0x140A98420 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x140A985B4 (VfDeadlockReleaseResource.c)
 *     ViDeadlockDetectionApplySettings @ 0x140A99478 (ViDeadlockDetectionApplySettings.c)
 *     ViDeadlockEmptyDatabase @ 0x140A9952C (ViDeadlockEmptyDatabase.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x140A9A170 (ViIsThreadInsidePagingCodePaths.c)
 * Callees:
 *     <none>
 */

unsigned __int8 ViRaiseIrqlToDpcLevel()
{
  unsigned __int8 CurrentIrql; // r10
  unsigned __int8 v1; // cl
  struct _KPRCB *CurrentPrcb; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    v1 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && v1 <= 0xFu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        *((_DWORD *)CurrentPrcb->SchedulerAssist + 5) |= ~((unsigned __int8)(1LL << (v1 + 1)) - 1) & 4;
      }
    }
  }
  return CurrentIrql;
}
