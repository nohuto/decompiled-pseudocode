/*
 * XREFs of IofCallDriver @ 0x14022F000
 * Callers:
 *     IoSynchronousPageWriteEx @ 0x140251040 (IoSynchronousPageWriteEx.c)
 *     PopDequeueQuerySetIrp @ 0x14028E64C (PopDequeueQuerySetIrp.c)
 *     PopQueueQuerySetIrp @ 0x14028EC5C (PopQueueQuerySetIrp.c)
 *     IoPageReadEx @ 0x1402A6AA0 (IoPageReadEx.c)
 *     IopCallDriverReference @ 0x1402A7BD0 (IopCallDriverReference.c)
 *     CcSetValidData @ 0x140354FC4 (CcSetValidData.c)
 *     IoSynchronousCallDriver @ 0x140355400 (IoSynchronousCallDriver.c)
 *     IoAsynchronousPageWrite @ 0x140369BAC (IoAsynchronousPageWrite.c)
 *     PoCallDriver @ 0x14036E330 (PoCallDriver.c)
 *     HalpPassIrpFromFdoToPdo @ 0x140390E44 (HalpPassIrpFromFdoToPdo.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x1403C4280 (FsRtlGetVirtualDiskNestingLevel.c)
 *     IoCallDriver @ 0x140556EB0 (IoCallDriver.c)
 *     SmKmIssueVolumeIo @ 0x1405CBB3C (SmKmIssueVolumeIo.c)
 *     CmpGetVolumeClusterSize @ 0x14068936C (CmpGetVolumeClusterSize.c)
 *     NtApphelpCacheControl @ 0x14068E760 (NtApphelpCacheControl.c)
 *     IopGetSetSecurityObject @ 0x14069C1D0 (IopGetSetSecurityObject.c)
 *     FsRtlGetFileSize @ 0x1406AA1A0 (FsRtlGetFileSize.c)
 *     WmipForwardWmiIrp @ 0x1406C74B0 (WmipForwardWmiIrp.c)
 *     IopSynchronousServiceTail @ 0x1406E3EC0 (IopSynchronousServiceTail.c)
 *     IopMountVolume @ 0x1407016F8 (IopMountVolume.c)
 *     IoVolumeDeviceToGuidPath @ 0x140702140 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1407022B0 (IoVolumeDeviceNameToGuidPath.c)
 *     NtQueryInformationFile @ 0x140725270 (NtQueryInformationFile.c)
 *     IopParseDevice @ 0x14072CF50 (IopParseDevice.c)
 *     IopCloseFile @ 0x1407301F0 (IopCloseFile.c)
 *     IopDeleteFile @ 0x140730680 (IopDeleteFile.c)
 *     CmpFileFlushAndPurge @ 0x140750DB4 (CmpFileFlushAndPurge.c)
 *     IopGetFileInformation @ 0x14075B04C (IopGetFileInformation.c)
 *     IoVolumeDeviceToDosName @ 0x14075B180 (IoVolumeDeviceToDosName.c)
 *     IopQueryXxxInformation @ 0x14075D47C (IopQueryXxxInformation.c)
 *     IopSynchronousCall @ 0x140768594 (IopSynchronousCall.c)
 *     FsRtlKernelFsControlFile @ 0x140772AB0 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1407737A0 (FsRtlQueryKernelEaFile.c)
 *     IopFilterResourceRequirementsCall @ 0x140790420 (IopFilterResourceRequirementsCall.c)
 *     RawReadWriteDeviceControl @ 0x140791B44 (RawReadWriteDeviceControl.c)
 *     PnpAsynchronousCall @ 0x140795184 (PnpAsynchronousCall.c)
 *     FsRtlSetKernelEaFile @ 0x1407D5C30 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryCachedVdl @ 0x1407D8F40 (FsRtlQueryCachedVdl.c)
 *     IopGetSetObjectId @ 0x1407E4F8C (IopGetSetObjectId.c)
 *     FsRtlSetFileSize @ 0x1407EA964 (FsRtlSetFileSize.c)
 *     PnpQueryInterface @ 0x1407FD510 (PnpQueryInterface.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140834278 (FsRtlIssueFileNotificationFsctl.c)
 *     PopThermalWorker @ 0x140847B30 (PopThermalWorker.c)
 *     PopFanWorker @ 0x140847F10 (PopFanWorker.c)
 *     PiPagePathSetState @ 0x140853F48 (PiPagePathSetState.c)
 *     FsRtlIssueDeviceIoControl @ 0x14086D6D0 (FsRtlIssueDeviceIoControl.c)
 *     IopCreateArcName @ 0x14086FA68 (IopCreateArcName.c)
 *     FsRtlBalanceReads @ 0x140874F30 (FsRtlBalanceReads.c)
 *     IopLoadFileSystemDriver @ 0x140875A70 (IopLoadFileSystemDriver.c)
 *     IopInvalidateVolumesForDevice @ 0x1408820A8 (IopInvalidateVolumesForDevice.c)
 *     IoSetInformation @ 0x140883430 (IoSetInformation.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140933008 (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x140933118 (HalpSetAcpiRealTimeClock.c)
 *     HalpCallWakeAlarmDriver @ 0x1409350FC (HalpCallWakeAlarmDriver.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x1409351DC (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpQueryPccInterface @ 0x140935C90 (HalpQueryPccInterface.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14093D1E8 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x14093EF20 (FsRtlQueryInformationFile.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x140940530 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopGetVolumeId @ 0x140944E3C (IopGetVolumeId.c)
 *     IopSetRemoteLink @ 0x1409465F4 (IopSetRemoteLink.c)
 *     IoVerifyVolume @ 0x1409478B0 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentCallout @ 0x1409511E0 (IopIssueSystemEnvironmentCallout.c)
 *     IopFreeBandwidthContract @ 0x140951B2C (IopFreeBandwidthContract.c)
 *     IopEjectDevice @ 0x14096CF18 (IopEjectDevice.c)
 *     PipSendGuestAssignedNotification @ 0x14096F204 (PipSendGuestAssignedNotification.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x1409947D4 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopBatteryQueryStatus @ 0x140995730 (PopBatteryQueryStatus.c)
 *     PopBatteryWaitTag @ 0x140995D14 (PopBatteryWaitTag.c)
 *     RawPerformDevIoCtrl @ 0x1409B84D4 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x1409B8628 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x1409B8A74 (RawQueryFileSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x1409D7DB0 (SmStorePhysicalRequestIssue.c)
 *     SmKmSendDeviceControl @ 0x1409D9734 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x1409D97F4 (SmKmSendUsageNotification.c)
 *     VhdiMountVhdFile @ 0x140A734CC (VhdiMountVhdFile.c)
 *     VhdiVerifyBootDisk @ 0x140A73C20 (VhdiVerifyBootDisk.c)
 *     IoShutdownSystem @ 0x140A999A4 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140A99D54 (IopShutdownBaseFileSystems.c)
 *     VfIrpSendSynchronousIrp @ 0x140ACDAC8 (VfIrpSendSynchronousIrp.c)
 *     ViFilterDispatchGeneric @ 0x140ADF540 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x140ADF620 (ViFilterDispatchPnp.c)
 *     IopStoreBootDriveLetter @ 0x140B39740 (IopStoreBootDriveLetter.c)
 *     IopCreateArcNamesCd @ 0x140B39BCC (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140B93A0C (IopGetBootDiskInformation.c)
 *     SbpAddTransportToInstance @ 0x140B9B95C (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140B9BB50 (SbpStartLanman.c)
 * Callees:
 *     IopPoHandleIrp @ 0x14028D9BC (IopPoHandleIrp.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     IopPerfCallDriver @ 0x14045FC8A (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x140AC11C0 (IovCallDriver.c)
 */

NTSTATUS __stdcall IofCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *v2; // rax
  __int64 MajorFunction; // r8

  if ( IopDispatchCallDriver )
  {
    if ( IopDispatchCallDriver == 3 )
      return IopPerfCallDriver(DeviceObject);
    else
      return IovCallDriver(DeviceObject);
  }
  else
  {
    if ( --Irp->CurrentLocation <= 0 )
      KeBugCheckEx(0x35u, (ULONG_PTR)Irp, 0LL, 0LL, 0LL);
    v2 = Irp->Tail.Overlay.CurrentStackLocation - 1;
    Irp->Tail.Overlay.CurrentStackLocation = v2;
    MajorFunction = v2->MajorFunction;
    v2->DeviceObject = DeviceObject;
    if ( (_BYTE)MajorFunction == 22 && (unsigned __int8)(v2->MinorFunction - 2) <= 1u )
      return IopPoHandleIrp(Irp);
    else
      return ((__int64 (__fastcall *)(PDEVICE_OBJECT))DeviceObject->DriverObject->MajorFunction[MajorFunction])(DeviceObject);
  }
}
