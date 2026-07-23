/*
 * XREFs of MiRemoveLockedPageChargeAndDecRef @ 0x1402DB214
 * Callers:
 *     MiReturnPfnReferenceCount @ 0x14020DC40 (MiReturnPfnReferenceCount.c)
 *     MiInitializeImageProtos @ 0x14021A200 (MiInitializeImageProtos.c)
 *     MiProbeLockFrame @ 0x1402365D0 (MiProbeLockFrame.c)
 *     MiMigratePfn @ 0x140263370 (MiMigratePfn.c)
 *     MiResolveProtoPteFault @ 0x140268160 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140269FD0 (MiResolveDemandZeroFault.c)
 *     MiMakeDriverPagesPrivate @ 0x140291CE0 (MiMakeDriverPagesPrivate.c)
 *     MmCopyToCachedPage @ 0x1402CDA60 (MmCopyToCachedPage.c)
 *     MiFinishHardFault @ 0x1402D9590 (MiFinishHardFault.c)
 *     MiFinishMdlForMappedFileFault @ 0x1402E1DD0 (MiFinishMdlForMappedFileFault.c)
 *     MiPrivateFixup @ 0x1402ED908 (MiPrivateFixup.c)
 *     MiHandleCollidedFault @ 0x1402EF020 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402EF298 (MiWaitForCollidedFaultComplete.c)
 *     MiLockProtoPage @ 0x1402F254C (MiLockProtoPage.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1403250DC (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiFinalizeImageHeaderPage @ 0x1403306C4 (MiFinalizeImageHeaderPage.c)
 *     MiHardFaultPageRelease @ 0x140335038 (MiHardFaultPageRelease.c)
 *     MiMakeFaultPfnActive @ 0x140335170 (MiMakeFaultPfnActive.c)
 *     MiDeletePerSessionProtos @ 0x14033EE54 (MiDeletePerSessionProtos.c)
 *     MiUnlockNestedProtoPoolPage @ 0x14035A7BC (MiUnlockNestedProtoPoolPage.c)
 *     MiUnlockPagedAddress @ 0x14035B444 (MiUnlockPagedAddress.c)
 *     MiUnlockCodePage @ 0x140367B28 (MiUnlockCodePage.c)
 *     MiDoubleUnlockMdlPage @ 0x14036B720 (MiDoubleUnlockMdlPage.c)
 *     MiSwapStackPage @ 0x14039A11C (MiSwapStackPage.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1403A9F14 (MmDbgMarkPfnModifiedWorker.c)
 *     MiMirrorPerformBrownWrites @ 0x140627B78 (MiMirrorPerformBrownWrites.c)
 *     MiJumpStackTarget @ 0x14062D4D0 (MiJumpStackTarget.c)
 *     MiBuildReservationCluster @ 0x140638834 (MiBuildReservationCluster.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14063C814 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiFinishLastForkPageTable @ 0x140664A4C (MiFinishLastForkPageTable.c)
 *     MiLockDownWorkingSet @ 0x1406656E0 (MiLockDownWorkingSet.c)
 *     MiIdealClusterPage @ 0x14066A9E0 (MiIdealClusterPage.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1402D9270 (MiPfnReferenceCountIsZero.c)
 *     MiRemoveLockedPageCharge @ 0x1402DBDB0 (MiRemoveLockedPageCharge.c)
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
