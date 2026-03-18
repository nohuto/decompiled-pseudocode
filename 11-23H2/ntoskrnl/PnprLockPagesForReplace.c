/*
 * XREFs of PnprLockPagesForReplace @ 0x1409666E0
 * Callers:
 *     PnprQuiesce @ 0x140563188 (PnprQuiesce.c)
 *     PnpReplacePartitionUnit @ 0x140964AF0 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceWorker @ 0x140A9DE60 (PnprQuiesceWorker.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14025A7E0 (MiLockPagableImageSection.c)
 *     ExNotifyCallback @ 0x14033BF40 (ExNotifyCallback.c)
 */

void PnprLockPagesForReplace()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
}
