/*
 * XREFs of PnprLockPagesForReplace @ 0x1409668E0
 * Callers:
 *     PnprQuiesce @ 0x140563848 (PnprQuiesce.c)
 *     PnpReplacePartitionUnit @ 0x140964CF0 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceWorker @ 0x140A9DCD0 (PnprQuiesceWorker.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14025AA70 (MiLockPagableImageSection.c)
 *     ExNotifyCallback @ 0x14033C1D0 (ExNotifyCallback.c)
 */

void PnprLockPagesForReplace()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
}
