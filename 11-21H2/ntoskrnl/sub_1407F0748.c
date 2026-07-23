/*
 * XREFs of sub_1407F0748 @ 0x1407F0748
 * Callers:
 *     sub_140283C50 @ 0x140283C50 (sub_140283C50.c)
 *     sub_14038868C @ 0x14038868C (sub_14038868C.c)
 *     sub_14058A6D4 @ 0x14058A6D4 (sub_14058A6D4.c)
 *     sub_14058B0C8 @ 0x14058B0C8 (sub_14058B0C8.c)
 *     sub_1407F0478 @ 0x1407F0478 (sub_1407F0478.c)
 * Callees:
 *     sub_140288178 @ 0x140288178 (sub_140288178.c)
 *     sub_1402881A0 @ 0x1402881A0 (sub_1402881A0.c)
 *     sub_140288250 @ 0x140288250 (sub_140288250.c)
 *     sub_1402885A0 @ 0x1402885A0 (sub_1402885A0.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x140288630 (IoGetBaseFileSystemDeviceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x14036B850 (IoGetDeviceAttachmentBaseRef.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_1407F0748(PFILE_OBJECT FileObject)
{
  unsigned int v2; // ebx
  PDEVICE_OBJECT *v3; // r12
  char v4; // r13
  __int64 v5; // r9
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r14
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // rsi
  PDRIVER_ADD_DEVICE AddDevice; // rdi
  int v10; // eax
  char v11; // r13
  struct _DRIVER_OBJECT *v12; // rax
  PVOID FsContext; // rbx
  struct _ERESOURCE *v14; // rcx
  struct _ERESOURCE *v15; // rcx
  __int64 v16; // [rsp+38h] [rbp-D0h] BYREF
  PDEVICE_OBJECT RelatedDeviceObject; // [rsp+40h] [rbp-C8h]
  PDEVICE_OBJECT v18[72]; // [rsp+48h] [rbp-C0h] BYREF

  memset(v18, 0, 0x238uLL);
  v2 = 0;
  v3 = v18;
  HIDWORD(v16) = 0;
  v4 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  if ( AddDevice
    && (*(_DWORD *)AddDevice >= 0x40u && *((_QWORD *)AddDevice + 7)
     || *(_DWORD *)AddDevice >= 0x48u && *((_QWORD *)AddDevice + 8)) )
  {
    v4 = 1;
  }
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v4 )
  {
    v3 = 0LL;
    goto LABEL_10;
  }
  sub_1402885A0((__int64)v18, 250, (__int64)RelatedDeviceObject, v5, (__int64)FileObject, 0);
  v10 = sub_140288250((__int64)v18, 0, 1, (_DWORD *)&v16 + 1);
  v2 = v10;
  if ( v10 < 0 )
    goto LABEL_23;
  if ( !v10 )
  {
    FileObject = (PFILE_OBJECT)v18[2];
    if ( ((__int64)v18[8] & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(v18[1]);
      v11 = 1;
      v12 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v12->FastIoDispatch;
      AddDevice = v12->DriverExtension[1].AddDevice;
LABEL_11:
      if ( !AddDevice
        || (*(_DWORD *)AddDevice < 0x40u || !*((_QWORD *)AddDevice + 7))
        && (*(_DWORD *)AddDevice < 0x48u || !*((_QWORD *)AddDevice + 8)) )
      {
        if ( FastIoDispatch && FastIoDispatch->SizeOfFastIoDispatch >= 0xE0 && FastIoDispatch->ReleaseForCcFlush )
          v2 = sub_14042A5E0(FileObject, BaseFileSystemDeviceObject);
        else
          v2 = -1073741808;
        HIDWORD(v16) |= 1u;
      }
      if ( v11 )
        ObfDereferenceObject(BaseFileSystemDeviceObject);
      goto LABEL_23;
    }
LABEL_10:
    v11 = 0;
    goto LABEL_11;
  }
  v2 = 0;
  if ( v10 != 294 )
    v2 = v10;
LABEL_23:
  if ( v2 == -1073741808 && (v16 & 0x100000000LL) != 0 )
  {
    FsContext = FileObject->FsContext;
    v14 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
    if ( v14 )
      ExReleaseResourceLite(v14);
    v15 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
    if ( v15 )
      ExReleaseResourceLite(v15);
    v2 = 0;
  }
  if ( v3 )
  {
    if ( *((_WORD *)v3 + 37) )
      sub_1402881A0((__int64)v18, v2);
    sub_140288178((__int64)v18);
  }
  KeLeaveCriticalRegion();
}
