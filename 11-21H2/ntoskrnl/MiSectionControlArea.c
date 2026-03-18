/*
 * XREFs of MiSectionControlArea @ 0x140287970
 * Callers:
 *     MiInsertInSystemSpace @ 0x14026D460 (MiInsertInSystemSpace.c)
 *     MmMapViewInSystemCache @ 0x140285D90 (MmMapViewInSystemCache.c)
 *     MiCreateSystemSection @ 0x1402D9E3C (MiCreateSystemSection.c)
 *     MiCountSystemImageCommitment @ 0x1402DBA28 (MiCountSystemImageCommitment.c)
 *     MmUnmapViewInSystemCache @ 0x140335870 (MmUnmapViewInSystemCache.c)
 *     MiSetSystemCodeProtection @ 0x14033EF50 (MiSetSystemCodeProtection.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1405A216C (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiReferenceAweHandle @ 0x1405AC580 (MiReferenceAweHandle.c)
 *     MmGetFileObjectForSection @ 0x14066BA80 (MmGetFileObjectForSection.c)
 *     MmGetSectionInformation @ 0x14066C980 (MmGetSectionInformation.c)
 *     MmCreateSpecialImageSection @ 0x14066D4BC (MmCreateSpecialImageSection.c)
 *     PsReferenceProcessFilePointer @ 0x140673AD0 (PsReferenceProcessFilePointer.c)
 *     MmExtendSection @ 0x1406A377C (MmExtendSection.c)
 *     PsQuerySectionSignatureInformation @ 0x1406BCB10 (PsQuerySectionSignatureInformation.c)
 *     MiCompactServiceTable @ 0x1406CCD8C (MiCompactServiceTable.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x1406D833C (PspGetProcessProtectionRequirementsFromImage.c)
 *     MmCheckImageMapping @ 0x1406D9288 (MmCheckImageMapping.c)
 *     MiMapViewInSystemSpace @ 0x1406F3FDC (MiMapViewInSystemSpace.c)
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 *     MmChangeImageProtection @ 0x1406F5800 (MmChangeImageProtection.c)
 *     MiSectionDelete @ 0x1406FC070 (MiSectionDelete.c)
 *     MiSectionClose @ 0x1406FC290 (MiSectionClose.c)
 *     MiSectionOpen @ 0x1406FC2C0 (MiSectionOpen.c)
 *     MiMapParametersInitialize @ 0x1406FC8B0 (MiMapParametersInitialize.c)
 *     MiMapViewOfSection @ 0x1406FCA10 (MiMapViewOfSection.c)
 *     MiCreateSectionCommon @ 0x1406FD140 (MiCreateSectionCommon.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140700A40 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiComputeProcessUserVa @ 0x14070A9C0 (MiComputeProcessUserVa.c)
 *     PspInitializeFullProcessImageName @ 0x14070F3A8 (PspInitializeFullProcessImageName.c)
 *     MiCfgMarkValidEntries @ 0x140753C58 (MiCfgMarkValidEntries.c)
 *     MiMapExParametersInitialize @ 0x140756F2C (MiMapExParametersInitialize.c)
 *     MiFreeInitializationCode @ 0x14075F23C (MiFreeInitializationCode.c)
 *     MiConstructLoaderEntry @ 0x14075F4A4 (MiConstructLoaderEntry.c)
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x1407603D4 (MiObtainSectionForDriver.c)
 *     MiDriverLoadSucceeded @ 0x140761234 (MiDriverLoadSucceeded.c)
 *     MiResolveImageImports @ 0x140761604 (MiResolveImageImports.c)
 *     MiMapSystemImage @ 0x140761714 (MiMapSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x140761A2C (MiGetSystemAddressForImage.c)
 *     MiFindDataTableEntryBySection @ 0x140761C98 (MiFindDataTableEntryBySection.c)
 *     MiChargeSystemImageCommitment @ 0x140761D88 (MiChargeSystemImageCommitment.c)
 *     MiReturnSystemImageCommitment @ 0x14081C984 (MiReturnSystemImageCommitment.c)
 *     MiWriteProtectSystemImages @ 0x14082B668 (MiWriteProtectSystemImages.c)
 *     MiFreeRetpolineImportInfo @ 0x1408601A8 (MiFreeRetpolineImportInfo.c)
 *     MmGetImageSectionBasedAddress @ 0x140881A7E (MmGetImageSectionBasedAddress.c)
 *     MmSectionToSectionObjectPointers @ 0x140881BB6 (MmSectionToSectionObjectPointers.c)
 *     MmGetFileNameForSection @ 0x14096B158 (MmGetFileNameForSection.c)
 *     MiLogSectionObjectEvent @ 0x14096C0AC (MiLogSectionObjectEvent.c)
 *     MiIsImageFullyRetpolined @ 0x140970A74 (MiIsImageFullyRetpolined.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140971848 (MiApplyHotPatchToLoadedDriver.c)
 *     MiApplySingleSessionPatch @ 0x140972700 (MiApplySingleSessionPatch.c)
 *     MiCheckPatchesInSupportedSections @ 0x140972A10 (MiCheckPatchesInSupportedSections.c)
 *     MiLoadHotPatch @ 0x140974020 (MiLoadHotPatch.c)
 *     MiOpenHotPatchFile @ 0x14097638C (MiOpenHotPatchFile.c)
 *     MiMapImageForEnclaveUse @ 0x14097A9C4 (MiMapImageForEnclaveUse.c)
 *     MiAllocateUserPhysicalPages @ 0x14097BD88 (MiAllocateUserPhysicalPages.c)
 *     MiCreateUserPhysicalView @ 0x14097CD04 (MiCreateUserPhysicalView.c)
 *     NtFreeUserPhysicalPages @ 0x14097D9E0 (NtFreeUserPhysicalPages.c)
 *     MmGetSectionStrongImageReference @ 0x14097F148 (MmGetSectionStrongImageReference.c)
 *     MiMapSystemImageWithLargePage @ 0x14098325C (MiMapSystemImageWithLargePage.c)
 *     VfDriverLoadImage @ 0x140A7C1B8 (VfDriverLoadImage.c)
 *     MiInitializeCfg @ 0x140B08F6C (MiInitializeCfg.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSectionControlArea(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  result = v1 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (v1 & 1) != 0 )
    return *(_QWORD *)(*(_QWORD *)(result + 40) + 16LL);
  if ( (v1 & 2) != 0 )
    return **(_QWORD **)(result + 40);
  return result;
}
