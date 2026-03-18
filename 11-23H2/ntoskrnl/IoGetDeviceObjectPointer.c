/*
 * XREFs of IoGetDeviceObjectPointer @ 0x14075B260
 * Callers:
 *     DifIoGetDeviceObjectPointerWrapper @ 0x1405DF740 (DifIoGetDeviceObjectPointerWrapper.c)
 *     IopOpenSystemVariableDevice @ 0x14068779C (IopOpenSystemVariableDevice.c)
 *     NtApphelpCacheControl @ 0x14068E760 (NtApphelpCacheControl.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1407020A0 (IoVolumeDeviceNameToGuidPath.c)
 *     IoVolumeDeviceToDosName @ 0x14075AF90 (IoVolumeDeviceToDosName.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x1409338A0 (HalpDynamicDeviceInterfaceNotification.c)
 *     PopRegisterCoolingExtensionProtection @ 0x140983294 (PopRegisterCoolingExtensionProtection.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x1409945D4 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     VhdiMountVhdFile @ 0x140A7321C (VhdiMountVhdFile.c)
 *     IopStoreBootDriveLetter @ 0x140B39740 (IopStoreBootDriveLetter.c)
 *     IopCreateArcNamesDisk @ 0x140B39A64 (IopCreateArcNamesDisk.c)
 *     IopCreateArcNamesCd @ 0x140B39BCC (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140B93A0C (IopGetBootDiskInformation.c)
 *     SbpAddTransportToInstance @ 0x140B9B95C (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140B9BB50 (SbpStartLanman.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14022F510 (IoGetRelatedDeviceObject.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 *     ZwOpenFile @ 0x14041B3C0 (ZwOpenFile.c)
 *     ObReferenceObjectByHandle @ 0x1406E62C0 (ObReferenceObjectByHandle.c)
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
