/*
 * XREFs of PopRunNormalIrpWorkers @ 0x14059909C
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140AA67C0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 */

void PopRunNormalIrpWorkers()
{
  ExAcquireFastMutex(&PopIrpWorkerMutex);
  PopCreateIrpWorkerAllowed = 1;
  ExReleaseFastMutex(&PopIrpWorkerMutex);
}
