/*
 * XREFs of PpmCheckDelayedPeriodicStart @ 0x140373CE0
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckCustomRun @ 0x14032B8CC (PpmCheckCustomRun.c)
 *     PpmAcquireLock @ 0x14032C560 (PpmAcquireLock.c)
 */

void __fastcall PpmCheckDelayedPeriodicStart(int a1)
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmCheckMakeupCount = a1;
  PpmCheckCustomRun(0);
  PpmCheckDelayedStartWorkerQueued = 0;
}
