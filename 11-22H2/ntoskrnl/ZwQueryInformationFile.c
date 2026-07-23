/*
 * XREFs of ZwQueryInformationFile @ 0x14041A8C0
 * Callers:
 *     RtlFileMapMapView @ 0x1403B0C90 (RtlFileMapMapView.c)
 *     CmpAdjustFileCFSafety @ 0x140419130 (CmpAdjustFileCFSafety.c)
 *     DbgkCaptureLiveKernelDump @ 0x14053C1B8 (DbgkCaptureLiveKernelDump.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x140551184 (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x14055E1E0 (SecureDump_LoadCertAndProvisionKey.c)
 *     DifZwQueryInformationFileWrapper @ 0x1405F45B0 (DifZwQueryInformationFileWrapper.c)
 *     BiLogFileOwnerProcess @ 0x140671500 (BiLogFileOwnerProcess.c)
 *     CmpCmdHiveClose @ 0x14068B0E4 (CmpCmdHiveClose.c)
 *     CmpInitHiveFromFile @ 0x14068B418 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x14068BA80 (CmpOpenHiveFile.c)
 *     CmpGetFileSize @ 0x140751640 (CmpGetFileSize.c)
 *     AslFileMappingCreate @ 0x14075844C (AslFileMappingCreate.c)
 *     EtwpUpdateFileHeader @ 0x1407F7664 (EtwpUpdateFileHeader.c)
 *     PopCreateHiberFile @ 0x140800B90 (PopCreateHiberFile.c)
 *     KsepShimDatabaseTime @ 0x14080A84C (KsepShimDatabaseTime.c)
 *     EtwpRealtimeRestoreState @ 0x140853118 (EtwpRealtimeRestoreState.c)
 *     IopLiveDumpValidateDumpFileHandle @ 0x14094F2CC (IopLiveDumpValidateDumpFileHandle.c)
 *     IopFileUtilClearAttributes @ 0x14096EEB0 (IopFileUtilClearAttributes.c)
 *     PfpQueryFileExtentsRequest @ 0x14097E5A0 (PfpQueryFileExtentsRequest.c)
 *     PopValidateHiberFileSize @ 0x140989320 (PopValidateHiberFileSize.c)
 *     PopZeroHiberFile @ 0x140989540 (PopZeroHiberFile.c)
 *     SmKmStoreFileCreate @ 0x1409D9774 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileWriteHeader @ 0x1409DA618 (SmKmStoreFileWriteHeader.c)
 *     CMFGetFileSizeEx @ 0x140A02540 (CMFGetFileSizeEx.c)
 *     EmInitSystem @ 0x140B54E68 (EmInitSystem.c)
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
