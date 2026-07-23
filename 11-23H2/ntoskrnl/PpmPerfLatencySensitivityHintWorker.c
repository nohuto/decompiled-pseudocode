/*
 * XREFs of PpmPerfLatencySensitivityHintWorker @ 0x140201E80
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckCustomRun @ 0x14032B8CC (PpmCheckCustomRun.c)
 *     PpmAcquireLock @ 0x14032C560 (PpmAcquireLock.c)
 */

__int64 PpmPerfLatencySensitivityHintWorker()
{
  PpmAcquireLock(&PpmPerfPolicyLock);
  PpmPerfLatencyBoostQueued = 0;
  return PpmCheckCustomRun(3LL);
}
