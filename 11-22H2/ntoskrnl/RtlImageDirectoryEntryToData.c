/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x140214A40
 * Callers:
 *     RtlCaptureImageExceptionValues @ 0x140290864 (RtlCaptureImageExceptionValues.c)
 *     RtlCaptureRetpolineImportRvas @ 0x140324B60 (RtlCaptureRetpolineImportRvas.c)
 *     MmProtectDriverSection @ 0x14036E220 (MmProtectDriverSection.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x1403764F8 (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     KiIsPgiKernel @ 0x1403B1AAC (KiIsPgiKernel.c)
 *     RtlpGetRetpolineStubsFunctionTable @ 0x1405B22D4 (RtlpGetRetpolineStubsFunctionTable.c)
 *     MiReplaceImportEntry @ 0x14062C720 (MiReplaceImportEntry.c)
 *     MiLockPatchIatForDV @ 0x140640510 (MiLockPatchIatForDV.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x140640958 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiReplacePatchImportEntry @ 0x140642F50 (MiReplacePatchImportEntry.c)
 *     MiCacheImageSymbols @ 0x140695DFC (MiCacheImageSymbols.c)
 *     MiMarkKernelImageCfgBits @ 0x1406970A4 (MiMarkKernelImageCfgBits.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1406A723C (MiCaptureRetpolineRelocationTables.c)
 *     RtlFindExportedRoutineByName @ 0x1406AD3F0 (RtlFindExportedRoutineByName.c)
 *     MiResolveImageReferences @ 0x1406AE044 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x1406AE4E0 (MiSnapThunk.c)
 *     LdrpAccessResourceData @ 0x140755B5C (LdrpAccessResourceData.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x140755C38 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpSearchResourceSection_U @ 0x140756220 (LdrpSearchResourceSection_U.c)
 *     NtSetSystemInformation @ 0x14075F340 (NtSetSystemInformation.c)
 *     EtwpFindDebugId @ 0x14077E3DC (EtwpFindDebugId.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14079DAF8 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MmCreatePeb @ 0x1407A1DAC (MmCreatePeb.c)
 *     MiInitializeWowPeb @ 0x1407A59AC (MiInitializeWowPeb.c)
 *     MiResolveImageImports @ 0x1407BCFD0 (MiResolveImageImports.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x1407D4964 (MiProcessKernelCfgImageLoadConfig.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1407D4B48 (LdrImageDirectoryEntryToLoadConfig.c)
 *     KsepPatchDriverImportsTable @ 0x14085E8A8 (KsepPatchDriverImportsTable.c)
 *     LdrEnumResources @ 0x1409B95D0 (LdrEnumResources.c)
 *     LdrRelocateImageWithBias @ 0x1409C2054 (LdrRelocateImageWithBias.c)
 *     MiSnapUnresolvedImport @ 0x140A2B13C (MiSnapUnresolvedImport.c)
 *     MmReplaceImportEntriesForVerifier @ 0x140A2D6BC (MmReplaceImportEntriesForVerifier.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x140A4402C (MiMarkKernelCfgAddressTakenImports.c)
 *     AslpFileQueryExportName @ 0x140A59270 (AslpFileQueryExportName.c)
 *     RtlFindHotPatchInformation @ 0x140A7653C (RtlFindHotPatchInformation.c)
 *     ViThunkSnapSharedExportByName @ 0x140ABE194 (ViThunkSnapSharedExportByName.c)
 *     ViXdvDriverLoadImage @ 0x140ACBA1C (ViXdvDriverLoadImage.c)
 *     VfThunkApplyDriverAddedThunks @ 0x140ADC160 (VfThunkApplyDriverAddedThunks.c)
 *     VfThunkApplyThunksCurrentSession @ 0x140ADC3AC (VfThunkApplyThunksCurrentSession.c)
 *     ViThunkApplyPristineCurrentSession @ 0x140ADC58C (ViThunkApplyPristineCurrentSession.c)
 *     ViThunkFindAllThunkedImports @ 0x140ADC940 (ViThunkFindAllThunkedImports.c)
 *     sub_140B1A730 @ 0x140B1A730 (sub_140B1A730.c)
 *     MiApplyDynamicRelocations @ 0x140B47844 (MiApplyDynamicRelocations.c)
 *     MiDoesDriverProvideImportsForDriver @ 0x140B4AAB0 (MiDoesDriverProvideImportsForDriver.c)
 *     ViThunkFindExportAddress @ 0x140B5A9DC (ViThunkFindExportAddress.c)
 *     MiBuildImportsForBootDrivers @ 0x140B5FFA4 (MiBuildImportsForBootDrivers.c)
 *     MiUpdateThunks @ 0x140B9B830 (MiUpdateThunks.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x140214A78 (RtlpImageDirectoryEntryToDataEx.c)
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
