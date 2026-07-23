/*
 * XREFs of IoAttachDevice @ 0x140935E60
 * Callers:
 *     sub_14060CF40 @ 0x14060CF40 (sub_14060CF40.c)
 * Callees:
 *     IoAttachDeviceToDeviceStackSafe @ 0x14024FBE0 (IoAttachDeviceToDeviceStackSafe.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall IoAttachDevice(
        PDEVICE_OBJECT SourceDevice,
        PUNICODE_STRING TargetDevice,
        PDEVICE_OBJECT *AttachedDevice)
{
  NTSTATUS result; // eax
  int v6; // ebx
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rbx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE FileHandle; // [rsp+98h] [rbp+28h] BYREF
  PVOID Object; // [rsp+A8h] [rbp+38h] BYREF

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = TargetDevice;
  ObjectAttributes.Attributes = dword_140C0C628 != 0 ? 576 : 512;
  IoStatusBlock = 0LL;
  result = ZwOpenFile(&FileHandle, 0x80u, &ObjectAttributes, &IoStatusBlock, 0, 0x80000040);
  if ( result >= 0 )
  {
    Object = 0LL;
    v6 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    if ( v6 < 0 )
    {
      ZwClose(FileHandle);
    }
    else
    {
      RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)Object);
      ZwClose(FileHandle);
      v6 = IoAttachDeviceToDeviceStackSafe(SourceDevice, RelatedDeviceObject, AttachedDevice);
      ObfDereferenceObject(Object);
    }
    return v6;
  }
  return result;
}
