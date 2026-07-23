/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x140214A20
 * Callers:
 *     RtlCaptureImageExceptionValues @ 0x140290C14 (RtlCaptureImageExceptionValues.c)
 *     RtlCaptureRetpolineImportRvas @ 0x140324FD0 (RtlCaptureRetpolineImportRvas.c)
 *     MmProtectDriverSection @ 0x14036EA10 (MmProtectDriverSection.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x140376048 (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     KiIsPgiKernel @ 0x1403B231C (KiIsPgiKernel.c)
 *     RtlpGetRetpolineStubsFunctionTable @ 0x1405B27B4 (RtlpGetRetpolineStubsFunctionTable.c)
 *     MiReplaceImportEntry @ 0x14062CC00 (MiReplaceImportEntry.c)
 *     MiLockPatchIatForDV @ 0x1406409F0 (MiLockPatchIatForDV.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x140640E38 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiReplacePatchImportEntry @ 0x140643430 (MiReplacePatchImportEntry.c)
 *     MiCacheImageSymbols @ 0x140695DFC (MiCacheImageSymbols.c)
 *     MiMarkKernelImageCfgBits @ 0x1406970A4 (MiMarkKernelImageCfgBits.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1406A723C (MiCaptureRetpolineRelocationTables.c)
 *     RtlFindExportedRoutineByName @ 0x1406AD420 (RtlFindExportedRoutineByName.c)
 *     MiResolveImageReferences @ 0x1406AE074 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x1406AE510 (MiSnapThunk.c)
 *     LdrpAccessResourceData @ 0x14075583C (LdrpAccessResourceData.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x140755918 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpSearchResourceSection_U @ 0x140755F00 (LdrpSearchResourceSection_U.c)
 *     NtSetSystemInformation @ 0x14075F020 (NtSetSystemInformation.c)
 *     EtwpFindDebugId @ 0x14077E0BC (EtwpFindDebugId.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14079D7D8 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MmCreatePeb @ 0x1407A1A8C (MmCreatePeb.c)
 *     MiInitializeWowPeb @ 0x1407A568C (MiInitializeWowPeb.c)
 *     MiResolveImageImports @ 0x1407BCD10 (MiResolveImageImports.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x1407D46B4 (MiProcessKernelCfgImageLoadConfig.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1407D4898 (LdrImageDirectoryEntryToLoadConfig.c)
 *     KsepPatchDriverImportsTable @ 0x14085E984 (KsepPatchDriverImportsTable.c)
 *     LdrEnumResources @ 0x1409B9720 (LdrEnumResources.c)
 *     LdrRelocateImageWithBias @ 0x1409C21A4 (LdrRelocateImageWithBias.c)
 *     MiSnapUnresolvedImport @ 0x140A2B378 (MiSnapUnresolvedImport.c)
 *     MmReplaceImportEntriesForVerifier @ 0x140A2D8FC (MmReplaceImportEntriesForVerifier.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x140A4426C (MiMarkKernelCfgAddressTakenImports.c)
 *     AslpFileQueryExportName @ 0x140A594B0 (AslpFileQueryExportName.c)
 *     RtlFindHotPatchInformation @ 0x140A7677C (RtlFindHotPatchInformation.c)
 *     ViThunkSnapSharedExportByName @ 0x140ABD184 (ViThunkSnapSharedExportByName.c)
 *     ViXdvDriverLoadImage @ 0x140ACAA3C (ViXdvDriverLoadImage.c)
 *     VfThunkApplyDriverAddedThunks @ 0x140ADB180 (VfThunkApplyDriverAddedThunks.c)
 *     VfThunkApplyThunksCurrentSession @ 0x140ADB3CC (VfThunkApplyThunksCurrentSession.c)
 *     ViThunkApplyPristineCurrentSession @ 0x140ADB5AC (ViThunkApplyPristineCurrentSession.c)
 *     ViThunkFindAllThunkedImports @ 0x140ADB960 (ViThunkFindAllThunkedImports.c)
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 *     MiApplyDynamicRelocations @ 0x140B44144 (MiApplyDynamicRelocations.c)
 *     MiDoesDriverProvideImportsForDriver @ 0x140B473B0 (MiDoesDriverProvideImportsForDriver.c)
 *     ViThunkFindExportAddress @ 0x140B57A2C (ViThunkFindExportAddress.c)
 *     MiBuildImportsForBootDrivers @ 0x140B5CF64 (MiBuildImportsForBootDrivers.c)
 *     MiUpdateThunks @ 0x140B9A830 (MiUpdateThunks.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x140214A58 (RtlpImageDirectoryEntryToDataEx.c)
 */

PVOID __cdecl RtlImageDirectoryEntryToData(
        PVOID BaseOfImage,
        BOOLEAN MappedAsImage,
        USHORT DirectoryEntry,
        PULONG Size)
{
  int v4; // eax
  void *v5; // rcx
  __int64 v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v7[0] = 0LL;
  v4 = RtlpImageDirectoryEntryToDataEx(BaseOfImage, (__int64)v7);
  v5 = (void *)v7[0];
  if ( v4 < 0 )
    return 0LL;
  return v5;
}
