/*
 * XREFs of ZwQueryInformationFile @ 0x14041B310
 * Callers:
 *     RtlFileMapMapView @ 0x1403B1500 (RtlFileMapMapView.c)
 *     CmpAdjustFileCFSafety @ 0x140419B70 (CmpAdjustFileCFSafety.c)
 *     DbgkCaptureLiveKernelDump @ 0x14053C658 (DbgkCaptureLiveKernelDump.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x1405517A4 (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x14055E800 (SecureDump_LoadCertAndProvisionKey.c)
 *     DifZwQueryInformationFileWrapper @ 0x1405F4A90 (DifZwQueryInformationFileWrapper.c)
 *     BiLogFileOwnerProcess @ 0x1406719E0 (BiLogFileOwnerProcess.c)
 *     CmpCmdHiveClose @ 0x14068B0E4 (CmpCmdHiveClose.c)
 *     CmpInitHiveFromFile @ 0x14068B418 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x14068BA80 (CmpOpenHiveFile.c)
 *     CmpGetFileSize @ 0x140751320 (CmpGetFileSize.c)
 *     AslFileMappingCreate @ 0x14075812C (AslFileMappingCreate.c)
 *     EtwpUpdateFileHeader @ 0x1407F72C4 (EtwpUpdateFileHeader.c)
 *     PopCreateHiberFile @ 0x1408007B0 (PopCreateHiberFile.c)
 *     KsepShimDatabaseTime @ 0x14080859C (KsepShimDatabaseTime.c)
 *     EtwpRealtimeRestoreState @ 0x140852508 (EtwpRealtimeRestoreState.c)
 *     IopLiveDumpValidateDumpFileHandle @ 0x14094F41C (IopLiveDumpValidateDumpFileHandle.c)
 *     IopFileUtilClearAttributes @ 0x14096F000 (IopFileUtilClearAttributes.c)
 *     PfpQueryFileExtentsRequest @ 0x14097E6F0 (PfpQueryFileExtentsRequest.c)
 *     PopValidateHiberFileSize @ 0x140989470 (PopValidateHiberFileSize.c)
 *     PopZeroHiberFile @ 0x140989690 (PopZeroHiberFile.c)
 *     SmKmStoreFileCreate @ 0x1409D98C4 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileWriteHeader @ 0x1409DA768 (SmKmStoreFileWriteHeader.c)
 *     CMFGetFileSizeEx @ 0x140A02720 (CMFGetFileSizeEx.c)
 *     EmInitSystem @ 0x140B55508 (EmInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
