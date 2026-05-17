/*
 * XREFs of RtlpUnregisterLockedMemoryZone @ 0x180052484
 * Callers:
 *     RtlUnlockMemoryZone @ 0x1800523F0 (RtlUnlockMemoryZone.c)
 *     RtlDestroyMemoryZone @ 0x180089350 (RtlDestroyMemoryZone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x180051EF0 (RtlUnlockModuleSection.c)
 */

signed __int64 RtlpUnregisterLockedMemoryZone()
{
  RtlAcquireSRWLockExclusive(&RtlpMemoryZoneLock);
  if ( !--RtlpLockedMemoryZoneCount )
    RtlUnlockModuleSection((__int64)RtlAllocateMemoryZone);
  return RtlReleaseSRWLockExclusive(&RtlpMemoryZoneLock);
}
