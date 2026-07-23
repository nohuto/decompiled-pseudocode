/*
 * XREFs of PnprUnlockPagesForReplace @ 0x1409671D4
 * Callers:
 *     PnprCompleteWake @ 0x140563254 (PnprCompleteWake.c)
 *     PnpReplacePartitionUnit @ 0x140964CF0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x14025A6D0 (MmUnlockPagableImageSection.c)
 *     ExNotifyCallback @ 0x14033C1D0 (ExNotifyCallback.c)
 */

void PnprUnlockPagesForReplace()
{
  MmUnlockPagableImageSection(ExPageLockHandle);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, (PVOID)1);
}
