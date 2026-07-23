/*
 * XREFs of sub_1409D71F0 @ 0x1409D71F0
 * Callers:
 *     sub_1405FB7C0 @ 0x1405FB7C0 (sub_1405FB7C0.c)
 *     sub_1409D64F8 @ 0x1409D64F8 (sub_1409D64F8.c)
 *     sub_1409D7D54 @ 0x1409D7D54 (sub_1409D7D54.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1402A0800 (IoSetThreadHardErrorMode.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateFile @ 0x14041C200 (ZwCreateFile.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407103B0 @ 0x1407103B0 (sub_1407103B0.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall sub_1409D71F0(__int64 a1, _QWORD *a2, PDEVICE_OBJECT *a3)
{
  BOOLEAN v6; // si
  int v7; // edi
  NTSTATUS v8; // eax
  PVOID v9; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  int v12; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE FileHandle; // [rsp+68h] [rbp-98h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v17[528]; // [rsp+C0h] [rbp-40h] BYREF

  v12 = 0;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v17, 0, 0x208uLL);
  FileHandle = 0LL;
  v6 = IoSetThreadHardErrorMode(0);
  v7 = sub_1407103B0(*(char **)(a1 + 8), (__int64)v17, 0x208u, &v12);
  if ( v7 >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v17;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwCreateFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x20u, 0LL, 0);
    if ( v7 >= 0 )
    {
      Object = 0LL;
      v8 = ObReferenceObjectByHandle(FileHandle, 3u, 0LL, 0, &Object, 0LL);
      v9 = Object;
      v7 = v8;
      if ( v8 < 0 )
      {
        if ( Object )
          ObfDereferenceObject(Object);
      }
      else
      {
        RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)Object);
        *a2 = v9;
        *a3 = RelatedDeviceObject;
      }
    }
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  IoSetThreadHardErrorMode(v6);
  return (unsigned int)v7;
}
