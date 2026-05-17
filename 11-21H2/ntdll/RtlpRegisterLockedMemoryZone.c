/*
 * XREFs of RtlpRegisterLockedMemoryZone @ 0x18007CC5C
 * Callers:
 *     RtlLockMemoryZone @ 0x18007CBB0 (RtlLockMemoryZone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlLockModuleSection @ 0x18007CEF0 (RtlLockModuleSection.c)
 */

__int64 __fastcall RtlpRegisterLockedMemoryZone(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v4; // ebx
  int v5; // eax

  v4 = 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpMemoryZoneLock, a2, a3, a4);
  v5 = RtlpLockedMemoryZoneCount;
  if ( !RtlpLockedMemoryZoneCount )
  {
    v4 = RtlLockModuleSection(RtlpMemoryZoneCriticalRoutines);
    if ( v4 < 0 )
      goto LABEL_3;
    v5 = RtlpLockedMemoryZoneCount;
  }
  RtlpLockedMemoryZoneCount = v5 + 1;
LABEL_3:
  RtlReleaseSRWLockExclusive(&RtlpMemoryZoneLock);
  return (unsigned int)v4;
}
