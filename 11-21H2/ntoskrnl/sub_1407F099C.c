/*
 * XREFs of sub_1407F099C @ 0x1407F099C
 * Callers:
 *     sub_140283C50 @ 0x140283C50 (sub_140283C50.c)
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
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14036B680 (ExIsResourceAcquiredSharedLite.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x14036B850 (IoGetDeviceAttachmentBaseRef.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1407F099C(PFILE_OBJECT FileObject)
{
  signed int v2; // ebx
  PDEVICE_OBJECT *v3; // rsi
  char v4; // r12
  __int64 v5; // r9
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r15
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // r14
  PDRIVER_ADD_DEVICE AddDevice; // rdi
  __int64 result; // rax
  struct _KTHREAD *v11; // rax
  int v12; // eax
  struct _DRIVER_OBJECT *v13; // rax
  PVOID FsContext; // rbx
  struct _ERESOURCE *v15; // rcx
  ULONG IsResourceAcquiredSharedLite; // eax
  struct _ERESOURCE *v17; // rcx
  struct _ERESOURCE *v18; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char v20; // [rsp+38h] [rbp-D0h]
  int v21; // [rsp+3Ch] [rbp-CCh] BYREF
  PDEVICE_OBJECT RelatedDeviceObject; // [rsp+40h] [rbp-C8h]
  PDEVICE_OBJECT v23[72]; // [rsp+48h] [rbp-C0h] BYREF

  memset(v23, 0, 0x238uLL);
  v2 = 0;
  v3 = v23;
  v21 = 0;
  v20 = 0;
  v4 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  if ( AddDevice
    && (*(_DWORD *)AddDevice >= 0x30u && *((_QWORD *)AddDevice + 5)
     || *(_DWORD *)AddDevice >= 0x38u && *((_QWORD *)AddDevice + 6)) )
  {
    v4 = 1;
  }
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v4 )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = 0LL;
    --*((_WORD *)CurrentThread + 242);
LABEL_12:
    if ( !AddDevice
      || (*(_DWORD *)AddDevice < 0x30u || !*((_QWORD *)AddDevice + 5))
      && (*(_DWORD *)AddDevice < 0x38u || !*((_QWORD *)AddDevice + 6)) )
    {
      if ( FastIoDispatch && FastIoDispatch->SizeOfFastIoDispatch >= 0xD8 && FastIoDispatch->AcquireForCcFlush )
        v2 = sub_14042A5E0(FileObject, BaseFileSystemDeviceObject);
      else
        v2 = -1073741808;
      v21 |= 1u;
    }
    if ( v20 )
      ObfDereferenceObject(BaseFileSystemDeviceObject);
    goto LABEL_24;
  }
  result = sub_1402885A0((__int64)v23, 251, (__int64)RelatedDeviceObject, v5, (__int64)FileObject, 1u);
  if ( (int)result < 0 )
    return result;
  v11 = KeGetCurrentThread();
  --*((_WORD *)v11 + 242);
  v12 = sub_140288250((__int64)v23, 1, 1, &v21);
  v2 = v12;
  if ( v12 >= 0 )
  {
    if ( v12 )
    {
      v2 = 0;
      if ( v12 != 294 )
        v2 = v12;
      goto LABEL_24;
    }
    FileObject = (PFILE_OBJECT)v23[2];
    if ( ((__int64)v23[8] & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(v23[1]);
      v20 = 1;
      v13 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v13->FastIoDispatch;
      AddDevice = v13->DriverExtension[1].AddDevice;
    }
    goto LABEL_12;
  }
LABEL_24:
  if ( v2 == -1073741808 && (v21 & 1) != 0 )
  {
    FsContext = FileObject->FsContext;
    v15 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
    if ( v15 )
    {
      IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(v15);
      v17 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
      if ( IsResourceAcquiredSharedLite )
        ExAcquireResourceSharedLite(v17, 1u);
      else
        ExAcquireResourceExclusiveLite(v17, 1u);
    }
    v18 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
    if ( v18 )
      ExAcquireResourceSharedLite(v18, 1u);
    v2 = 0;
  }
  if ( v3 )
  {
    if ( *((_WORD *)v3 + 37) )
      sub_1402881A0((__int64)v23, v2);
    sub_140288178((__int64)v23);
  }
  if ( v2 < 0 )
    KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
