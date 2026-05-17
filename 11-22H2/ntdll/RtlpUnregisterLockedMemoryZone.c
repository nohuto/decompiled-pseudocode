/*
 * XREFs of RtlpUnregisterLockedMemoryZone @ 0x1800525E4
 * Callers:
 *     RtlUnlockMemoryZone @ 0x180052550 (RtlUnlockMemoryZone.c)
 *     RtlDestroyMemoryZone @ 0x180088B50 (RtlDestroyMemoryZone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x180052050 (RtlUnlockModuleSection.c)
 */

signed __int64 RtlpUnregisterLockedMemoryZone()
{
  RtlAcquireSRWLockExclusive(&RtlpMemoryZoneLock);
  if ( !--RtlpLockedMemoryZoneCount )
    RtlUnlockModuleSection((__int64)RtlAllocateMemoryZone);
  return RtlReleaseSRWLockExclusive(&RtlpMemoryZoneLock);
}
