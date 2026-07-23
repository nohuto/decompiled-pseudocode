/*
 * XREFs of FsRtlReleaseFileForModWrite @ 0x1402F4D0C
 * Callers:
 *     MiGatherMappedPages @ 0x140297FB4 (MiGatherMappedPages.c)
 *     MiWriteComplete @ 0x1402F45B0 (MiWriteComplete.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14022F620 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x1402A20E0 (IoGetBaseFileSystemDeviceObject.c)
 *     FsFilterCtrlInit @ 0x1402A2120 (FsFilterCtrlInit.c)
 *     FsFilterPerformCompletionCallbacks @ 0x1402A21B0 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x1402A2240 (FsFilterPerformCallbacks.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140302D18 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     FsFilterFreeCompletionStack @ 0x14045F6DA (FsFilterFreeCompletionStack.c)
 */

void __fastcall FsRtlReleaseFileForModWrite(PFILE_OBJECT FileObject, struct _ERESOURCE *a2)
{
  signed int v3; // ebx
  _QWORD *v4; // r15
  char v5; // r12
  __int64 v6; // r9
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r14
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // rsi
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
  _QWORD v20[72]; // [rsp+50h] [rbp-B0h] BYREF

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
  FsFilterCtrlInit((__int64)v20, 252, (__int64)RelatedDeviceObject, v6, (__int64)FileObject, 0);
  v11 = Resource;
  v20[3] = Resource;
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
    if ( (v20[8] & 4) != 0 )
    {
      BaseFileSystemDeviceObject = (PDEVICE_OBJECT)IoGetDeviceAttachmentBaseRefWithTag(v20[1], 1953261124LL);
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
      ObfDereferenceObjectWithTag(BaseFileSystemDeviceObject, 0x746C6644u);
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
    if ( (v20[8] & 1) != 0 )
      FsFilterFreeCompletionStack(v20);
  }
}
