/*
 * XREFs of ViDeadlockDetectionLock @ 0x140AD8E08
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x1405D1828 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x1405D1988 (ViDeadlockRemoveMemoryRangeThreads.c)
 *     VfDeadlockAcquireResource @ 0x140AD6DDC (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x140AD7768 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x140AD7EFC (VfDeadlockReleaseResource.c)
 *     ViDeadlockDetectionApplySettings @ 0x140AD8DBC (ViDeadlockDetectionApplySettings.c)
 *     ViDeadlockEmptyDatabase @ 0x140AD8E70 (ViDeadlockEmptyDatabase.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x140AD9FD0 (ViIsThreadInsidePagingCodePaths.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025AD10 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A930 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall ViDeadlockDetectionLock(int a1)
{
  if ( a1 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(&ViDeadlockDatabaseLock);
    ViDeadlockDatabaseOwner = (__int64)KeGetCurrentThread();
  }
  else
  {
    ExAcquireSpinLockSharedAtDpcLevel(&ViDeadlockDatabaseLock);
  }
}
