/*
 * XREFs of PmSendDeviceControl @ 0x1C0021354
 * Callers:
 *     PmDecrementPendingPartitionsCount @ 0x1C000253C (PmDecrementPendingPartitionsCount.c)
 *     ?PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C0008570 (-PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z.c)
 *     ?PmVolumeManagerArrival@@YAJPEAU_CONTROL_EXTENSION@@PEAU_UNICODE_STRING@@@Z @ 0x1C000AEE4 (-PmVolumeManagerArrival@@YAJPEAU_CONTROL_EXTENSION@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?PmUpdatePartitionsLegacyRemovable@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x1C000C838 (-PmUpdatePartitionsLegacyRemovable@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@.c)
 *     ?Control@PM_DRIVE@@UEAAJKPEAXK0K@Z @ 0x1C001E660 (-Control@PM_DRIVE@@UEAAJKPEAXK0K@Z.c)
 *     ?PmConstructDeviceLocation@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C001F3AC (-PmConstructDeviceLocation@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z.c)
 *     ?PmGetFirmwareInfo@@YAJPEAU_DEVICE_EXTENSION@@W4_STORAGE_BUS_TYPE@@PEAPEAU_STORAGE_HW_FIRMWARE_INFO@@@Z @ 0x1C001F668 (-PmGetFirmwareInfo@@YAJPEAU_DEVICE_EXTENSION@@W4_STORAGE_BUS_TYPE@@PEAPEAU_STORAGE_HW_FIRMWARE_I.c)
 *     ?PmIsConversionInProgress@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z @ 0x1C001FE1C (-PmIsConversionInProgress@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z.c)
 *     PmGetDriveGeometry @ 0x1C002006C (PmGetDriveGeometry.c)
 *     ?PmQueryStorageProperty@@YAJPEAU_DEVICE_EXTENSION@@W4_STORAGE_PROPERTY_ID@@KPEAPEAX@Z @ 0x1C00211F0 (-PmQueryStorageProperty@@YAJPEAU_DEVICE_EXTENSION@@W4_STORAGE_PROPERTY_ID@@KPEAPEAX@Z.c)
 *     ?Control@PM_DISK@@UEAAJKPEAXK0K@Z @ 0x1C0021320 (-Control@PM_DISK@@UEAAJKPEAXK0K@Z.c)
 *     ?PmCollectTelemetry@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAU_DISK_TELEMETRY_INFO@@@Z @ 0x1C0021608 (-PmCollectTelemetry@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAU_DISK_TELEMETRY_INFO@@@Z.c)
 *     ?PmGetHybridInfo@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAU_SRB_IO_CONTROL_HYBRID@@@Z @ 0x1C0022D20 (-PmGetHybridInfo@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAU_SRB_IO_CONTROL_HYBRID@@@Z.c)
 *     PmIoctlPassThroughQuerySectorWriteAta @ 0x1C00236F6 (PmIoctlPassThroughQuerySectorWriteAta.c)
 *     PmIoctlPassThroughQuerySectorWriteScsi @ 0x1C0023976 (PmIoctlPassThroughQuerySectorWriteScsi.c)
 *     PmIoctlDsmQuerySectorWrite @ 0x1C0025660 (PmIoctlDsmQuerySectorWrite.c)
 *     ?PmConstructDeviceLocationVhd@@YAJPEAU_DEVICE_EXTENSION@@@Z @ 0x1C0026718 (-PmConstructDeviceLocationVhd@@YAJPEAU_DEVICE_EXTENSION@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall PmSendDeviceControl(
        PDEVICE_OBJECT DeviceObject,
        ULONG IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        BOOLEAN InternalDeviceIoControl)
{
  IRP *v11; // rax
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v11 = IoBuildDeviceIoControlRequest(
          IoControlCode,
          DeviceObject,
          InputBuffer,
          InputBufferLength,
          OutputBuffer,
          OutputBufferLength,
          InternalDeviceIoControl,
          &Event,
          &IoStatusBlock);
  if ( !v11 )
    return -1073741670;
  result = IofCallDriver(DeviceObject, v11);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}
