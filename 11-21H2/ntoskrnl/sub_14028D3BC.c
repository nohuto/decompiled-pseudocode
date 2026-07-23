/*
 * XREFs of sub_14028D3BC @ 0x14028D3BC
 * Callers:
 *     sub_14028B330 @ 0x14028B330 (sub_14028B330.c)
 *     sub_14028C230 @ 0x14028C230 (sub_14028C230.c)
 * Callees:
 *     sub_140288178 @ 0x140288178 (sub_140288178.c)
 *     sub_1402881A0 @ 0x1402881A0 (sub_1402881A0.c)
 *     sub_140288250 @ 0x140288250 (sub_140288250.c)
 *     sub_1402885A0 @ 0x1402885A0 (sub_1402885A0.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x140288630 (IoGetBaseFileSystemDeviceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x14036B850 (IoGetDeviceAttachmentBaseRef.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_14028D3BC(PFILE_OBJECT FileObject, struct _ERESOURCE *a2)
{
  signed int v3; // ebx
  PDEVICE_OBJECT *v4; // r15
  char v5; // r12
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // rsi
  __int64 v7; // r9
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // r14
  PDRIVER_ADD_DEVICE AddDevice; // rdi
  struct _ERESOURCE *v11; // r12
  int v12; // eax
  signed int v13; // ecx
  struct _DRIVER_OBJECT *v14; // rax
  char v15; // [rsp+30h] [rbp-D0h]
  int v16; // [rsp+34h] [rbp-CCh] BYREF
  PERESOURCE Resource; // [rsp+38h] [rbp-C8h]
  PDEVICE_OBJECT RelatedDeviceObject; // [rsp+40h] [rbp-C0h]
  PDEVICE_OBJECT v19[72]; // [rsp+50h] [rbp-B0h] BYREF

  Resource = a2;
  memset(v19, 0, 0x238uLL);
  v3 = 0;
  v4 = v19;
  v16 = 0;
  v15 = 0;
  v5 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  if ( AddDevice
    && (*(_DWORD *)AddDevice >= 0x60u && *((_QWORD *)AddDevice + 11)
     || *(_DWORD *)AddDevice >= 0x68u && *((_QWORD *)AddDevice + 12)) )
  {
    v5 = 1;
  }
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v5 )
  {
    v11 = Resource;
    v4 = 0LL;
    goto LABEL_11;
  }
  sub_1402885A0((__int64)v19, 252, (__int64)RelatedDeviceObject, v7, (__int64)FileObject, 0);
  v11 = Resource;
  v19[3] = (PDEVICE_OBJECT)Resource;
  v12 = sub_140288250((__int64)v19, 0, 1, &v16);
  v13 = 0;
  v3 = v12;
  if ( v12 >= 0 )
  {
    if ( v12 )
    {
      if ( v12 != 294 )
        v13 = v12;
      v3 = v13;
LABEL_23:
      if ( v3 >= 0 )
        goto LABEL_24;
      goto LABEL_36;
    }
    FileObject = (PFILE_OBJECT)v19[2];
    if ( ((__int64)v19[8] & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(v19[1]);
      v15 = 1;
      v14 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v14->FastIoDispatch;
      AddDevice = v14->DriverExtension[1].AddDevice;
    }
LABEL_11:
    if ( !AddDevice
      || (*(_DWORD *)AddDevice < 0x60u || !*((_QWORD *)AddDevice + 11))
      && (*(_DWORD *)AddDevice < 0x68u || !*((_QWORD *)AddDevice + 12)) )
    {
      if ( FastIoDispatch && FastIoDispatch->SizeOfFastIoDispatch >= 0xD0 && FastIoDispatch->ReleaseForModWrite )
        v3 = sub_14042A5E0(FileObject, v11);
      else
        v3 = -1073741808;
      v16 |= 1u;
    }
    if ( v15 )
      ObfDereferenceObject(BaseFileSystemDeviceObject);
    goto LABEL_23;
  }
LABEL_36:
  if ( (v16 & 1) != 0 )
  {
    ExReleaseResourceLite(v11);
    v3 = 0;
  }
LABEL_24:
  if ( v4 )
  {
    if ( *((_WORD *)v4 + 37) )
      sub_1402881A0((__int64)v19, v3);
    sub_140288178((__int64)v19);
  }
}
