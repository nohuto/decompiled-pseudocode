/*
 * XREFs of IofCallDriver @ 0x1402AC2D0
 * Callers:
 *     sub_14020C810 @ 0x14020C810 (sub_14020C810.c)
 *     sub_14023F3E8 @ 0x14023F3E8 (sub_14023F3E8.c)
 *     IoSynchronousCallDriver @ 0x140245250 (IoSynchronousCallDriver.c)
 *     sub_1402F8AE0 @ 0x1402F8AE0 (sub_1402F8AE0.c)
 *     sub_140340130 @ 0x140340130 (sub_140340130.c)
 *     sub_140342C50 @ 0x140342C50 (sub_140342C50.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140387570 (FsRtlGetVirtualDiskNestingLevel.c)
 *     sub_1403A4264 @ 0x1403A4264 (sub_1403A4264.c)
 *     sub_1403A4EC4 @ 0x1403A4EC4 (sub_1403A4EC4.c)
 *     PoCallDriver @ 0x1403A6C60 (PoCallDriver.c)
 *     sub_1403B4174 @ 0x1403B4174 (sub_1403B4174.c)
 *     sub_1405FB99C @ 0x1405FB99C (sub_1405FB99C.c)
 *     sub_14068A23C @ 0x14068A23C (sub_14068A23C.c)
 *     IoVolumeDeviceToGuidPath @ 0x14068BA10 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14068BB80 (IoVolumeDeviceNameToGuidPath.c)
 *     sub_14068BEAC @ 0x14068BEAC (sub_14068BEAC.c)
 *     sub_14068E624 @ 0x14068E624 (sub_14068E624.c)
 *     FsRtlSetKernelEaFile @ 0x1406A3540 (FsRtlSetKernelEaFile.c)
 *     sub_1406A443C @ 0x1406A443C (sub_1406A443C.c)
 *     FsRtlKernelFsControlFile @ 0x1406A4560 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406A4870 (FsRtlQueryKernelEaFile.c)
 *     FsRtlQueryCachedVdl @ 0x1406C2860 (FsRtlQueryCachedVdl.c)
 *     sub_1406D3ACC @ 0x1406D3ACC (sub_1406D3ACC.c)
 *     FsRtlGetFileSize @ 0x1406FF640 (FsRtlGetFileSize.c)
 *     sub_14070FC40 @ 0x14070FC40 (sub_14070FC40.c)
 *     RtlVolumeDeviceToDosName @ 0x140710B90 (RtlVolumeDeviceToDosName.c)
 *     sub_14071E6BC @ 0x14071E6BC (sub_14071E6BC.c)
 *     sub_14071E8F0 @ 0x14071E8F0 (sub_14071E8F0.c)
 *     sub_14072B630 @ 0x14072B630 (sub_14072B630.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     sub_14072E9E0 @ 0x14072E9E0 (sub_14072E9E0.c)
 *     sub_140731680 @ 0x140731680 (sub_140731680.c)
 *     sub_140748D6C @ 0x140748D6C (sub_140748D6C.c)
 *     sub_14074BBC4 @ 0x14074BBC4 (sub_14074BBC4.c)
 *     sub_14074C5A8 @ 0x14074C5A8 (sub_14074C5A8.c)
 *     sub_14074C6C0 @ 0x14074C6C0 (sub_14074C6C0.c)
 *     sub_14074CA9C @ 0x14074CA9C (sub_14074CA9C.c)
 *     sub_140780D40 @ 0x140780D40 (sub_140780D40.c)
 *     sub_140783A9C @ 0x140783A9C (sub_140783A9C.c)
 *     FsRtlIssueDeviceIoControl @ 0x1407FA460 (FsRtlIssueDeviceIoControl.c)
 *     FsRtlBalanceReads @ 0x1407FC880 (FsRtlBalanceReads.c)
 *     sub_14080AB40 @ 0x14080AB40 (sub_14080AB40.c)
 *     IoSetInformation @ 0x14080AE60 (IoSetInformation.c)
 *     sub_14080C5C8 @ 0x14080C5C8 (sub_14080C5C8.c)
 *     sub_14080F068 @ 0x14080F068 (sub_14080F068.c)
 *     sub_14081C234 @ 0x14081C234 (sub_14081C234.c)
 *     sub_14084BB98 @ 0x14084BB98 (sub_14084BB98.c)
 *     sub_140850980 @ 0x140850980 (sub_140850980.c)
 *     sub_140908124 @ 0x140908124 (sub_140908124.c)
 *     sub_140908208 @ 0x140908208 (sub_140908208.c)
 *     sub_14090A480 @ 0x14090A480 (sub_14090A480.c)
 *     sub_14090A560 @ 0x14090A560 (sub_14090A560.c)
 *     sub_14090AD84 @ 0x14090AD84 (sub_14090AD84.c)
 *     sub_14092D730 @ 0x14092D730 (sub_14092D730.c)
 *     FsRtlQueryInformationFile @ 0x14092ED30 (FsRtlQueryInformationFile.c)
 *     sub_140930280 @ 0x140930280 (sub_140930280.c)
 *     sub_14093449C @ 0x14093449C (sub_14093449C.c)
 *     sub_140935C64 @ 0x140935C64 (sub_140935C64.c)
 *     IoVerifyVolume @ 0x1409367E0 (IoVerifyVolume.c)
 *     sub_14093F400 @ 0x14093F400 (sub_14093F400.c)
 *     sub_14093FC6C @ 0x14093FC6C (sub_14093FC6C.c)
 *     sub_1409585A4 @ 0x1409585A4 (sub_1409585A4.c)
 *     sub_14095A544 @ 0x14095A544 (sub_14095A544.c)
 *     sub_140994E28 @ 0x140994E28 (sub_140994E28.c)
 *     sub_140995414 @ 0x140995414 (sub_140995414.c)
 *     sub_140999A80 @ 0x140999A80 (sub_140999A80.c)
 *     sub_1409B4F34 @ 0x1409B4F34 (sub_1409B4F34.c)
 *     sub_1409B5088 @ 0x1409B5088 (sub_1409B5088.c)
 *     sub_1409B54D8 @ 0x1409B54D8 (sub_1409B54D8.c)
 *     sub_1409D48D8 @ 0x1409D48D8 (sub_1409D48D8.c)
 *     sub_1409D6368 @ 0x1409D6368 (sub_1409D6368.c)
 *     sub_1409D6428 @ 0x1409D6428 (sub_1409D6428.c)
 *     sub_140A3437C @ 0x140A3437C (sub_140A3437C.c)
 *     sub_140A651B8 @ 0x140A651B8 (sub_140A651B8.c)
 *     sub_140A65554 @ 0x140A65554 (sub_140A65554.c)
 *     sub_140A8D17C @ 0x140A8D17C (sub_140A8D17C.c)
 *     sub_140A9E460 @ 0x140A9E460 (sub_140A9E460.c)
 *     sub_140A9E540 @ 0x140A9E540 (sub_140A9E540.c)
 *     sub_140B0E310 @ 0x140B0E310 (sub_140B0E310.c)
 *     sub_140B0EB5C @ 0x140B0EB5C (sub_140B0EB5C.c)
 *     sub_140B4F04C @ 0x140B4F04C (sub_140B4F04C.c)
 *     sub_140B54AE4 @ 0x140B54AE4 (sub_140B54AE4.c)
 *     sub_140B55478 @ 0x140B55478 (sub_140B55478.c)
 *     sub_140B55668 @ 0x140B55668 (sub_140B55668.c)
 * Callees:
 *     sub_1403A374C @ 0x1403A374C (sub_1403A374C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14055969C @ 0x14055969C (sub_14055969C.c)
 *     sub_140A802F0 @ 0x140A802F0 (sub_140A802F0.c)
 */

NTSTATUS __stdcall IofCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *v2; // rax
  UCHAR MajorFunction; // r8

  if ( dword_140D06B10 )
  {
    if ( dword_140D06B10 == 3 )
      return sub_14055969C(DeviceObject);
    else
      return sub_140A802F0(DeviceObject);
  }
  else
  {
    if ( --Irp->CurrentLocation <= 0 )
      KeBugCheckEx(0x35u, (ULONG_PTR)Irp, 0LL, 0LL, 0LL);
    v2 = Irp->Tail.Overlay.CurrentStackLocation - 1;
    Irp->Tail.Overlay.CurrentStackLocation = v2;
    MajorFunction = v2->MajorFunction;
    v2->DeviceObject = DeviceObject;
    if ( MajorFunction == 22 && (unsigned __int8)(v2->MinorFunction - 2) <= 1u )
      return sub_1403A374C(Irp);
    else
      return sub_14042A5E0(DeviceObject, Irp);
  }
}
