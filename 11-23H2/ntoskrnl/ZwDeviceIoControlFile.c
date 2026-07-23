/*
 * XREFs of ZwDeviceIoControlFile @ 0x14041B1D0
 * Callers:
 *     PopFlushAndHold @ 0x1405907A8 (PopFlushAndHold.c)
 *     DifZwDeviceIoControlFileWrapper @ 0x1405EFE00 (DifZwDeviceIoControlFileWrapper.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x14068714C (PfSnVolumeCheckSeekPenalty.c)
 *     SiGetDiskPartitionInformation @ 0x1407C0410 (SiGetDiskPartitionInformation.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140806CBC (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x140806EB4 (BiIssueGetDriveLayoutIoctl.c)
 *     BiGetPartitionInformation @ 0x140806F8C (BiGetPartitionInformation.c)
 *     BiIsVolumePartitionInformationRetained @ 0x1408070A0 (BiIsVolumePartitionInformationRetained.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1408108D8 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14085B8D8 (EtwpUpdateFileInfoDriverRegistration.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x140862624 (ExpGetSystemWriteConstraintInformation.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408A5B64 (PfSnVolumeCheckIsSdBus.c)
 *     ExpGetDriveGeometry @ 0x1409FCCD0 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1409FCE24 (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x1409FE6EC (ExpTranslateNtPath.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x140A5D430 (BiGetVolumeDiskExtentsInformation.c)
 *     SiGetDeviceNumberInformation @ 0x140A5F78C (SiGetDeviceNumberInformation.c)
 *     SiGetDriveLayoutInformation @ 0x140A5F868 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140A5F968 (SiIssueSynchronousIoctl.c)
 *     SiQueryProperty @ 0x140A5FA04 (SiQueryProperty.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140B758B0 (PopPdcCsCheckSystemVolumeDevice.c)
 *     VhdiGetVolumeNumber @ 0x140B9ABAC (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140B9AD30 (VhdiInitializeBootDisk.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x140B9B020 (VhdiQueryVolumeVhdFilePath.c)
 *     CimfsInitializeBootDisk @ 0x140B9B180 (CimfsInitializeBootDisk.c)
 *     RamdiskStart @ 0x140B9B590 (RamdiskStart.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeviceIoControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
