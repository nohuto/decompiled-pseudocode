/*
 * XREFs of ViDeadlockDetectionTryConvertSharedToExclusive @ 0x1405D17D8
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x1405D1828 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x1405D1988 (ViDeadlockRemoveMemoryRangeThreads.c)
 * Callees:
 *     ExTryConvertSharedSpinLockExclusive @ 0x1403C7730 (ExTryConvertSharedSpinLockExclusive.c)
 */

LOGICAL ViDeadlockDetectionTryConvertSharedToExclusive()
{
  LOGICAL result; // eax

  result = ExTryConvertSharedSpinLockExclusive(&ViDeadlockDatabaseLock);
  if ( result )
    ViDeadlockDatabaseOwner = (__int64)KeGetCurrentThread();
  return result;
}
