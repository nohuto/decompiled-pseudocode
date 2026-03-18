/*
 * XREFs of MiReturnFullProcessCommitment @ 0x1406FEC50
 * Callers:
 *     MiCopyToUserVa @ 0x14028DF40 (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x14028E238 (MiSplitPrivatePage.c)
 *     MiProbeAndLockPages @ 0x14029C5B0 (MiProbeAndLockPages.c)
 *     IopProbeAndLockPages_1 @ 0x1403198A0 (IopProbeAndLockPages_1.c)
 *     MiMakeHyperRangeAccessible @ 0x1403199E0 (MiMakeHyperRangeAccessible.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     MiCommitExistingVad @ 0x14032C1B0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x14032D1C0 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x14032EA60 (MiProtectPrivateMemory.c)
 *     MiSplitReducedCommitClonePage @ 0x1405845D4 (MiSplitReducedCommitClonePage.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1405A3818 (MiPrepareImagePagesForHotPatch.c)
 *     MiCloneVads @ 0x1405B99AC (MiCloneVads.c)
 *     MiDeleteVadBitmap @ 0x140693D80 (MiDeleteVadBitmap.c)
 *     MiReturnPageTablePageCommitment @ 0x1407B92D0 (MiReturnPageTablePageCommitment.c)
 *     MiFreeLargePageView @ 0x140983198 (MiFreeLargePageView.c)
 * Callees:
 *     MiReturnFullProcessCharges @ 0x14028CDA0 (MiReturnFullProcessCharges.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiGetProcessPartition @ 0x14032A72C (MiGetProcessPartition.c)
 */

__int64 __fastcall MiReturnFullProcessCommitment(__int64 a1, __int64 a2)
{
  __int64 ProcessPartition; // rax

  ProcessPartition = MiGetProcessPartition(a1);
  MiReturnCommit(ProcessPartition, a2);
  return MiReturnFullProcessCharges(a1, a2);
}
