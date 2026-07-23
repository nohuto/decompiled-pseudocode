/*
 * XREFs of RtlpRegisterLockedMemoryZone @ 0x18007CC5C
 * Callers:
 *     RtlLockMemoryZone @ 0x18007CBB0 (RtlLockMemoryZone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlLockModuleSection @ 0x18007CEF0 (RtlLockModuleSection.c)
 */

__int64 RtlpRegisterLockedMemoryZone()
{
  NTSTATUS v0; // ebx
  int v1; // eax

  v0 = 0;
  RtlAcquireSRWLockExclusive(&RtlpMemoryZoneLock);
  v1 = RtlpLockedMemoryZoneCount;
  if ( !RtlpLockedMemoryZoneCount )
  {
    v0 = RtlLockModuleSection(RtlpMemoryZoneCriticalRoutines);
    if ( v0 < 0 )
      goto LABEL_3;
    v1 = RtlpLockedMemoryZoneCount;
  }
  RtlpLockedMemoryZoneCount = v1 + 1;
LABEL_3:
  RtlReleaseSRWLockExclusive(&RtlpMemoryZoneLock);
  return (unsigned int)v0;
}
