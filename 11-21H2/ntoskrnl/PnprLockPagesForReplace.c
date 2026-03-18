/*
 * XREFs of PnprLockPagesForReplace @ 0x140952A20
 * Callers:
 *     PnprQuiesce @ 0x140563058 (PnprQuiesce.c)
 *     PnpReplacePartitionUnit @ 0x140950E30 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceWorker @ 0x140A69140 (PnprQuiesceWorker.c)
 * Callees:
 *     ExNotifyCallback @ 0x140232770 (ExNotifyCallback.c)
 *     MiLockPagableImageSection @ 0x1402FD820 (MiLockPagableImageSection.c)
 */

void PnprLockPagesForReplace()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
}
