/*
 * XREFs of MiUnlockProtoPoolPage @ 0x1402DB180
 * Callers:
 *     MiCopyHeaderIfResident @ 0x14020ECB0 (MiCopyHeaderIfResident.c)
 *     MiCombineWithExisting @ 0x1402179B4 (MiCombineWithExisting.c)
 *     MiSoftFaultMappedView @ 0x140217E90 (MiSoftFaultMappedView.c)
 *     MiDeleteSubsectionPages @ 0x140218EF0 (MiDeleteSubsectionPages.c)
 *     MiInitializeImageProtos @ 0x14021A200 (MiInitializeImageProtos.c)
 *     MiResolveTransitionFault @ 0x140262760 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x1402630E0 (MiHandleTransitionFault.c)
 *     MiMigratePfn @ 0x140263370 (MiMigratePfn.c)
 *     MmCheckCachedPageStates @ 0x1402655B0 (MmCheckCachedPageStates.c)
 *     MiResolveProtoPteFault @ 0x140268160 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140269FD0 (MiResolveDemandZeroFault.c)
 *     MiGetPageProtection @ 0x140272CB0 (MiGetPageProtection.c)
 *     MiFlushSectionInternal @ 0x1402759E0 (MiFlushSectionInternal.c)
 *     MiLockCode @ 0x1402825C0 (MiLockCode.c)
 *     MiCopyDataPageToImagePage @ 0x14028B700 (MiCopyDataPageToImagePage.c)
 *     MiWalkVaRange @ 0x140293FE4 (MiWalkVaRange.c)
 *     MmCopyToCachedPage @ 0x1402CDA60 (MmCopyToCachedPage.c)
 *     MiMakePageAvoidRead @ 0x1402CE290 (MiMakePageAvoidRead.c)
 *     MiWalkEntireImage @ 0x1402DB270 (MiWalkEntireImage.c)
 *     MmPurgeSection @ 0x1402DCB60 (MmPurgeSection.c)
 *     MiPfPutPagesInTransition @ 0x1402DE2D0 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x1402E0870 (MiResolveMappedFileFault.c)
 *     MiAllocateInPageSupport @ 0x1402E0F74 (MiAllocateInPageSupport.c)
 *     MiResolveProtoCombine @ 0x1402E3D88 (MiResolveProtoCombine.c)
 *     MmCopyMemory @ 0x1402EDDE0 (MmCopyMemory.c)
 *     MiTranslatePageForCopy @ 0x1402EE0D4 (MiTranslatePageForCopy.c)
 *     MiHandleCollidedFault @ 0x1402EF020 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402EF298 (MiWaitForCollidedFaultComplete.c)
 *     MiAnyProtosAreMapped @ 0x1402F1128 (MiAnyProtosAreMapped.c)
 *     MiDeleteMergedPte @ 0x1402F431C (MiDeleteMergedPte.c)
 *     MiDeletePerSessionProtos @ 0x14033EE54 (MiDeletePerSessionProtos.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403483F8 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiWaitForPageWriteCompletion @ 0x14034AE64 (MiWaitForPageWriteCompletion.c)
 *     MiUnlockDataCopyPages @ 0x14035026C (MiUnlockDataCopyPages.c)
 *     MiInitializeNewImageSectionProtos @ 0x140356F30 (MiInitializeNewImageSectionProtos.c)
 *     MiCombineWithStandbyExisting @ 0x14035A31C (MiCombineWithStandbyExisting.c)
 *     MiMakeImageReadOnly @ 0x14035CF3C (MiMakeImageReadOnly.c)
 *     MiPurgeImageSection @ 0x14036A5D8 (MiPurgeImageSection.c)
 *     MiStealPage @ 0x1403BC5BC (MiStealPage.c)
 *     MiInitializeDynamicPfns @ 0x14061B448 (MiInitializeDynamicPfns.c)
 *     MiIsSubsectionClean @ 0x140624FE4 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x140625C24 (MiPurgeSubsection.c)
 *     MiReplaceLockedPage @ 0x1406371E4 (MiReplaceLockedPage.c)
 *     MiReleasePageFileSectionInfo @ 0x14063BAC8 (MiReleasePageFileSectionInfo.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14063C814 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiEliminateStaleExtents @ 0x14063D0D8 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x14063D350 (MiEnableLargeSubsection.c)
 *     MiFillFileOnlyProtoAsBad @ 0x14063D4E0 (MiFillFileOnlyProtoAsBad.c)
 *     MiPurgeFileOnlyPfn @ 0x14063F418 (MiPurgeFileOnlyPfn.c)
 *     MiClearDriverHotPatchPtes @ 0x14064233C (MiClearDriverHotPatchPtes.c)
 *     MmMapHotPatchTablePage @ 0x1406435CC (MmMapHotPatchTablePage.c)
 *     MiInsertLargeVadMapping @ 0x1406466AC (MiInsertLargeVadMapping.c)
 *     MiIdealClusterPage @ 0x14066A9E0 (MiIdealClusterPage.c)
 *     MiInitializeProtoPfn @ 0x14066B7C0 (MiInitializeProtoPfn.c)
 *     MiResolvePageFileFault @ 0x14066BA0C (MiResolvePageFileFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiPfnReferenceCountIsZero @ 0x1402D9270 (MiPfnReferenceCountIsZero.c)
 *     MiRemoveLockedPageCharge @ 0x1402DBDB0 (MiRemoveLockedPageCharge.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
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
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v3 <= 0xFu
        && CurrentIrql >= 2u )
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
