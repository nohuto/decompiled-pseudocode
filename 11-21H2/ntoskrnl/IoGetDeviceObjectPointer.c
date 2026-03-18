/*
 * XREFs of IoGetDeviceObjectPointer @ 0x140710E60
 * Callers:
 *     DifIoGetDeviceObjectPointerWrapper @ 0x14060F200 (DifIoGetDeviceObjectPointerWrapper.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14068BB80 (IoVolumeDeviceNameToGuidPath.c)
 *     IoVolumeDeviceToDosName @ 0x140710B90 (IoVolumeDeviceToDosName.c)
 *     NtApphelpCacheControl @ 0x140780D40 (NtApphelpCacheControl.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x140908CD0 (HalpDynamicDeviceInterfaceNotification.c)
 *     IopOpenSystemVariableDevice @ 0x14093F56C (IopOpenSystemVariableDevice.c)
 *     PopRegisterCoolingExtensionProtection @ 0x14098B980 (PopRegisterCoolingExtensionProtection.c)
 *     IopCreateArcNamesDisk @ 0x140B0E1A8 (IopCreateArcNamesDisk.c)
 *     IopCreateArcNamesCd @ 0x140B0E310 (IopCreateArcNamesCd.c)
 *     IopAssignBootDriveLetter @ 0x140B0EB5C (IopAssignBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140B4F04C (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x140B54AE4 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x140B55478 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140B55668 (SbpStartLanman.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
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
  ObjectAttributes.ObjectName = ObjectName;
  IoStatusBlock = 0LL;
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
