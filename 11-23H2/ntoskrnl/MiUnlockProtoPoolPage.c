/*
 * XREFs of MiUnlockProtoPoolPage @ 0x1402DAEF0
 * Callers:
 *     MiCopyHeaderIfResident @ 0x14020ECB0 (MiCopyHeaderIfResident.c)
 *     MiCombineWithExisting @ 0x1402179B4 (MiCombineWithExisting.c)
 *     MiSoftFaultMappedView @ 0x140217E90 (MiSoftFaultMappedView.c)
 *     MiDeleteSubsectionPages @ 0x140218EF0 (MiDeleteSubsectionPages.c)
 *     MiInitializeImageProtos @ 0x14021A200 (MiInitializeImageProtos.c)
 *     MiResolveTransitionFault @ 0x1402624D0 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x140262E50 (MiHandleTransitionFault.c)
 *     MiMigratePfn @ 0x1402630E0 (MiMigratePfn.c)
 *     MmCheckCachedPageStates @ 0x140265320 (MmCheckCachedPageStates.c)
 *     MiResolveProtoPteFault @ 0x140267ED0 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140269D40 (MiResolveDemandZeroFault.c)
 *     MiGetPageProtection @ 0x140272A20 (MiGetPageProtection.c)
 *     MiFlushSectionInternal @ 0x140275750 (MiFlushSectionInternal.c)
 *     MiLockCode @ 0x140282330 (MiLockCode.c)
 *     MiCopyDataPageToImagePage @ 0x14028B470 (MiCopyDataPageToImagePage.c)
 *     MiWalkVaRange @ 0x140293D54 (MiWalkVaRange.c)
 *     MmCopyToCachedPage @ 0x1402CD7D0 (MmCopyToCachedPage.c)
 *     MiMakePageAvoidRead @ 0x1402CE000 (MiMakePageAvoidRead.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MmPurgeSection @ 0x1402DC8D0 (MmPurgeSection.c)
 *     MiPfPutPagesInTransition @ 0x1402DE040 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x1402E05E0 (MiResolveMappedFileFault.c)
 *     MiAllocateInPageSupport @ 0x1402E0CE4 (MiAllocateInPageSupport.c)
 *     MiResolveProtoCombine @ 0x1402E3AF8 (MiResolveProtoCombine.c)
 *     MmCopyMemory @ 0x1402EDB50 (MmCopyMemory.c)
 *     MiTranslatePageForCopy @ 0x1402EDE44 (MiTranslatePageForCopy.c)
 *     MiHandleCollidedFault @ 0x1402EED90 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402EF008 (MiWaitForCollidedFaultComplete.c)
 *     MiAnyProtosAreMapped @ 0x1402F0E98 (MiAnyProtosAreMapped.c)
 *     MiDeleteMergedPte @ 0x1402F408C (MiDeleteMergedPte.c)
 *     MiDeletePerSessionProtos @ 0x14033EBC4 (MiDeletePerSessionProtos.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140348168 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiWaitForPageWriteCompletion @ 0x14034ACC4 (MiWaitForPageWriteCompletion.c)
 *     MiUnlockDataCopyPages @ 0x1403500CC (MiUnlockDataCopyPages.c)
 *     MiInitializeNewImageSectionProtos @ 0x140356D90 (MiInitializeNewImageSectionProtos.c)
 *     MiCombineWithStandbyExisting @ 0x14035A17C (MiCombineWithStandbyExisting.c)
 *     MiMakeImageReadOnly @ 0x14035CD9C (MiMakeImageReadOnly.c)
 *     MiPurgeImageSection @ 0x14036A438 (MiPurgeImageSection.c)
 *     MiStealPage @ 0x1403BC3DC (MiStealPage.c)
 *     MiInitializeDynamicPfns @ 0x14061AEF8 (MiInitializeDynamicPfns.c)
 *     MiIsSubsectionClean @ 0x140624A94 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x1406256D4 (MiPurgeSubsection.c)
 *     MiReplaceLockedPage @ 0x140636C94 (MiReplaceLockedPage.c)
 *     MiReleasePageFileSectionInfo @ 0x14063B578 (MiReleasePageFileSectionInfo.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14063C2C4 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiEliminateStaleExtents @ 0x14063CB88 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x14063CE00 (MiEnableLargeSubsection.c)
 *     MiFillFileOnlyProtoAsBad @ 0x14063CF90 (MiFillFileOnlyProtoAsBad.c)
 *     MiPurgeFileOnlyPfn @ 0x14063EEC8 (MiPurgeFileOnlyPfn.c)
 *     MiClearDriverHotPatchPtes @ 0x140641DEC (MiClearDriverHotPatchPtes.c)
 *     MmMapHotPatchTablePage @ 0x14064307C (MmMapHotPatchTablePage.c)
 *     MiInsertLargeVadMapping @ 0x14064615C (MiInsertLargeVadMapping.c)
 *     MiIdealClusterPage @ 0x14066A490 (MiIdealClusterPage.c)
 *     MiInitializeProtoPfn @ 0x14066B270 (MiInitializeProtoPfn.c)
 *     MiResolvePageFileFault @ 0x14066B4BC (MiResolvePageFileFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242E40 (KeYieldProcessorEx.c)
 *     MiPfnReferenceCountIsZero @ 0x1402D8FE0 (MiPfnReferenceCountIsZero.c)
 *     MiRemoveLockedPageCharge @ 0x1402DBB20 (MiRemoveLockedPageCharge.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnlockProtoPoolPage(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v3; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v8; // zf
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0;
  v3 = a2;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v9);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  *(_BYTE *)(a1 + 34) &= ~0x20u;
  if ( (unsigned int)MiRemoveLockedPageCharge(a1) )
    MiPfnReferenceCountIsZero(a1, 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4));
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_BYTE)v3 != 17 )
  {
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v8 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v8 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v3);
  }
  return result;
}
