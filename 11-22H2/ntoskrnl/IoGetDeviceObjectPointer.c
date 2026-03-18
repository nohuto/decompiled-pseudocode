/*
 * XREFs of IoGetDeviceObjectPointer @ 0x14075B770
 * Callers:
 *     DifIoGetDeviceObjectPointerWrapper @ 0x1405DF7D0 (DifIoGetDeviceObjectPointerWrapper.c)
 *     IopOpenSystemVariableDevice @ 0x14068779C (IopOpenSystemVariableDevice.c)
 *     NtApphelpCacheControl @ 0x14068E760 (NtApphelpCacheControl.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140702150 (IoVolumeDeviceNameToGuidPath.c)
 *     IoVolumeDeviceToDosName @ 0x14075B4A0 (IoVolumeDeviceToDosName.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x140933870 (HalpDynamicDeviceInterfaceNotification.c)
 *     PopRegisterCoolingExtensionProtection @ 0x140983344 (PopRegisterCoolingExtensionProtection.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x140994684 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     VhdiMountVhdFile @ 0x140A7328C (VhdiMountVhdFile.c)
 *     IopStoreBootDriveLetter @ 0x140B3CE40 (IopStoreBootDriveLetter.c)
 *     IopCreateArcNamesDisk @ 0x140B3D164 (IopCreateArcNamesDisk.c)
 *     IopCreateArcNamesCd @ 0x140B3D2CC (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140B94A0C (IopGetBootDiskInformation.c)
 *     SbpAddTransportToInstance @ 0x140B9C95C (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140B9CB50 (SbpStartLanman.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14022F530 (IoGetRelatedDeviceObject.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwOpenFile @ 0x14041AD00 (ZwOpenFile.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall IoGetDeviceObjectPointer(
        PUNICODE_STRING ObjectName,
        ACCESS_MASK DesiredAccess,
        PFILE_OBJECT *FileObject,
        PDEVICE_OBJECT *DeviceObject)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ebx
  struct _FILE_OBJECT *v8; // rcx
  PVOID Object; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  HANDLE FileHandle; // [rsp+90h] [rbp+10h] BYREF

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  IoStatusBlock = 0LL;
  ObjectAttributes.ObjectName = ObjectName;
  ObjectAttributes.Attributes = IopCaseInsensitive != 0 ? 576 : 512;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = ZwOpenFile(&FileHandle, DesiredAccess, &ObjectAttributes, &IoStatusBlock, 3u, 0x40u);
  if ( v7 >= 0 )
  {
    Object = 0LL;
    v7 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    if ( v7 >= 0 )
    {
      v8 = (struct _FILE_OBJECT *)Object;
      *FileObject = (PFILE_OBJECT)Object;
      *DeviceObject = IoGetRelatedDeviceObject(v8);
    }
    ZwClose(FileHandle);
  }
  KeLeaveCriticalRegion();
  return v7;
}
