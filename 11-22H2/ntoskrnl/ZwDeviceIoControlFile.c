/*
 * XREFs of ZwDeviceIoControlFile @ 0x14041A780
 * Callers:
 *     PopFlushAndHold @ 0x140590348 (PopFlushAndHold.c)
 *     DifZwDeviceIoControlFileWrapper @ 0x1405EF920 (DifZwDeviceIoControlFileWrapper.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x14068714C (PfSnVolumeCheckSeekPenalty.c)
 *     SiGetDiskPartitionInformation @ 0x1407C06D0 (SiGetDiskPartitionInformation.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140808F6C (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x140809164 (BiIssueGetDriveLayoutIoctl.c)
 *     BiGetPartitionInformation @ 0x14080923C (BiGetPartitionInformation.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140809350 (BiIsVolumePartitionInformationRetained.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x140812B88 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14085BB8C (EtwpUpdateFileInfoDriverRegistration.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x140862544 (ExpGetSystemWriteConstraintInformation.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408A5DF4 (PfSnVolumeCheckIsSdBus.c)
 *     ExpGetDriveGeometry @ 0x1409FCAF0 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1409FCC44 (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x1409FE50C (ExpTranslateNtPath.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x140A5D1F0 (BiGetVolumeDiskExtentsInformation.c)
 *     SiGetDeviceNumberInformation @ 0x140A5F54C (SiGetDeviceNumberInformation.c)
 *     SiGetDriveLayoutInformation @ 0x140A5F628 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140A5F728 (SiIssueSynchronousIoctl.c)
 *     SiQueryProperty @ 0x140A5F7C4 (SiQueryProperty.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140B7685C (PopPdcCsCheckSystemVolumeDevice.c)
 *     VhdiGetVolumeNumber @ 0x140B9BBAC (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140B9BD30 (VhdiInitializeBootDisk.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x140B9C020 (VhdiQueryVolumeVhdFilePath.c)
 *     CimfsInitializeBootDisk @ 0x140B9C180 (CimfsInitializeBootDisk.c)
 *     RamdiskStart @ 0x140B9C590 (RamdiskStart.c)
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
