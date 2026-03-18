/*
 * XREFs of MiReturnFullProcessCommitment @ 0x140764E54
 * Callers:
 *     MiCopyToUserVa @ 0x14021CBDC (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x14021CE44 (MiSplitPrivatePage.c)
 *     MmProbeAndLockPages @ 0x140238790 (MmProbeAndLockPages.c)
 *     MiCommitExistingVad @ 0x140276A30 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x1402776B0 (MiMakeHyperRangeAccessible.c)
 *     MiSetProtectionOnSection @ 0x140277C80 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x1402A2880 (MiProtectPrivateMemory.c)
 *     MiProbeAndLockPages @ 0x1402FC270 (MiProbeAndLockPages.c)
 *     MiSplitReducedCommitClonePage @ 0x14061CA64 (MiSplitReducedCommitClonePage.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1406428C8 (MiPrepareImagePagesForHotPatch.c)
 *     MiCloneVads @ 0x140663278 (MiCloneVads.c)
 *     MiDeleteVadBitmap @ 0x140706BB4 (MiDeleteVadBitmap.c)
 *     MiReturnPageTablePageCommitment @ 0x140764990 (MiReturnPageTablePageCommitment.c)
 *     MiFreeLargePageView @ 0x140A49AA0 (MiFreeLargePageView.c)
 * Callees:
 *     MiGetProcessPartition @ 0x140275694 (MiGetProcessPartition.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x1402DF130 (MiReturnFullProcessCharges.c)
 */

__int64 __fastcall MiReturnFullProcessCommitment(__int64 a1, __int64 a2)
{
  __int64 ProcessPartition; // rax

  ProcessPartition = MiGetProcessPartition(a1);
  MiReturnCommit(ProcessPartition, a2);
  return MiReturnFullProcessCharges(a1, a2);
}
