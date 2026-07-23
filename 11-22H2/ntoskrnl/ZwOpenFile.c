/*
 * XREFs of ZwOpenFile @ 0x14041AD00
 * Callers:
 *     EtwpGetDriverDataDosPath @ 0x1403D71EC (EtwpGetDriverDataDosPath.c)
 *     DbgkPostModuleMessage @ 0x14053BACC (DbgkPostModuleMessage.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x14055E1E0 (SecureDump_LoadCertAndProvisionKey.c)
 *     DifZwOpenFileWrapper @ 0x1405F1940 (DifZwOpenFileWrapper.c)
 *     BiLogFileOwnerProcess @ 0x140671500 (BiLogFileOwnerProcess.c)
 *     CmpLogHiveFileInaccessible @ 0x14068F4C0 (CmpLogHiveFileInaccessible.c)
 *     PiInitializeDDB @ 0x14069378C (PiInitializeDDB.c)
 *     KsepSdbMapToMemory @ 0x140694E7C (KsepSdbMapToMemory.c)
 *     IoGetDeviceObjectPointer @ 0x14075B770 (IoGetDeviceObjectPointer.c)
 *     NtGetNlsSectionPtr @ 0x1407A23B0 (NtGetNlsSectionPtr.c)
 *     ExpGetGlobalLocaleSection @ 0x1407A2D88 (ExpGetGlobalLocaleSection.c)
 *     SiOpenDevice @ 0x1407C0764 (SiOpenDevice.c)
 *     MiCreateSectionForDriver @ 0x1407D46C8 (MiCreateSectionForDriver.c)
 *     RtlLockBootStatusData @ 0x1407EF310 (RtlLockBootStatusData.c)
 *     PspLocateSystemDll @ 0x140801BE0 (PspLocateSystemDll.c)
 *     BiCreatePartitionDevice @ 0x140808C60 (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140808F6C (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetDriveLayoutInformation @ 0x14080909C (BiGetDriveLayoutInformation.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140809350 (BiIsVolumePartitionInformationRetained.c)
 *     BiGetNtPartitionPath @ 0x140809890 (BiGetNtPartitionPath.c)
 *     KsepShimDatabaseTime @ 0x14080A84C (KsepShimDatabaseTime.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408156A0 (PiDrvDbQuerySystemPathWin32.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14085BB8C (EtwpUpdateFileInfoDriverRegistration.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1408847A4 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     HalpAcquirePccInterface @ 0x140935904 (HalpAcquirePccInterface.c)
 *     DbgkSendSystemDllMessages @ 0x140936E84 (DbgkSendSystemDllMessages.c)
 *     DbgkpSectionToFileHandle @ 0x140939478 (DbgkpSectionToFileHandle.c)
 *     IopIsNotNativeDriverImage @ 0x1409450F4 (IopIsNotNativeDriverImage.c)
 *     IopValidateJunctionTarget @ 0x140946694 (IopValidateJunctionTarget.c)
 *     IoAttachDevice @ 0x140946CB0 (IoAttachDevice.c)
 *     PiGetDriverImageDirectory @ 0x140955FA8 (PiGetDriverImageDirectory.c)
 *     PiOpenDirectoryWithRoot @ 0x140956254 (PiOpenDirectoryWithRoot.c)
 *     PpLastGoodDeleteFilesCallback @ 0x140958300 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x14096EEB0 (IopFileUtilClearAttributes.c)
 *     PopValidateHiberFileSize @ 0x140989320 (PopValidateHiberFileSize.c)
 *     PsCheckProcessFileSigningLevel @ 0x1409B08C0 (PsCheckProcessFileSigningLevel.c)
 *     ExpGetDriveGeometry @ 0x1409FCAF0 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1409FCC44 (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x1409FE50C (ExpTranslateNtPath.c)
 *     CMFFlushHitsFile @ 0x140A0222C (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140A02B70 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x140A0A2BC (ApiSetpLoadSchemaImage.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140A1CDB4 (CmpOpenFileWithExtremePrejudice.c)
 *     MiOpenHotPatchFile @ 0x140A3A3C0 (MiOpenHotPatchFile.c)
 *     AslDoesDirectoryExistNtPath @ 0x140A540F8 (AslDoesDirectoryExistNtPath.c)
 *     AslDoesFileExistNtPath @ 0x140A541B0 (AslDoesFileExistNtPath.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140A56658 (AslpPathWildcardAllocMatchNode.c)
 *     BiGetPhysicalDriveName @ 0x140A5D0A0 (BiGetPhysicalDriveName.c)
 *     IopMarkBootPartition @ 0x140B3D4F0 (IopMarkBootPartition.c)
 *     IoInitSystemPreDrivers @ 0x140B4F014 (IoInitSystemPreDrivers.c)
 *     IopFileUtilRename @ 0x140B6F4B4 (IopFileUtilRename.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140B7685C (PopPdcCsCheckSystemVolumeDevice.c)
 *     IopApplySystemPartitionProt @ 0x140B94EE0 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140B95140 (PipCriticalDeviceWaitCallback.c)
 *     VhdiGetVolumeNumber @ 0x140B9BBAC (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140B9BD30 (VhdiInitializeBootDisk.c)
 *     CimfsInitializeBootDisk @ 0x140B9C180 (CimfsInitializeBootDisk.c)
 *     RamdiskStart @ 0x140B9C590 (RamdiskStart.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG ShareAccess,
        ULONG OpenOptions)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
