/*
 * XREFs of MiRemoveLockedPageChargeAndDecRef @ 0x1402DAF84
 * Callers:
 *     MiReturnPfnReferenceCount @ 0x14020DC40 (MiReturnPfnReferenceCount.c)
 *     MiInitializeImageProtos @ 0x14021A200 (MiInitializeImageProtos.c)
 *     MiProbeLockFrame @ 0x140236500 (MiProbeLockFrame.c)
 *     MiMigratePfn @ 0x1402630E0 (MiMigratePfn.c)
 *     MiResolveProtoPteFault @ 0x140267ED0 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140269D40 (MiResolveDemandZeroFault.c)
 *     MiMakeDriverPagesPrivate @ 0x140291A50 (MiMakeDriverPagesPrivate.c)
 *     MmCopyToCachedPage @ 0x1402CD7D0 (MmCopyToCachedPage.c)
 *     MiFinishHardFault @ 0x1402D9300 (MiFinishHardFault.c)
 *     MiFinishMdlForMappedFileFault @ 0x1402E1B40 (MiFinishMdlForMappedFileFault.c)
 *     MiPrivateFixup @ 0x1402ED678 (MiPrivateFixup.c)
 *     MiHandleCollidedFault @ 0x1402EED90 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402EF008 (MiWaitForCollidedFaultComplete.c)
 *     MiLockProtoPage @ 0x1402F22BC (MiLockProtoPage.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140324E4C (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiFinalizeImageHeaderPage @ 0x140330434 (MiFinalizeImageHeaderPage.c)
 *     MiHardFaultPageRelease @ 0x140334DA8 (MiHardFaultPageRelease.c)
 *     MiMakeFaultPfnActive @ 0x140334EE0 (MiMakeFaultPfnActive.c)
 *     MiDeletePerSessionProtos @ 0x14033EBC4 (MiDeletePerSessionProtos.c)
 *     MiUnlockNestedProtoPoolPage @ 0x14035A61C (MiUnlockNestedProtoPoolPage.c)
 *     MiUnlockPagedAddress @ 0x14035B2A4 (MiUnlockPagedAddress.c)
 *     MiUnlockCodePage @ 0x140367988 (MiUnlockCodePage.c)
 *     MiDoubleUnlockMdlPage @ 0x14036B580 (MiDoubleUnlockMdlPage.c)
 *     MiSwapStackPage @ 0x140399F3C (MiSwapStackPage.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1403A9D34 (MmDbgMarkPfnModifiedWorker.c)
 *     MiMirrorPerformBrownWrites @ 0x140627628 (MiMirrorPerformBrownWrites.c)
 *     MiJumpStackTarget @ 0x14062CF80 (MiJumpStackTarget.c)
 *     MiBuildReservationCluster @ 0x1406382E4 (MiBuildReservationCluster.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14063C2C4 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiFinishLastForkPageTable @ 0x1406644FC (MiFinishLastForkPageTable.c)
 *     MiLockDownWorkingSet @ 0x140665190 (MiLockDownWorkingSet.c)
 *     MiIdealClusterPage @ 0x14066A490 (MiIdealClusterPage.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1402D8FE0 (MiPfnReferenceCountIsZero.c)
 *     MiRemoveLockedPageCharge @ 0x1402DBB20 (MiRemoveLockedPageCharge.c)
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
