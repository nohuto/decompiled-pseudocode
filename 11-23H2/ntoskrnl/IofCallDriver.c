/*
 * XREFs of IofCallDriver @ 0x14022EEF0
 * Callers:
 *     IoSynchronousPageWriteEx @ 0x140250F80 (IoSynchronousPageWriteEx.c)
 *     PopDequeueQuerySetIrp @ 0x14028E3BC (PopDequeueQuerySetIrp.c)
 *     PopQueueQuerySetIrp @ 0x14028E9CC (PopQueueQuerySetIrp.c)
 *     IoPageReadEx @ 0x1402A6810 (IoPageReadEx.c)
 *     IopCallDriverReference @ 0x1402A7940 (IopCallDriverReference.c)
 *     CcSetValidData @ 0x140354E24 (CcSetValidData.c)
 *     IoSynchronousCallDriver @ 0x140355260 (IoSynchronousCallDriver.c)
 *     IoAsynchronousPageWrite @ 0x140369A0C (IoAsynchronousPageWrite.c)
 *     PoCallDriver @ 0x14036E190 (PoCallDriver.c)
 *     HalpPassIrpFromFdoToPdo @ 0x140390C64 (HalpPassIrpFromFdoToPdo.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x1403C40A0 (FsRtlGetVirtualDiskNestingLevel.c)
 *     IoCallDriver @ 0x1405567F0 (IoCallDriver.c)
 *     SmKmIssueVolumeIo @ 0x1405CB5CC (SmKmIssueVolumeIo.c)
 *     CmpGetVolumeClusterSize @ 0x14068936C (CmpGetVolumeClusterSize.c)
 *     NtApphelpCacheControl @ 0x14068E760 (NtApphelpCacheControl.c)
 *     IopGetSetSecurityObject @ 0x14069C1D0 (IopGetSetSecurityObject.c)
 *     FsRtlGetFileSize @ 0x1406AA1A0 (FsRtlGetFileSize.c)
 *     WmipForwardWmiIrp @ 0x1406C7480 (WmipForwardWmiIrp.c)
 *     IopSynchronousServiceTail @ 0x1406E3E90 (IopSynchronousServiceTail.c)
 *     IopMountVolume @ 0x1407014E8 (IopMountVolume.c)
 *     IoVolumeDeviceToGuidPath @ 0x140701F30 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1407020A0 (IoVolumeDeviceNameToGuidPath.c)
 *     NtQueryInformationFile @ 0x140725070 (NtQueryInformationFile.c)
 *     IopParseDevice @ 0x14072CD50 (IopParseDevice.c)
 *     IopCloseFile @ 0x140730000 (IopCloseFile.c)
 *     IopDeleteFile @ 0x140730490 (IopDeleteFile.c)
 *     CmpFileFlushAndPurge @ 0x140750BC4 (CmpFileFlushAndPurge.c)
 *     IopGetFileInformation @ 0x14075AE5C (IopGetFileInformation.c)
 *     IoVolumeDeviceToDosName @ 0x14075AF90 (IoVolumeDeviceToDosName.c)
 *     IopQueryXxxInformation @ 0x14075D28C (IopQueryXxxInformation.c)
 *     IopSynchronousCall @ 0x1407683A4 (IopSynchronousCall.c)
 *     FsRtlKernelFsControlFile @ 0x1407728C0 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1407735B0 (FsRtlQueryKernelEaFile.c)
 *     IopFilterResourceRequirementsCall @ 0x140790230 (IopFilterResourceRequirementsCall.c)
 *     RawReadWriteDeviceControl @ 0x140791954 (RawReadWriteDeviceControl.c)
 *     PnpAsynchronousCall @ 0x140794F94 (PnpAsynchronousCall.c)
 *     FsRtlSetKernelEaFile @ 0x1407D5960 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryCachedVdl @ 0x1407D8C70 (FsRtlQueryCachedVdl.c)
 *     IopGetSetObjectId @ 0x1407E4CBC (IopGetSetObjectId.c)
 *     FsRtlSetFileSize @ 0x1407EA694 (FsRtlSetFileSize.c)
 *     PnpQueryInterface @ 0x1407FD240 (PnpQueryInterface.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140833F78 (FsRtlIssueFileNotificationFsctl.c)
 *     PopThermalWorker @ 0x140847830 (PopThermalWorker.c)
 *     PopFanWorker @ 0x140847C10 (PopFanWorker.c)
 *     PiPagePathSetState @ 0x140853C48 (PiPagePathSetState.c)
 *     FsRtlIssueDeviceIoControl @ 0x14086D490 (FsRtlIssueDeviceIoControl.c)
 *     IopCreateArcName @ 0x14086F828 (IopCreateArcName.c)
 *     FsRtlBalanceReads @ 0x140874CF0 (FsRtlBalanceReads.c)
 *     IopLoadFileSystemDriver @ 0x140875830 (IopLoadFileSystemDriver.c)
 *     IopInvalidateVolumesForDevice @ 0x140881E68 (IopInvalidateVolumesForDevice.c)
 *     IoSetInformation @ 0x1408831F0 (IoSetInformation.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140932E08 (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x140932F18 (HalpSetAcpiRealTimeClock.c)
 *     HalpCallWakeAlarmDriver @ 0x140934EFC (HalpCallWakeAlarmDriver.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x140934FDC (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpQueryPccInterface @ 0x140935A90 (HalpQueryPccInterface.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14093CFE8 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x14093ED20 (FsRtlQueryInformationFile.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x140940330 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopGetVolumeId @ 0x140944C3C (IopGetVolumeId.c)
 *     IopSetRemoteLink @ 0x1409463F4 (IopSetRemoteLink.c)
 *     IoVerifyVolume @ 0x1409476B0 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentCallout @ 0x140950FE0 (IopIssueSystemEnvironmentCallout.c)
 *     IopFreeBandwidthContract @ 0x14095192C (IopFreeBandwidthContract.c)
 *     IopEjectDevice @ 0x14096CD18 (IopEjectDevice.c)
 *     PipSendGuestAssignedNotification @ 0x14096F004 (PipSendGuestAssignedNotification.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x1409945D4 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopBatteryQueryStatus @ 0x140995530 (PopBatteryQueryStatus.c)
 *     PopBatteryWaitTag @ 0x140995B14 (PopBatteryWaitTag.c)
 *     RawPerformDevIoCtrl @ 0x1409B82D4 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x1409B8428 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x1409B8874 (RawQueryFileSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x1409D7BB0 (SmStorePhysicalRequestIssue.c)
 *     SmKmSendDeviceControl @ 0x1409D9534 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x1409D95F4 (SmKmSendUsageNotification.c)
 *     VhdiMountVhdFile @ 0x140A7321C (VhdiMountVhdFile.c)
 *     VhdiVerifyBootDisk @ 0x140A73970 (VhdiVerifyBootDisk.c)
 *     IoShutdownSystem @ 0x140A99B34 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140A99EE4 (IopShutdownBaseFileSystems.c)
 *     VfIrpSendSynchronousIrp @ 0x140ACDAD8 (VfIrpSendSynchronousIrp.c)
 *     ViFilterDispatchGeneric @ 0x140ADF550 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x140ADF630 (ViFilterDispatchPnp.c)
 *     IopStoreBootDriveLetter @ 0x140B39740 (IopStoreBootDriveLetter.c)
 *     IopCreateArcNamesCd @ 0x140B39BCC (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140B93A0C (IopGetBootDiskInformation.c)
 *     SbpAddTransportToInstance @ 0x140B9B95C (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140B9BB50 (SbpStartLanman.c)
 * Callees:
 *     IopPoHandleIrp @ 0x14028D72C (IopPoHandleIrp.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     IopPerfCallDriver @ 0x14045F88A (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x140AC11D0 (IovCallDriver.c)
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
