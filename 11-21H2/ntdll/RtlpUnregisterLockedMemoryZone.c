/*
 * XREFs of RtlpUnregisterLockedMemoryZone @ 0x18007CE44
 * Callers:
 *     RtlUnlockMemoryZone @ 0x18007CDB0 (RtlUnlockMemoryZone.c)
 *     RtlDestroyMemoryZone @ 0x18008B9D0 (RtlDestroyMemoryZone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x18007D000 (RtlUnlockModuleSection.c)
 */

signed __int64 __fastcall RtlpUnregisterLockedMemoryZone(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpMemoryZoneLock, a2, a3, a4);
  if ( !--RtlpLockedMemoryZoneCount )
    RtlUnlockModuleSection(RtlAllocateMemoryZone);
  return RtlReleaseSRWLockExclusive(&RtlpMemoryZoneLock);
}
