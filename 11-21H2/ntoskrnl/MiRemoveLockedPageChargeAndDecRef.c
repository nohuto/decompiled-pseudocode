/*
 * XREFs of MiRemoveLockedPageChargeAndDecRef @ 0x140336AD8
 * Callers:
 *     MiJumpStackTarget @ 0x1402003C0 (MiJumpStackTarget.c)
 *     MiUnlockNestedProtoPoolPage @ 0x140227E94 (MiUnlockNestedProtoPoolPage.c)
 *     MiHardFaultPageRelease @ 0x140231A68 (MiHardFaultPageRelease.c)
 *     MiHandleCollidedFault @ 0x14023EB78 (MiHandleCollidedFault.c)
 *     MiPrivateFixup @ 0x14024076C (MiPrivateFixup.c)
 *     MiSwapStackPage @ 0x140249930 (MiSwapStackPage.c)
 *     MiLockProtoPage @ 0x14024C4D8 (MiLockProtoPage.c)
 *     MiDeletePerSessionProtos @ 0x14025592C (MiDeletePerSessionProtos.c)
 *     MiUnlockCodePage @ 0x140256158 (MiUnlockCodePage.c)
 *     MiDoubleUnlockMdlPage @ 0x14025C03C (MiDoubleUnlockMdlPage.c)
 *     MiUnlockPagedAddress @ 0x14025D494 (MiUnlockPagedAddress.c)
 *     MiCopyDataPageToImagePage @ 0x14026F180 (MiCopyDataPageToImagePage.c)
 *     MiConvertPrivateToProto @ 0x140272A10 (MiConvertPrivateToProto.c)
 *     MiWaitForCollidedFaultComplete @ 0x14027FEF8 (MiWaitForCollidedFaultComplete.c)
 *     MiReturnPfnReferenceCount @ 0x14029BA28 (MiReturnPfnReferenceCount.c)
 *     MmCopyToCachedPage @ 0x1402BE8E0 (MmCopyToCachedPage.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1402DAC64 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiInitializeImageProtos @ 0x1402E4474 (MiInitializeImageProtos.c)
 *     MiFinalizeImageHeaderPage @ 0x1402EB1A0 (MiFinalizeImageHeaderPage.c)
 *     MiProbeLockFrame @ 0x14031BAB0 (MiProbeLockFrame.c)
 *     MiMigratePfn @ 0x140327C60 (MiMigratePfn.c)
 *     MiFinishHardFault @ 0x140334C40 (MiFinishHardFault.c)
 *     MiMakeFaultPfnActive @ 0x140339240 (MiMakeFaultPfnActive.c)
 *     MiResolveProtoCombine @ 0x14033A920 (MiResolveProtoCombine.c)
 *     MiFinishMdlForMappedFileFault @ 0x14033DC30 (MiFinishMdlForMappedFileFault.c)
 *     MiMakeDriverPagesPrivate @ 0x14033F41C (MiMakeDriverPagesPrivate.c)
 *     MiMirrorPerformBrownWrites @ 0x140399444 (MiMirrorPerformBrownWrites.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1403D820C (MmDbgMarkPfnModifiedWorker.c)
 *     MiBuildReservationCluster @ 0x14059B62C (MiBuildReservationCluster.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14059DB28 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiFinishLastForkPageTable @ 0x1405BACCC (MiFinishLastForkPageTable.c)
 *     MiLockDownWorkingSet @ 0x1405BB938 (MiLockDownWorkingSet.c)
 *     MiIdealClusterPage @ 0x1405C3C6C (MiIdealClusterPage.c)
 * Callees:
 *     MiRemoveLockedPageCharge @ 0x1403377E0 (MiRemoveLockedPageCharge.c)
 *     MiPfnReferenceCountIsZero @ 0x140338500 (MiPfnReferenceCountIsZero.c)
 */

__int64 __fastcall MiRemoveLockedPageChargeAndDecRef(__int64 a1)
{
  __int64 result; // rax

  result = MiRemoveLockedPageCharge(a1);
  if ( (_DWORD)result )
  {
    MiPfnReferenceCountIsZero(a1, 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4));
    return 1LL;
  }
  return result;
}
