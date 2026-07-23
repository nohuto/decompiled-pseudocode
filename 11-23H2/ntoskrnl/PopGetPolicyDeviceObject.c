/*
 * XREFs of PopGetPolicyDeviceObject @ 0x14084D1C0
 * Callers:
 *     PopConnectToPolicyDevice @ 0x14084D050 (PopConnectToPolicyDevice.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14022F620 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwCreateFile @ 0x14041BB90 (ZwCreateFile.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 */

PDEVICE_OBJECT __fastcall PopGetPolicyDeviceObject(UNICODE_STRING *a1, PFILE_OBJECT *a2)
{
  PDEVICE_OBJECT v3; // rdi
  PFILE_OBJECT v4; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+17h] BYREF
  HANDLE FileHandle; // [rsp+C8h] [rbp+67h] BYREF
  PFILE_OBJECT FileObject; // [rsp+D8h] [rbp+77h] BYREF

  ObjectAttributes.ObjectName = a1;
  v3 = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  IoStatusBlock = 0LL;
  FileObject = 0LL;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreateFile(&FileHandle, 0x1F01FFu, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 3u, 1u, 0, 0LL, 0) >= 0 )
  {
    if ( (int)ObpReferenceObjectByHandleWithTag(
                (ULONG_PTR)FileHandle,
                0,
                (__int64)IoFileObjectType,
                0,
                0x64506F50u,
                &FileObject,
                0LL,
                0LL) >= 0 )
    {
      v4 = FileObject;
      RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
      v3 = RelatedDeviceObject;
      if ( RelatedDeviceObject )
      {
        ObfReferenceObjectWithTag(RelatedDeviceObject, 0x64506F50u);
        *a2 = v4;
        v4 = 0LL;
      }
      if ( v4 )
        ObfDereferenceObjectWithTag(v4, 0x64506F50u);
    }
    if ( FileHandle )
      ZwClose(FileHandle);
  }
  return v3;
}
