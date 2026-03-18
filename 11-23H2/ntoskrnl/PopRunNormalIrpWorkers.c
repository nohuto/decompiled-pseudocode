/*
 * XREFs of PopRunNormalIrpWorkers @ 0x140598BAC
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140AA6950 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 */

void PopRunNormalIrpWorkers()
{
  ExAcquireFastMutex(&PopIrpWorkerMutex);
  PopCreateIrpWorkerAllowed = 1;
  ExReleaseFastMutex(&PopIrpWorkerMutex);
}
