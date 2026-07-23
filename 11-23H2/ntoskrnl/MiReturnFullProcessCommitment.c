/*
 * XREFs of MiReturnFullProcessCommitment @ 0x140765044
 * Callers:
 *     MiCopyToUserVa @ 0x14021CBDC (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x14021CE44 (MiSplitPrivatePage.c)
 *     MmProbeAndLockPages @ 0x140238860 (MmProbeAndLockPages.c)
 *     MiCommitExistingVad @ 0x140276CC0 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x140277940 (MiMakeHyperRangeAccessible.c)
 *     MiSetProtectionOnSection @ 0x140277F10 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x1402A2B10 (MiProtectPrivateMemory.c)
 *     MiProbeAndLockPages @ 0x1402FC500 (MiProbeAndLockPages.c)
 *     MiSplitReducedCommitClonePage @ 0x14061CFB4 (MiSplitReducedCommitClonePage.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140642E18 (MiPrepareImagePagesForHotPatch.c)
 *     MiCloneVads @ 0x1406637C8 (MiCloneVads.c)
 *     MiDeleteVadBitmap @ 0x140706DC4 (MiDeleteVadBitmap.c)
 *     MiReturnPageTablePageCommitment @ 0x140764B80 (MiReturnPageTablePageCommitment.c)
 *     MiFreeLargePageView @ 0x140A49D50 (MiFreeLargePageView.c)
 * Callees:
 *     MiGetProcessPartition @ 0x140275924 (MiGetProcessPartition.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x1402DF3C0 (MiReturnFullProcessCharges.c)
 */

__int64 __fastcall MiReturnFullProcessCommitment(__int64 a1, __int64 a2)
{
  __int64 ProcessPartition; // rax

  ProcessPartition = MiGetProcessPartition(a1);
  MiReturnCommit(ProcessPartition, a2);
  return MiReturnFullProcessCharges(a1, a2);
}
