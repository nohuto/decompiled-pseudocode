/*
 * XREFs of PnprUnlockPagesForReplace @ 0x140967084
 * Callers:
 *     PnprCompleteWake @ 0x140562C34 (PnprCompleteWake.c)
 *     PnpReplacePartitionUnit @ 0x140964BA0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x14025A320 (MmUnlockPagableImageSection.c)
 *     ExNotifyCallback @ 0x14033BD40 (ExNotifyCallback.c)
 */

void PnprUnlockPagesForReplace()
{
  MmUnlockPagableImageSection(ExPageLockHandle);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, (PVOID)1);
}
