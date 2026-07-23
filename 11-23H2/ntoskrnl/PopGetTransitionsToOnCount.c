/*
 * XREFs of PopGetTransitionsToOnCount @ 0x14059569C
 * Callers:
 *     PopSetSleepMarker @ 0x1409816A0 (PopSetSleepMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 */

__int64 PopGetTransitionsToOnCount()
{
  unsigned int v0; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopTelemetryOsState);
  v0 = dword_140C3C3A8;
  PopReleaseRwLock(&PopTelemetryOsState);
  return v0;
}
