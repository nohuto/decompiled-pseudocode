/*
 * XREFs of MiSectionControlArea @ 0x14029FB10
 * Callers:
 *     MiCountSystemImageCommitment @ 0x14020ABB4 (MiCountSystemImageCommitment.c)
 *     MiInsertInSystemSpace @ 0x140213D10 (MiInsertInSystemSpace.c)
 *     MiSetSystemCodeProtection @ 0x1402845A0 (MiSetSystemCodeProtection.c)
 *     MmMapViewInSystemCache @ 0x14029F8C0 (MmMapViewInSystemCache.c)
 *     MmUnmapViewInSystemCache @ 0x1402DA240 (MmUnmapViewInSystemCache.c)
 *     MiCreateSystemSection @ 0x14035F940 (MiCreateSystemSection.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x140640E38 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiReferenceAweHandle @ 0x14064C268 (MiReferenceAweHandle.c)
 *     MiDriverLoadSucceeded @ 0x140695BC4 (MiDriverLoadSucceeded.c)
 *     MiMapSystemImage @ 0x140695E88 (MiMapSystemImage.c)
 *     MiChargeSystemImageCommitment @ 0x140695FD0 (MiChargeSystemImageCommitment.c)
 *     MiGetSystemAddressForImage @ 0x140696090 (MiGetSystemAddressForImage.c)
 *     MiFindDataTableEntryBySection @ 0x1406962B4 (MiFindDataTableEntryBySection.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     PsReferenceProcessFilePointer @ 0x14069A0A0 (PsReferenceProcessFilePointer.c)
 *     MiMapViewInSystemSpace @ 0x1406AD6D4 (MiMapViewInSystemSpace.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1406B1A00 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiComputeProcessUserVa @ 0x1406B3148 (MiComputeProcessUserVa.c)
 *     PspInitializeFullProcessImageName @ 0x1406B3498 (PspInitializeFullProcessImageName.c)
 *     PspAllocateProcess @ 0x1406B45D8 (PspAllocateProcess.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x1406B90BC (PspGetProcessProtectionRequirementsFromImage.c)
 *     MmCreateSpecialImageSection @ 0x1406B9694 (MmCreateSpecialImageSection.c)
 *     MiFreeInitializationCode @ 0x140703D0C (MiFreeInitializationCode.c)
 *     MmLoadSystemImageEx @ 0x140703FD0 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x1407049C8 (MiObtainSectionForDriver.c)
 *     MiConstructLoaderEntry @ 0x140704B9C (MiConstructLoaderEntry.c)
 *     MmExtendSection @ 0x140706714 (MmExtendSection.c)
 *     MiSectionClose @ 0x1407216F0 (MiSectionClose.c)
 *     MiSectionOpen @ 0x140721720 (MiSectionOpen.c)
 *     MiMapParametersInitialize @ 0x14072174C (MiMapParametersInitialize.c)
 *     MiMapViewOfSection @ 0x140721860 (MiMapViewOfSection.c)
 *     MiSectionDelete @ 0x140721DC0 (MiSectionDelete.c)
 *     MiCreateSectionCommon @ 0x140722910 (MiCreateSectionCommon.c)
 *     MmGetFileObjectForSection @ 0x14076C3F0 (MmGetFileObjectForSection.c)
 *     DbgkCreateThread @ 0x14076FE0C (DbgkCreateThread.c)
 *     MiMapExParametersInitialize @ 0x1407A3990 (MiMapExParametersInitialize.c)
 *     MiCfgMarkValidEntries @ 0x1407A493C (MiCfgMarkValidEntries.c)
 *     MmCheckImageMapping @ 0x1407A5B10 (MmCheckImageMapping.c)
 *     MmGetSectionInformation @ 0x1407BA370 (MmGetSectionInformation.c)
 *     MiCompactServiceTable @ 0x1407BCB74 (MiCompactServiceTable.c)
 *     MiResolveImageImports @ 0x1407BCD10 (MiResolveImageImports.c)
 *     PsQuerySectionSignatureInformation @ 0x1407C6690 (PsQuerySectionSignatureInformation.c)
 *     MiWriteProtectSystemImages @ 0x14081CF08 (MiWriteProtectSystemImages.c)
 *     MiFreeRetpolineImportInfo @ 0x14085ECD4 (MiFreeRetpolineImportInfo.c)
 *     MiReturnSystemImageCommitment @ 0x140861A40 (MiReturnSystemImageCommitment.c)
 *     MmSectionToSectionObjectPointers @ 0x1408AC2EE (MmSectionToSectionObjectPointers.c)
 *     MmGetFileNameForSection @ 0x140A2E9A4 (MmGetFileNameForSection.c)
 *     MiLogSectionObjectEvent @ 0x140A2FA2C (MiLogSectionObjectEvent.c)
 *     MiIsImageFullyRetpolined @ 0x140A34538 (MiIsImageFullyRetpolined.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140A35318 (MiApplyHotPatchToLoadedDriver.c)
 *     MiApplyImageHotPatchRequest @ 0x140A35890 (MiApplyImageHotPatchRequest.c)
 *     MiApplySingleSessionPatch @ 0x140A36350 (MiApplySingleSessionPatch.c)
 *     MiCheckPatchesInSupportedSections @ 0x140A36660 (MiCheckPatchesInSupportedSections.c)
 *     MiLoadHotPatch @ 0x140A38210 (MiLoadHotPatch.c)
 *     MiOpenHotPatchFile @ 0x140A3A600 (MiOpenHotPatchFile.c)
 *     MiMapImageForEnclaveUse @ 0x140A3E9F8 (MiMapImageForEnclaveUse.c)
 *     MiAllocateUserPhysicalPages @ 0x140A40608 (MiAllocateUserPhysicalPages.c)
 *     MiCreateUserPhysicalView @ 0x140A41A28 (MiCreateUserPhysicalView.c)
 *     NtFreeUserPhysicalPages @ 0x140A425D0 (NtFreeUserPhysicalPages.c)
 *     MmGetSectionStrongImageReference @ 0x140A43A9C (MmGetSectionStrongImageReference.c)
 *     MiMapSystemImageWithLargePage @ 0x140A49E14 (MiMapSystemImageWithLargePage.c)
 *     VfDriverLoadImage @ 0x140ABCDF4 (VfDriverLoadImage.c)
 *     MiInitializeCfg @ 0x140B455F8 (MiInitializeCfg.c)
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
