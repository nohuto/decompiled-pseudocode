/*
 * XREFs of IoBuildDeviceIoControlRequest @ 0x140251610
 * Callers:
 *     NtApphelpCacheControl @ 0x14068E760 (NtApphelpCacheControl.c)
 *     IoVolumeDeviceToGuidPath @ 0x140702140 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1407022B0 (IoVolumeDeviceNameToGuidPath.c)
 *     IoVolumeDeviceToDosName @ 0x14075B180 (IoVolumeDeviceToDosName.c)
 *     FsRtlQueryCachedVdl @ 0x1407D8F40 (FsRtlQueryCachedVdl.c)
 *     IopGetSetObjectId @ 0x1407E4F8C (IopGetSetObjectId.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140834278 (FsRtlIssueFileNotificationFsctl.c)
 *     FsRtlIssueDeviceIoControl @ 0x14086D6D0 (FsRtlIssueDeviceIoControl.c)
 *     IopCreateArcName @ 0x14086FA68 (IopCreateArcName.c)
 *     FsRtlBalanceReads @ 0x140874F30 (FsRtlBalanceReads.c)
 *     IopLoadFileSystemDriver @ 0x140875A70 (IopLoadFileSystemDriver.c)
 *     IopInvalidateVolumesForDevice @ 0x1408820A8 (IopInvalidateVolumesForDevice.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140933008 (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x140933118 (HalpSetAcpiRealTimeClock.c)
 *     HalpCallWakeAlarmDriver @ 0x1409350FC (HalpCallWakeAlarmDriver.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x1409351DC (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x140940530 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopGetVolumeId @ 0x140944E3C (IopGetVolumeId.c)
 *     IopSetRemoteLink @ 0x1409465F4 (IopSetRemoteLink.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140951208 (IopIssueSystemEnvironmentRequest.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x1409947D4 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     RawPerformDevIoCtrl @ 0x1409B84D4 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x1409B8628 (RawQueryFsSizeInfo.c)
 *     SmKmSendDeviceControl @ 0x1409D9734 (SmKmSendDeviceControl.c)
 *     VhdiMountVhdFile @ 0x140A734CC (VhdiMountVhdFile.c)
 *     VhdiVerifyBootDisk @ 0x140A73C20 (VhdiVerifyBootDisk.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x1402512D0 (IopBuildDeviceIoControlRequest.c)
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
