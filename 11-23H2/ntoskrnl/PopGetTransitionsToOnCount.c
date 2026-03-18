/*
 * XREFs of PopGetTransitionsToOnCount @ 0x1405951AC
 * Callers:
 *     PopSetSleepMarker @ 0x1409814A0 (PopSetSleepMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 */

__int64 PopGetTransitionsToOnCount()
{
  unsigned int v0; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopTelemetryOsState);
  v0 = dword_140C3C408;
  PopReleaseRwLock(&PopTelemetryOsState);
  return v0;
}
