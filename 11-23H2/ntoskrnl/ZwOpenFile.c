/*
 * XREFs of ZwOpenFile @ 0x14041B750
 * Callers:
 *     EtwpGetDriverDataDosPath @ 0x1403D7A2C (EtwpGetDriverDataDosPath.c)
 *     DbgkPostModuleMessage @ 0x14053BF6C (DbgkPostModuleMessage.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x14055E800 (SecureDump_LoadCertAndProvisionKey.c)
 *     DifZwOpenFileWrapper @ 0x1405F1E20 (DifZwOpenFileWrapper.c)
 *     BiLogFileOwnerProcess @ 0x1406719E0 (BiLogFileOwnerProcess.c)
 *     CmpLogHiveFileInaccessible @ 0x14068F4C0 (CmpLogHiveFileInaccessible.c)
 *     PiInitializeDDB @ 0x14069378C (PiInitializeDDB.c)
 *     KsepSdbMapToMemory @ 0x140694E7C (KsepSdbMapToMemory.c)
 *     IoGetDeviceObjectPointer @ 0x14075B450 (IoGetDeviceObjectPointer.c)
 *     NtGetNlsSectionPtr @ 0x1407A2090 (NtGetNlsSectionPtr.c)
 *     ExpGetGlobalLocaleSection @ 0x1407A2A68 (ExpGetGlobalLocaleSection.c)
 *     SiOpenDevice @ 0x1407C04A4 (SiOpenDevice.c)
 *     MiCreateSectionForDriver @ 0x1407D4418 (MiCreateSectionForDriver.c)
 *     RtlLockBootStatusData @ 0x1407EF060 (RtlLockBootStatusData.c)
 *     BiCreatePartitionDevice @ 0x1408069B0 (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140806CBC (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetDriveLayoutInformation @ 0x140806DEC (BiGetDriveLayoutInformation.c)
 *     BiIsVolumePartitionInformationRetained @ 0x1408070A0 (BiIsVolumePartitionInformationRetained.c)
 *     BiGetNtPartitionPath @ 0x1408075E0 (BiGetNtPartitionPath.c)
 *     KsepShimDatabaseTime @ 0x14080859C (KsepShimDatabaseTime.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408133F0 (PiDrvDbQuerySystemPathWin32.c)
 *     PspLocateSystemDll @ 0x14084D694 (PspLocateSystemDll.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14085B8D8 (EtwpUpdateFileInfoDriverRegistration.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140884514 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     HalpAcquirePccInterface @ 0x140935A54 (HalpAcquirePccInterface.c)
 *     DbgkSendSystemDllMessages @ 0x140936FD4 (DbgkSendSystemDllMessages.c)
 *     DbgkpSectionToFileHandle @ 0x1409395C8 (DbgkpSectionToFileHandle.c)
 *     IopIsNotNativeDriverImage @ 0x140945244 (IopIsNotNativeDriverImage.c)
 *     IopValidateJunctionTarget @ 0x1409467E4 (IopValidateJunctionTarget.c)
 *     IoAttachDevice @ 0x140946E00 (IoAttachDevice.c)
 *     PiGetDriverImageDirectory @ 0x1409560F8 (PiGetDriverImageDirectory.c)
 *     PiOpenDirectoryWithRoot @ 0x1409563A4 (PiOpenDirectoryWithRoot.c)
 *     PpLastGoodDeleteFilesCallback @ 0x140958450 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x14096F000 (IopFileUtilClearAttributes.c)
 *     PopValidateHiberFileSize @ 0x140989470 (PopValidateHiberFileSize.c)
 *     PsCheckProcessFileSigningLevel @ 0x1409B0A10 (PsCheckProcessFileSigningLevel.c)
 *     ExpGetDriveGeometry @ 0x1409FCCD0 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1409FCE24 (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x1409FE6EC (ExpTranslateNtPath.c)
 *     CMFFlushHitsFile @ 0x140A0240C (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140A02D50 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x140A0A4BC (ApiSetpLoadSchemaImage.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140A1CFB4 (CmpOpenFileWithExtremePrejudice.c)
 *     MiOpenHotPatchFile @ 0x140A3A600 (MiOpenHotPatchFile.c)
 *     AslDoesDirectoryExistNtPath @ 0x140A54338 (AslDoesDirectoryExistNtPath.c)
 *     AslDoesFileExistNtPath @ 0x140A543F0 (AslDoesFileExistNtPath.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140A56898 (AslpPathWildcardAllocMatchNode.c)
 *     BiGetPhysicalDriveName @ 0x140A5D2E0 (BiGetPhysicalDriveName.c)
 *     IopMarkBootPartition @ 0x140B39DF0 (IopMarkBootPartition.c)
 *     IoInitSystemPreDrivers @ 0x140B4B914 (IoInitSystemPreDrivers.c)
 *     IopFileUtilRename @ 0x140B6E048 (IopFileUtilRename.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140B758B0 (PopPdcCsCheckSystemVolumeDevice.c)
 *     IopApplySystemPartitionProt @ 0x140B93EE0 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140B94140 (PipCriticalDeviceWaitCallback.c)
 *     VhdiGetVolumeNumber @ 0x140B9ABAC (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140B9AD30 (VhdiInitializeBootDisk.c)
 *     CimfsInitializeBootDisk @ 0x140B9B180 (CimfsInitializeBootDisk.c)
 *     RamdiskStart @ 0x140B9B590 (RamdiskStart.c)
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
