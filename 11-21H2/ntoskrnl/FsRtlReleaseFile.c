/*
 * XREFs of FsRtlReleaseFile @ 0x1406FE310
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x1402031E0 (FsRtlCreateSectionForDataScan.c)
 *     sub_140275338 @ 0x140275338 (sub_140275338.c)
 *     sub_140287C84 @ 0x140287C84 (sub_140287C84.c)
 *     sub_14028866C @ 0x14028866C (sub_14028866C.c)
 *     sub_140288760 @ 0x140288760 (sub_140288760.c)
 *     sub_1406F914C @ 0x1406F914C (sub_1406F914C.c)
 *     sub_1406FE0E4 @ 0x1406FE0E4 (sub_1406FE0E4.c)
 *     sub_1406FE8F4 @ 0x1406FE8F4 (sub_1406FE8F4.c)
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

void __stdcall FsRtlReleaseFile(PFILE_OBJECT FileObject)
{
  char v2; // si
  PDEVICE_OBJECT *v3; // r15
  unsigned int v4; // edi
  PDEVICE_OBJECT RelatedDeviceObject; // r12
  __int64 v6; // rdx
  __int64 v7; // r9
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r13
  struct _DRIVER_OBJECT *DriverObject; // rbx
  PFAST_IO_DISPATCH FastIoDispatch; // rbp
  PDRIVER_ADD_DEVICE AddDevice; // rbx
  bool v12; // al
  int v13; // eax
  char v14; // r12
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  struct _DRIVER_OBJECT *v16; // rbx
  PVOID FsContext; // rax
  struct _ERESOURCE *v18; // rcx
  int v19[4]; // [rsp+30h] [rbp-288h] BYREF
  PDEVICE_OBJECT v20[72]; // [rsp+40h] [rbp-278h] BYREF

  memset(v20, 0, 0x238uLL);
  v2 = 0;
  v3 = v20;
  v19[0] = 0;
  v4 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  v12 = AddDevice
     && (*(_DWORD *)AddDevice >= 0x20u && *((_QWORD *)AddDevice + 3)
      || *(_DWORD *)AddDevice >= 0x28u && *((_QWORD *)AddDevice + 4));
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v12 )
  {
    v3 = 0LL;
    goto LABEL_12;
  }
  sub_1402885A0((__int64)v20, 254, (__int64)RelatedDeviceObject, v7, (__int64)FileObject, 0);
  v13 = sub_140288250((__int64)v20, 0, 0, v19);
  v4 = v13;
  if ( v13 < 0 )
  {
    v2 = v19[0];
    goto LABEL_25;
  }
  if ( v13 )
  {
    if ( v13 == 294 )
      v4 = 0;
    goto LABEL_27;
  }
  FileObject = (PFILE_OBJECT)v20[2];
  if ( ((__int64)v20[8] & 4) == 0 )
  {
    v2 = v19[0];
LABEL_12:
    v14 = 0;
    goto LABEL_13;
  }
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v20[1]);
  v2 = v19[0];
  BaseFileSystemDeviceObject = DeviceAttachmentBaseRef;
  v14 = 1;
  v16 = DeviceAttachmentBaseRef->DriverObject;
  FastIoDispatch = v16->FastIoDispatch;
  AddDevice = v16->DriverExtension[1].AddDevice;
LABEL_13:
  if ( !AddDevice
    || (*(_DWORD *)AddDevice < 0x20u || !*((_QWORD *)AddDevice + 3))
    && (*(_DWORD *)AddDevice < 0x28u || !*((_QWORD *)AddDevice + 4)) )
  {
    if ( FastIoDispatch && FastIoDispatch->SizeOfFastIoDispatch >= 0x68 && FastIoDispatch->ReleaseFileForNtCreateSection )
      sub_14042A5E0(FileObject, v6);
    else
      v4 = -1073741808;
    v2 |= 1u;
  }
  if ( v14 )
    ObfDereferenceObject(BaseFileSystemDeviceObject);
LABEL_25:
  if ( v4 == -1073741808 && (v2 & 1) != 0 )
  {
    FsContext = FileObject->FsContext;
    if ( FsContext )
    {
      v18 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
      if ( v18 )
        ExReleaseResourceLite(v18);
    }
    v4 = 0;
  }
  if ( v3 )
  {
LABEL_27:
    if ( *((_WORD *)v3 + 37) )
      sub_1402881A0((__int64)v20, v4);
    sub_140288178((__int64)v20);
  }
  KeLeaveCriticalRegion();
}
