/*
 * XREFs of ViDeadlockDetectionTryConvertSharedToExclusive @ 0x1405D1D48
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x1405D1D98 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x1405D1EF8 (ViDeadlockRemoveMemoryRangeThreads.c)
 * Callees:
 *     ExTryConvertSharedSpinLockExclusive @ 0x1403C7910 (ExTryConvertSharedSpinLockExclusive.c)
 */

LOGICAL ViDeadlockDetectionTryConvertSharedToExclusive()
{
  LOGICAL result; // eax

  result = ExTryConvertSharedSpinLockExclusive(&ViDeadlockDatabaseLock);
  if ( result )
    ViDeadlockDatabaseOwner = (__int64)KeGetCurrentThread();
  return result;
}
