/*
 * XREFs of FsRtlReleaseFile @ 0x140723B10
 * Callers:
 *     MiReferenceControlArea @ 0x140288548 (MiReferenceControlArea.c)
 *     CcDeleteSharedCacheMap @ 0x14029A250 (CcDeleteSharedCacheMap.c)
 *     CcWriteBehindPostProcess @ 0x14029B2C8 (CcWriteBehindPostProcess.c)
 *     CcZeroEndOfLastPage @ 0x1402A2578 (CcZeroEndOfLastPage.c)
 *     FsRtlCreateSectionForDataScan @ 0x140305390 (FsRtlCreateSectionForDataScan.c)
 *     MiCallCreateSectionFilters @ 0x140723950 (MiCallCreateSectionFilters.c)
 *     MiShareExistingControlArea @ 0x140723EDC (MiShareExistingControlArea.c)
 *     MiCreateNewSection @ 0x1407466E0 (MiCreateNewSection.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14022F620 (IoGetRelatedDeviceObject.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x1402A20E0 (IoGetBaseFileSystemDeviceObject.c)
 *     FsFilterCtrlInit @ 0x1402A2120 (FsFilterCtrlInit.c)
 *     FsFilterPerformCompletionCallbacks @ 0x1402A21B0 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x1402A2240 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlFree @ 0x1402A2558 (FsFilterCtrlFree.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140302D80 (IoGetDeviceAttachmentBaseRef.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __stdcall FsRtlReleaseFile(PFILE_OBJECT FileObject)
{
  char v2; // si
  PDEVICE_OBJECT *v3; // r15
  unsigned int v4; // edi
  char v5; // r13
  PDEVICE_OBJECT RelatedDeviceObject; // r12
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // rcx
  __int64 v8; // r9
  struct _DRIVER_OBJECT *DriverObject; // rbx
  PFAST_IO_DISPATCH FastIoDispatch; // rbp
  PDRIVER_ADD_DEVICE AddDevice; // rbx
  int v12; // eax
  PVOID v13; // r13
  char v14; // r12
  void (__fastcall *ReleaseFileForNtCreateSection)(PFILE_OBJECT); // rax
  PVOID FsContext; // rax
  struct _ERESOURCE *v17; // rcx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  struct _DRIVER_OBJECT *v19; // rbx
  int v20; // [rsp+30h] [rbp-288h] BYREF
  PVOID Object; // [rsp+38h] [rbp-280h]
  PDEVICE_OBJECT v22[72]; // [rsp+40h] [rbp-278h] BYREF

  memset(v22, 0, 0x238uLL);
  v2 = 0;
  v3 = v22;
  v20 = 0;
  v4 = 0;
  v5 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  Object = BaseFileSystemDeviceObject;
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  if ( AddDevice
    && (*(_DWORD *)AddDevice >= 0x20u && *((_QWORD *)AddDevice + 3)
     || *(_DWORD *)AddDevice >= 0x28u && *((_QWORD *)AddDevice + 4)) )
  {
    v5 = 1;
  }
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v5 )
  {
    v3 = 0LL;
    v13 = BaseFileSystemDeviceObject;
    goto LABEL_11;
  }
  FsFilterCtrlInit((__int64)v22, 254, (__int64)RelatedDeviceObject, v8, (__int64)FileObject, 0);
  v12 = FsFilterPerformCallbacks((__int64)v22, 0, 0, &v20);
  v4 = v12;
  if ( v12 < 0 )
  {
    v2 = v20;
    goto LABEL_24;
  }
  if ( v12 )
  {
    if ( v12 == 294 )
      v4 = 0;
    goto LABEL_26;
  }
  FileObject = (PFILE_OBJECT)v22[2];
  if ( ((__int64)v22[8] & 4) == 0 )
  {
    v2 = v20;
    v13 = Object;
LABEL_11:
    v14 = 0;
    goto LABEL_12;
  }
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v22[1]);
  v2 = v20;
  v13 = DeviceAttachmentBaseRef;
  v14 = 1;
  v19 = DeviceAttachmentBaseRef->DriverObject;
  FastIoDispatch = v19->FastIoDispatch;
  AddDevice = v19->DriverExtension[1].AddDevice;
LABEL_12:
  if ( !AddDevice
    || (*(_DWORD *)AddDevice < 0x20u || !*((_QWORD *)AddDevice + 3))
    && (*(_DWORD *)AddDevice < 0x28u || !*((_QWORD *)AddDevice + 4)) )
  {
    if ( FastIoDispatch
      && FastIoDispatch->SizeOfFastIoDispatch >= 0x68
      && (ReleaseFileForNtCreateSection = (void (__fastcall *)(PFILE_OBJECT))FastIoDispatch->ReleaseFileForNtCreateSection) != 0LL )
    {
      ReleaseFileForNtCreateSection(FileObject);
    }
    else
    {
      v4 = -1073741808;
    }
    v2 |= 1u;
  }
  if ( v14 )
    ObfDereferenceObject(v13);
LABEL_24:
  if ( v4 == -1073741808 && (v2 & 1) != 0 )
  {
    FsContext = FileObject->FsContext;
    if ( FsContext )
    {
      v17 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
      if ( v17 )
        ExReleaseResourceLite(v17);
    }
    v4 = 0;
  }
  if ( v3 )
  {
LABEL_26:
    if ( *((_WORD *)v3 + 37) )
      FsFilterPerformCompletionCallbacks((__int64)v22, v4);
    FsFilterCtrlFree((__int64)v22);
  }
  KeLeaveCriticalRegion();
}
