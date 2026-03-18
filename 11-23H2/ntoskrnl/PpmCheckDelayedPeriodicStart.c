/*
 * XREFs of PpmCheckDelayedPeriodicStart @ 0x140373B40
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckCustomRun @ 0x14032B63C (PpmCheckCustomRun.c)
 *     PpmAcquireLock @ 0x14032C2D0 (PpmAcquireLock.c)
 */

void __fastcall PpmCheckDelayedPeriodicStart(int a1)
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmCheckMakeupCount = a1;
  PpmCheckCustomRun(0);
  PpmCheckDelayedStartWorkerQueued = 0;
}
