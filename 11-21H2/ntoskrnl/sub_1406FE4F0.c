/*
 * XREFs of sub_1406FE4F0 @ 0x1406FE4F0
 * Callers:
 *     sub_1406FE210 @ 0x1406FE210 (sub_1406FE210.c)
 *     FsRtlAcquireFileExclusive @ 0x1406FE2E0 (FsRtlAcquireFileExclusive.c)
 * Callees:
 *     sub_140288178 @ 0x140288178 (sub_140288178.c)
 *     sub_1402881A0 @ 0x1402881A0 (sub_1402881A0.c)
 *     sub_140288250 @ 0x140288250 (sub_140288250.c)
 *     sub_1402885A0 @ 0x1402885A0 (sub_1402885A0.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x140288630 (IoGetBaseFileSystemDeviceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x14036B850 (IoGetDeviceAttachmentBaseRef.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1406FE4F0(
        PFILE_OBJECT FileObject,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        struct _DEVICE_OBJECT *a6)
{
  int v8; // ebx
  PDEVICE_OBJECT *v9; // rdi
  char v10; // r15
  PDEVICE_OBJECT RelatedDeviceObject; // rbp
  __int64 v12; // rdx
  __int64 v13; // r9
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r13
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  PDRIVER_EXTENSION DriverExtension; // rax
  PDRIVER_ADD_DEVICE AddDevice; // r14
  __int64 result; // rax
  struct _KTHREAD *v20; // rax
  int v21; // eax
  struct _KTHREAD *CurrentThread; // rax
  char v23; // bp
  struct _DRIVER_OBJECT *v24; // rax
  PVOID FsContext; // rax
  struct _ERESOURCE *v26; // rcx
  int v27; // [rsp+30h] [rbp-2B8h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-2B4h]
  unsigned int v29; // [rsp+38h] [rbp-2B0h]
  struct _DEVICE_OBJECT *v30; // [rsp+40h] [rbp-2A8h]
  struct _FAST_IO_DISPATCH *v31; // [rsp+48h] [rbp-2A0h]
  PDEVICE_OBJECT v32[72]; // [rsp+50h] [rbp-298h] BYREF

  v28 = a3;
  v30 = a6;
  v29 = a4;
  memset(v32, 0, 0x238uLL);
  v8 = 0;
  v9 = v32;
  v27 = 0;
  v10 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  DriverExtension = DriverObject->DriverExtension;
  v31 = FastIoDispatch;
  AddDevice = DriverExtension[1].AddDevice;
  if ( AddDevice
    && (*(_DWORD *)AddDevice >= 0x10u && *((_QWORD *)AddDevice + 1)
     || *(_DWORD *)AddDevice >= 0x18u && *((_QWORD *)AddDevice + 2)) )
  {
    v10 = 1;
  }
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v10 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = 0LL;
    --*((_WORD *)CurrentThread + 242);
    goto LABEL_30;
  }
  if ( a2 == 1 )
    LOBYTE(v8) = 1;
  result = sub_1402885A0((__int64)v32, 255, (__int64)RelatedDeviceObject, v13, (__int64)FileObject, v8);
  if ( (int)result >= 0 )
  {
    v32[4] = v30;
    v32[5] = (PDEVICE_OBJECT)__PAIR64__(a5, v29);
    v32[3] = (PDEVICE_OBJECT)__PAIR64__(v28, a2);
    v20 = KeGetCurrentThread();
    --*((_WORD *)v20 + 242);
    v21 = sub_140288250((__int64)v32, v8, v8, &v27);
    v8 = v21;
    if ( v21 < 0 )
    {
LABEL_13:
      if ( v8 == -1073741808 && (v27 & 1) != 0 )
      {
        FsContext = FileObject->FsContext;
        if ( FsContext )
        {
          v26 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
          if ( v26 )
            ExAcquireResourceExclusiveLite(v26, 1u);
        }
        v8 = 0;
      }
      if ( v9 )
      {
        if ( *((_WORD *)v9 + 37) )
          sub_1402881A0((__int64)v32, v8);
        sub_140288178((__int64)v32);
      }
      if ( v8 < 0 )
        KeLeaveCriticalRegion();
      return (unsigned int)v8;
    }
    if ( v21 )
    {
      v8 = 0;
      if ( v21 != 294 )
        v8 = v21;
      goto LABEL_13;
    }
    FileObject = (PFILE_OBJECT)v32[2];
    if ( ((__int64)v32[8] & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(v32[1]);
      v23 = 1;
      v24 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v24->FastIoDispatch;
      AddDevice = v24->DriverExtension[1].AddDevice;
      goto LABEL_31;
    }
    FastIoDispatch = v31;
LABEL_30:
    v23 = 0;
LABEL_31:
    if ( !AddDevice
      || (*(_DWORD *)AddDevice < 0x10u || !*((_QWORD *)AddDevice + 1))
      && (*(_DWORD *)AddDevice < 0x18u || !*((_QWORD *)AddDevice + 2)) )
    {
      if ( FastIoDispatch
        && FastIoDispatch->SizeOfFastIoDispatch >= 0x60
        && FastIoDispatch->AcquireFileForNtCreateSection )
      {
        sub_14042A5E0(FileObject, v12);
      }
      else
      {
        v8 = -1073741808;
      }
      v27 |= 1u;
    }
    if ( v23 )
      ObfDereferenceObject(BaseFileSystemDeviceObject);
    goto LABEL_13;
  }
  return result;
}
