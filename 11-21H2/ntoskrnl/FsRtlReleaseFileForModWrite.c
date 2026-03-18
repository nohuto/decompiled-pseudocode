/*
 * XREFs of FsRtlReleaseFileForModWrite @ 0x14028D3BC
 * Callers:
 *     MiGatherMappedPages @ 0x14028B330 (MiGatherMappedPages.c)
 *     MiWriteComplete @ 0x14028C230 (MiWriteComplete.c)
 * Callees:
 *     FsFilterCtrlFree @ 0x140288178 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x1402881A0 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x140288250 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x1402885A0 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x140288630 (IoGetBaseFileSystemDeviceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x14036B850 (IoGetDeviceAttachmentBaseRef.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall FsRtlReleaseFileForModWrite(PFILE_OBJECT FileObject, struct _ERESOURCE *a2)
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
  __int64 (__fastcall *ReleaseForModWrite)(PFILE_OBJECT, struct _ERESOURCE *, PDEVICE_OBJECT); // rax
  struct _DRIVER_OBJECT *v15; // rax
  char v16; // [rsp+30h] [rbp-D0h]
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  PERESOURCE Resource; // [rsp+38h] [rbp-C8h]
  PDEVICE_OBJECT RelatedDeviceObject; // [rsp+40h] [rbp-C0h]
  PDEVICE_OBJECT v20[72]; // [rsp+50h] [rbp-B0h] BYREF

  Resource = a2;
  memset(v20, 0, 0x238uLL);
  v3 = 0;
  v4 = v20;
  v17 = 0;
  v16 = 0;
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
  FsFilterCtrlInit((__int64)v20, 252, (__int64)RelatedDeviceObject, v7, (__int64)FileObject, 0);
  v11 = Resource;
  v20[3] = (PDEVICE_OBJECT)Resource;
  v12 = FsFilterPerformCallbacks((__int64)v20, 0, 1, &v17);
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
    FileObject = (PFILE_OBJECT)v20[2];
    if ( ((__int64)v20[8] & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(v20[1]);
      v16 = 1;
      v15 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v15->FastIoDispatch;
      AddDevice = v15->DriverExtension[1].AddDevice;
    }
LABEL_11:
    if ( !AddDevice
      || (*(_DWORD *)AddDevice < 0x60u || !*((_QWORD *)AddDevice + 11))
      && (*(_DWORD *)AddDevice < 0x68u || !*((_QWORD *)AddDevice + 12)) )
    {
      if ( FastIoDispatch
        && FastIoDispatch->SizeOfFastIoDispatch >= 0xD0
        && (ReleaseForModWrite = (__int64 (__fastcall *)(PFILE_OBJECT, struct _ERESOURCE *, PDEVICE_OBJECT))FastIoDispatch->ReleaseForModWrite) != 0LL )
      {
        v3 = ReleaseForModWrite(FileObject, v11, BaseFileSystemDeviceObject);
      }
      else
      {
        v3 = -1073741808;
      }
      v17 |= 1u;
    }
    if ( v16 )
      ObfDereferenceObject(BaseFileSystemDeviceObject);
    goto LABEL_23;
  }
LABEL_36:
  if ( (v17 & 1) != 0 )
  {
    ExReleaseResourceLite(v11);
    v3 = 0;
  }
LABEL_24:
  if ( v4 )
  {
    if ( *((_WORD *)v4 + 37) )
      FsFilterPerformCompletionCallbacks((__int64)v20, v3);
    FsFilterCtrlFree((__int64)v20);
  }
}
