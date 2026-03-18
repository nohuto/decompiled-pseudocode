/*
 * XREFs of IoBuildDeviceIoControlRequest @ 0x140251550
 * Callers:
 *     NtApphelpCacheControl @ 0x14068E760 (NtApphelpCacheControl.c)
 *     IoVolumeDeviceToGuidPath @ 0x140701F30 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1407020A0 (IoVolumeDeviceNameToGuidPath.c)
 *     IoVolumeDeviceToDosName @ 0x14075AF90 (IoVolumeDeviceToDosName.c)
 *     FsRtlQueryCachedVdl @ 0x1407D8C70 (FsRtlQueryCachedVdl.c)
 *     IopGetSetObjectId @ 0x1407E4CBC (IopGetSetObjectId.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140833F78 (FsRtlIssueFileNotificationFsctl.c)
 *     FsRtlIssueDeviceIoControl @ 0x14086D490 (FsRtlIssueDeviceIoControl.c)
 *     IopCreateArcName @ 0x14086F828 (IopCreateArcName.c)
 *     FsRtlBalanceReads @ 0x140874CF0 (FsRtlBalanceReads.c)
 *     IopLoadFileSystemDriver @ 0x140875830 (IopLoadFileSystemDriver.c)
 *     IopInvalidateVolumesForDevice @ 0x140881E68 (IopInvalidateVolumesForDevice.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140932E08 (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x140932F18 (HalpSetAcpiRealTimeClock.c)
 *     HalpCallWakeAlarmDriver @ 0x140934EFC (HalpCallWakeAlarmDriver.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x140934FDC (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x140940330 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopGetVolumeId @ 0x140944C3C (IopGetVolumeId.c)
 *     IopSetRemoteLink @ 0x1409463F4 (IopSetRemoteLink.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140951008 (IopIssueSystemEnvironmentRequest.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x1409945D4 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     RawPerformDevIoCtrl @ 0x1409B82D4 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x1409B8428 (RawQueryFsSizeInfo.c)
 *     SmKmSendDeviceControl @ 0x1409D9534 (SmKmSendDeviceControl.c)
 *     VhdiMountVhdFile @ 0x140A7321C (VhdiMountVhdFile.c)
 *     VhdiVerifyBootDisk @ 0x140A73970 (VhdiVerifyBootDisk.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x140251210 (IopBuildDeviceIoControlRequest.c)
 */

PIRP __stdcall IoBuildDeviceIoControlRequest(
        ULONG IoControlCode,
        PDEVICE_OBJECT DeviceObject,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        BOOLEAN InternalDeviceIoControl,
        PKEVENT Event,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  return IopBuildDeviceIoControlRequest(
           IoControlCode,
           (__int64)DeviceObject,
           InputBuffer,
           InputBufferLength,
           OutputBuffer,
           OutputBufferLength,
           InternalDeviceIoControl,
           Event,
           IoStatusBlock);
}
