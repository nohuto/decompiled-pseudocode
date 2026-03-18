/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x140214A20
 * Callers:
 *     RtlCaptureImageExceptionValues @ 0x140290984 (RtlCaptureImageExceptionValues.c)
 *     RtlCaptureRetpolineImportRvas @ 0x140324D40 (RtlCaptureRetpolineImportRvas.c)
 *     MmProtectDriverSection @ 0x14036E870 (MmProtectDriverSection.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x140375EA8 (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     KiIsPgiKernel @ 0x1403B213C (KiIsPgiKernel.c)
 *     RtlpGetRetpolineStubsFunctionTable @ 0x1405B2244 (RtlpGetRetpolineStubsFunctionTable.c)
 *     MiReplaceImportEntry @ 0x14062C6B0 (MiReplaceImportEntry.c)
 *     MiLockPatchIatForDV @ 0x1406404A0 (MiLockPatchIatForDV.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1406408E8 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiReplacePatchImportEntry @ 0x140642EE0 (MiReplacePatchImportEntry.c)
 *     MiCacheImageSymbols @ 0x140695DFC (MiCacheImageSymbols.c)
 *     MiMarkKernelImageCfgBits @ 0x1406970A4 (MiMarkKernelImageCfgBits.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1406A723C (MiCaptureRetpolineRelocationTables.c)
 *     RtlFindExportedRoutineByName @ 0x1406AD3F0 (RtlFindExportedRoutineByName.c)
 *     MiResolveImageReferences @ 0x1406AE044 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x1406AE4E0 (MiSnapThunk.c)
 *     LdrpAccessResourceData @ 0x14075564C (LdrpAccessResourceData.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x140755728 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpSearchResourceSection_U @ 0x140755D10 (LdrpSearchResourceSection_U.c)
 *     NtSetSystemInformation @ 0x14075EE30 (NtSetSystemInformation.c)
 *     EtwpFindDebugId @ 0x14077DECC (EtwpFindDebugId.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14079D5E8 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MmCreatePeb @ 0x1407A189C (MmCreatePeb.c)
 *     MiInitializeWowPeb @ 0x1407A549C (MiInitializeWowPeb.c)
 *     MiResolveImageImports @ 0x1407BCA40 (MiResolveImageImports.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x1407D43E4 (MiProcessKernelCfgImageLoadConfig.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1407D45C8 (LdrImageDirectoryEntryToLoadConfig.c)
 *     KsepPatchDriverImportsTable @ 0x14085E744 (KsepPatchDriverImportsTable.c)
 *     LdrEnumResources @ 0x1409B9520 (LdrEnumResources.c)
 *     LdrRelocateImageWithBias @ 0x1409C1FA4 (LdrRelocateImageWithBias.c)
 *     MiSnapUnresolvedImport @ 0x140A2B0C8 (MiSnapUnresolvedImport.c)
 *     MmReplaceImportEntriesForVerifier @ 0x140A2D64C (MmReplaceImportEntriesForVerifier.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x140A43FBC (MiMarkKernelCfgAddressTakenImports.c)
 *     AslpFileQueryExportName @ 0x140A59200 (AslpFileQueryExportName.c)
 *     RtlFindHotPatchInformation @ 0x140A764CC (RtlFindHotPatchInformation.c)
 *     ViThunkSnapSharedExportByName @ 0x140ABD194 (ViThunkSnapSharedExportByName.c)
 *     ViXdvDriverLoadImage @ 0x140ACAA4C (ViXdvDriverLoadImage.c)
 *     VfThunkApplyDriverAddedThunks @ 0x140ADB190 (VfThunkApplyDriverAddedThunks.c)
 *     VfThunkApplyThunksCurrentSession @ 0x140ADB3DC (VfThunkApplyThunksCurrentSession.c)
 *     ViThunkApplyPristineCurrentSession @ 0x140ADB5BC (ViThunkApplyPristineCurrentSession.c)
 *     ViThunkFindAllThunkedImports @ 0x140ADB970 (ViThunkFindAllThunkedImports.c)
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 *     MiApplyDynamicRelocations @ 0x140B44144 (MiApplyDynamicRelocations.c)
 *     MiDoesDriverProvideImportsForDriver @ 0x140B473B0 (MiDoesDriverProvideImportsForDriver.c)
 *     ViThunkFindExportAddress @ 0x140B57A2C (ViThunkFindExportAddress.c)
 *     MiBuildImportsForBootDrivers @ 0x140B5CF64 (MiBuildImportsForBootDrivers.c)
 *     MiUpdateThunks @ 0x140B9A830 (MiUpdateThunks.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x140214A58 (RtlpImageDirectoryEntryToDataEx.c)
 */

__int64 __fastcall RtlImageDirectoryEntryToData(int a1, int a2, int a3, int a4)
{
  int v4; // eax
  __int64 v5; // rcx
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v7[0] = 0LL;
  v4 = RtlpImageDirectoryEntryToDataEx(a1, a2, a3, a4, (__int64)v7);
  v5 = v7[0];
  if ( v4 < 0 )
    return 0LL;
  return v5;
}
