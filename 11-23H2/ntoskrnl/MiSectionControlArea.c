/*
 * XREFs of MiSectionControlArea @ 0x14029F880
 * Callers:
 *     MiCountSystemImageCommitment @ 0x14020ABB4 (MiCountSystemImageCommitment.c)
 *     MiInsertInSystemSpace @ 0x140213D10 (MiInsertInSystemSpace.c)
 *     MiSetSystemCodeProtection @ 0x140284310 (MiSetSystemCodeProtection.c)
 *     MmMapViewInSystemCache @ 0x14029F630 (MmMapViewInSystemCache.c)
 *     MmUnmapViewInSystemCache @ 0x1402D9FB0 (MmUnmapViewInSystemCache.c)
 *     MiCreateSystemSection @ 0x14035F7A0 (MiCreateSystemSection.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1406408E8 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiReferenceAweHandle @ 0x14064BD18 (MiReferenceAweHandle.c)
 *     MiDriverLoadSucceeded @ 0x140695BC4 (MiDriverLoadSucceeded.c)
 *     MiMapSystemImage @ 0x140695E88 (MiMapSystemImage.c)
 *     MiChargeSystemImageCommitment @ 0x140695FD0 (MiChargeSystemImageCommitment.c)
 *     MiGetSystemAddressForImage @ 0x140696090 (MiGetSystemAddressForImage.c)
 *     MiFindDataTableEntryBySection @ 0x1406962B4 (MiFindDataTableEntryBySection.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     PsReferenceProcessFilePointer @ 0x14069A0A0 (PsReferenceProcessFilePointer.c)
 *     MiMapViewInSystemSpace @ 0x1406AD6A4 (MiMapViewInSystemSpace.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1406B19D0 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiComputeProcessUserVa @ 0x1406B3118 (MiComputeProcessUserVa.c)
 *     PspInitializeFullProcessImageName @ 0x1406B3468 (PspInitializeFullProcessImageName.c)
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x1406B908C (PspGetProcessProtectionRequirementsFromImage.c)
 *     MmCreateSpecialImageSection @ 0x1406B9664 (MmCreateSpecialImageSection.c)
 *     MiFreeInitializationCode @ 0x140703AFC (MiFreeInitializationCode.c)
 *     MmLoadSystemImageEx @ 0x140703DC0 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x1407047B8 (MiObtainSectionForDriver.c)
 *     MiConstructLoaderEntry @ 0x14070498C (MiConstructLoaderEntry.c)
 *     MmExtendSection @ 0x140706504 (MmExtendSection.c)
 *     MiSectionClose @ 0x1407214F0 (MiSectionClose.c)
 *     MiSectionOpen @ 0x140721520 (MiSectionOpen.c)
 *     MiMapParametersInitialize @ 0x14072154C (MiMapParametersInitialize.c)
 *     MiMapViewOfSection @ 0x140721660 (MiMapViewOfSection.c)
 *     MiSectionDelete @ 0x140721BC0 (MiSectionDelete.c)
 *     MiCreateSectionCommon @ 0x140722710 (MiCreateSectionCommon.c)
 *     MmGetFileObjectForSection @ 0x14076C200 (MmGetFileObjectForSection.c)
 *     DbgkCreateThread @ 0x14076FC1C (DbgkCreateThread.c)
 *     MiMapExParametersInitialize @ 0x1407A37A0 (MiMapExParametersInitialize.c)
 *     MiCfgMarkValidEntries @ 0x1407A474C (MiCfgMarkValidEntries.c)
 *     MmCheckImageMapping @ 0x1407A5920 (MmCheckImageMapping.c)
 *     MmGetSectionInformation @ 0x1407BA090 (MmGetSectionInformation.c)
 *     MiCompactServiceTable @ 0x1407BC8A4 (MiCompactServiceTable.c)
 *     MiResolveImageImports @ 0x1407BCA40 (MiResolveImageImports.c)
 *     PsQuerySectionSignatureInformation @ 0x1407C63C0 (PsQuerySectionSignatureInformation.c)
 *     MiWriteProtectSystemImages @ 0x14081CC38 (MiWriteProtectSystemImages.c)
 *     MiFreeRetpolineImportInfo @ 0x14085EA94 (MiFreeRetpolineImportInfo.c)
 *     MiReturnSystemImageCommitment @ 0x140861800 (MiReturnSystemImageCommitment.c)
 *     MmSectionToSectionObjectPointers @ 0x1408AC09E (MmSectionToSectionObjectPointers.c)
 *     MmGetFileNameForSection @ 0x140A2E6F4 (MmGetFileNameForSection.c)
 *     MiLogSectionObjectEvent @ 0x140A2F77C (MiLogSectionObjectEvent.c)
 *     MiIsImageFullyRetpolined @ 0x140A34288 (MiIsImageFullyRetpolined.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140A35068 (MiApplyHotPatchToLoadedDriver.c)
 *     MiApplyImageHotPatchRequest @ 0x140A355E0 (MiApplyImageHotPatchRequest.c)
 *     MiApplySingleSessionPatch @ 0x140A360A0 (MiApplySingleSessionPatch.c)
 *     MiCheckPatchesInSupportedSections @ 0x140A363B0 (MiCheckPatchesInSupportedSections.c)
 *     MiLoadHotPatch @ 0x140A37F60 (MiLoadHotPatch.c)
 *     MiOpenHotPatchFile @ 0x140A3A350 (MiOpenHotPatchFile.c)
 *     MiMapImageForEnclaveUse @ 0x140A3E748 (MiMapImageForEnclaveUse.c)
 *     MiAllocateUserPhysicalPages @ 0x140A40358 (MiAllocateUserPhysicalPages.c)
 *     MiCreateUserPhysicalView @ 0x140A41778 (MiCreateUserPhysicalView.c)
 *     NtFreeUserPhysicalPages @ 0x140A42320 (NtFreeUserPhysicalPages.c)
 *     MmGetSectionStrongImageReference @ 0x140A437EC (MmGetSectionStrongImageReference.c)
 *     MiMapSystemImageWithLargePage @ 0x140A49B64 (MiMapSystemImageWithLargePage.c)
 *     VfDriverLoadImage @ 0x140ABCE04 (VfDriverLoadImage.c)
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
