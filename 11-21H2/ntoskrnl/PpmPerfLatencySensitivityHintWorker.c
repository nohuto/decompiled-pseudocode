/*
 * XREFs of PpmPerfLatencySensitivityHintWorker @ 0x140224690
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckCustomRun @ 0x14022475C (PpmCheckCustomRun.c)
 *     PpmAcquireLock @ 0x140224E90 (PpmAcquireLock.c)
 */

__int64 PpmPerfLatencySensitivityHintWorker()
{
  PpmAcquireLock(&PpmPerfPolicyLock);
  PpmPerfLatencyBoostQueued = 0;
  return PpmCheckCustomRun(3LL);
}
