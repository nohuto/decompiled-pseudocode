/*
 * XREFs of ZwOpenFile @ 0x14041B3C0
 * Callers:
 *     EtwpGetDriverDataDosPath @ 0x1403D784C (EtwpGetDriverDataDosPath.c)
 *     DbgkPostModuleMessage @ 0x14053BA1C (DbgkPostModuleMessage.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x14055E140 (SecureDump_LoadCertAndProvisionKey.c)
 *     DifZwOpenFileWrapper @ 0x1405F18B0 (DifZwOpenFileWrapper.c)
 *     BiLogFileOwnerProcess @ 0x140671490 (BiLogFileOwnerProcess.c)
 *     CmpLogHiveFileInaccessible @ 0x14068F4C0 (CmpLogHiveFileInaccessible.c)
 *     PiInitializeDDB @ 0x14069378C (PiInitializeDDB.c)
 *     KsepSdbMapToMemory @ 0x140694E7C (KsepSdbMapToMemory.c)
 *     IoGetDeviceObjectPointer @ 0x14075B260 (IoGetDeviceObjectPointer.c)
 *     NtGetNlsSectionPtr @ 0x1407A1EA0 (NtGetNlsSectionPtr.c)
 *     ExpGetGlobalLocaleSection @ 0x1407A2878 (ExpGetGlobalLocaleSection.c)
 *     SiOpenDevice @ 0x1407C01D4 (SiOpenDevice.c)
 *     MiCreateSectionForDriver @ 0x1407D4148 (MiCreateSectionForDriver.c)
 *     RtlLockBootStatusData @ 0x1407EED90 (RtlLockBootStatusData.c)
 *     BiCreatePartitionDevice @ 0x1408066E0 (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x1408069EC (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetDriveLayoutInformation @ 0x140806B1C (BiGetDriveLayoutInformation.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140806DD0 (BiIsVolumePartitionInformationRetained.c)
 *     BiGetNtPartitionPath @ 0x140807310 (BiGetNtPartitionPath.c)
 *     KsepShimDatabaseTime @ 0x1408082CC (KsepShimDatabaseTime.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x140813120 (PiDrvDbQuerySystemPathWin32.c)
 *     PspLocateSystemDll @ 0x14084D394 (PspLocateSystemDll.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14085B698 (EtwpUpdateFileInfoDriverRegistration.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1408842D4 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     HalpAcquirePccInterface @ 0x140935854 (HalpAcquirePccInterface.c)
 *     DbgkSendSystemDllMessages @ 0x140936DD4 (DbgkSendSystemDllMessages.c)
 *     DbgkpSectionToFileHandle @ 0x1409393C8 (DbgkpSectionToFileHandle.c)
 *     IopIsNotNativeDriverImage @ 0x140945044 (IopIsNotNativeDriverImage.c)
 *     IopValidateJunctionTarget @ 0x1409465E4 (IopValidateJunctionTarget.c)
 *     IoAttachDevice @ 0x140946C00 (IoAttachDevice.c)
 *     PiGetDriverImageDirectory @ 0x140955EF8 (PiGetDriverImageDirectory.c)
 *     PiOpenDirectoryWithRoot @ 0x1409561A4 (PiOpenDirectoryWithRoot.c)
 *     PpLastGoodDeleteFilesCallback @ 0x140958250 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x14096EE00 (IopFileUtilClearAttributes.c)
 *     PopValidateHiberFileSize @ 0x140989270 (PopValidateHiberFileSize.c)
 *     PsCheckProcessFileSigningLevel @ 0x1409B0810 (PsCheckProcessFileSigningLevel.c)
 *     ExpGetDriveGeometry @ 0x1409FCA40 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1409FCB94 (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x1409FE45C (ExpTranslateNtPath.c)
 *     CMFFlushHitsFile @ 0x140A0217C (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140A02AC0 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x140A0A20C (ApiSetpLoadSchemaImage.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140A1CD04 (CmpOpenFileWithExtremePrejudice.c)
 *     MiOpenHotPatchFile @ 0x140A3A350 (MiOpenHotPatchFile.c)
 *     AslDoesDirectoryExistNtPath @ 0x140A54088 (AslDoesDirectoryExistNtPath.c)
 *     AslDoesFileExistNtPath @ 0x140A54140 (AslDoesFileExistNtPath.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140A565E8 (AslpPathWildcardAllocMatchNode.c)
 *     BiGetPhysicalDriveName @ 0x140A5D030 (BiGetPhysicalDriveName.c)
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

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(FileHandle, *(_QWORD *)&DesiredAccess);
}
