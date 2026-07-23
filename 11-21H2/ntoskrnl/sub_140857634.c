/*
 * XREFs of sub_140857634 @ 0x140857634
 * Callers:
 *     sub_1408575AC @ 0x1408575AC (sub_1408575AC.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateFile @ 0x14041C200 (ZwCreateFile.c)
 *     IoVolumeDeviceToGuid @ 0x14068B980 (IoVolumeDeviceToGuid.c)
 *     IoVolumeDeviceToGuidPath @ 0x14068BA10 (IoVolumeDeviceToGuidPath.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407435A8 @ 0x1407435A8 (sub_1407435A8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140857634(__int64 a1, __int64 a2, struct _DEVICE_OBJECT *a3)
{
  int v5; // ebx
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp+17h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+67h] BYREF
  HANDLE FileHandle; // [rsp+E0h] [rbp+6Fh] BYREF

  FileHandle = 0LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  RtlInitUnicodeString(&DestinationString, 0LL);
  *(_QWORD *)(a1 + 16) = &qword_140D3D2A8;
  if ( a3 )
  {
    v5 = IoVolumeDeviceToGuid(a3, (GUID *)(a1 + 32));
    if ( v5 >= 0 )
    {
      v5 = IoVolumeDeviceToGuidPath(a3, (__int64)&DestinationString);
      if ( v5 >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 512;
        ObjectAttributes.ObjectName = &DestinationString;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v5 = ZwCreateFile(&FileHandle, 0x180u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x40u, 0LL, 0);
        if ( v5 >= 0 )
        {
          Object = 0LL;
          v5 = ObReferenceObjectByHandle(FileHandle, 0x180u, *(POBJECT_TYPE *)qword_140C49878, 0, &Object, 0LL);
          *(_QWORD *)(a1 + 48) = Object;
          if ( v5 >= 0 )
            v5 = 0;
        }
      }
    }
  }
  else
  {
    v5 = sub_1407435A8((UUID *)(a1 + 32));
    if ( v5 >= 0 )
      v5 = 0;
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  return (unsigned int)v5;
}
