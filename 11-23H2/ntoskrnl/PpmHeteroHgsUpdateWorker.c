/*
 * XREFs of PpmHeteroHgsUpdateWorker @ 0x14059E880
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x14032C2D0 (PpmAcquireLock.c)
 *     PpmReinitializeHeteroEngine @ 0x14082F1A8 (PpmReinitializeHeteroEngine.c)
 */

__int64 PpmHeteroHgsUpdateWorker()
{
  __int64 v0; // rcx

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmHeteroHgsUpdateQueued = 0;
  LOBYTE(v0) = 1;
  return PpmReinitializeHeteroEngine(v0, 0LL);
}
