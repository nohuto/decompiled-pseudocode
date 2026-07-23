/*
 * XREFs of RtlpUnregisterLockedMemoryZone @ 0x18007CE44
 * Callers:
 *     RtlUnlockMemoryZone @ 0x18007CDB0 (RtlUnlockMemoryZone.c)
 *     RtlDestroyMemoryZone @ 0x18008B9D0 (RtlDestroyMemoryZone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x18007D000 (RtlUnlockModuleSection.c)
 */

void RtlpUnregisterLockedMemoryZone()
{
  RtlAcquireSRWLockExclusive(&RtlpMemoryZoneLock);
  if ( !--RtlpLockedMemoryZoneCount )
    RtlUnlockModuleSection(RtlAllocateMemoryZone);
  RtlReleaseSRWLockExclusive(&RtlpMemoryZoneLock);
}
