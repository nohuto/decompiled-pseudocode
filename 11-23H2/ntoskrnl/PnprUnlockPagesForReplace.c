/*
 * XREFs of PnprUnlockPagesForReplace @ 0x140966FD4
 * Callers:
 *     PnprCompleteWake @ 0x140562B94 (PnprCompleteWake.c)
 *     PnpReplacePartitionUnit @ 0x140964AF0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x14025A440 (MmUnlockPagableImageSection.c)
 *     ExNotifyCallback @ 0x14033BF40 (ExNotifyCallback.c)
 */

void PnprUnlockPagesForReplace()
{
  MmUnlockPagableImageSection(ExPageLockHandle);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, (PVOID)1);
}
