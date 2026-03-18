/*
 * XREFs of PpmClearExitLatencySamplingPercentage @ 0x140584004
 * Callers:
 *     NtPowerInformation @ 0x140783F20 (NtPowerInformation.c)
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x1402C003C (KeFlushProcessWriteBuffers.c)
 *     PpmReleaseLock @ 0x14032C280 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14032C2D0 (PpmAcquireLock.c)
 */

void PpmClearExitLatencySamplingPercentage()
{
  signed __int32 v0[10]; // [rsp+0h] [rbp-28h] BYREF

  PpmAcquireLock(&PopFxSystemLatencyLock);
  PpmExitLatencySamplingPercentageSet = 0;
  PpmExitLatencySamplingPercentage = 0;
  _InterlockedOr(v0, 0);
  KeFlushProcessWriteBuffers(1);
  PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
}
