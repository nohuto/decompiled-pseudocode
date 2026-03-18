/*
 * XREFs of ZwDeviceIoControlFile @ 0x14041AE40
 * Callers:
 *     PopFlushAndHold @ 0x1405902B8 (PopFlushAndHold.c)
 *     DifZwDeviceIoControlFileWrapper @ 0x1405EF890 (DifZwDeviceIoControlFileWrapper.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x14068714C (PfSnVolumeCheckSeekPenalty.c)
 *     SiGetDiskPartitionInformation @ 0x1407C0140 (SiGetDiskPartitionInformation.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x1408069EC (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x140806BE4 (BiIssueGetDriveLayoutIoctl.c)
 *     BiGetPartitionInformation @ 0x140806CBC (BiGetPartitionInformation.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140806DD0 (BiIsVolumePartitionInformationRetained.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x140810608 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14085B698 (EtwpUpdateFileInfoDriverRegistration.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1408623E4 (ExpGetSystemWriteConstraintInformation.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408A5914 (PfSnVolumeCheckIsSdBus.c)
 *     ExpGetDriveGeometry @ 0x1409FCA40 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1409FCB94 (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x1409FE45C (ExpTranslateNtPath.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x140A5D180 (BiGetVolumeDiskExtentsInformation.c)
 *     SiGetDeviceNumberInformation @ 0x140A5F4DC (SiGetDeviceNumberInformation.c)
 *     SiGetDriveLayoutInformation @ 0x140A5F5B8 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140A5F6B8 (SiIssueSynchronousIoctl.c)
 *     SiQueryProperty @ 0x140A5F754 (SiQueryProperty.c)
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
  return KiServiceInternal(FileHandle, Event, ApcRoutine);
}
