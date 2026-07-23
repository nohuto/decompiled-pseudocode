/*
 * XREFs of sub_14028B12C @ 0x14028B12C
 * Callers:
 *     sub_14028B330 @ 0x14028B330 (sub_14028B330.c)
 * Callees:
 *     ExConvertExclusiveToSharedLite @ 0x140239790 (ExConvertExclusiveToSharedLite.c)
 *     sub_140288178 @ 0x140288178 (sub_140288178.c)
 *     sub_1402881A0 @ 0x1402881A0 (sub_1402881A0.c)
 *     sub_140288250 @ 0x140288250 (sub_140288250.c)
 *     sub_1402885A0 @ 0x1402885A0 (sub_1402885A0.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x140288630 (IoGetBaseFileSystemDeviceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x14036B850 (IoGetDeviceAttachmentBaseRef.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14039B280 (ExAcquireSharedWaitForExclusive.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14028B12C(PFILE_OBJECT FileObject, struct _DEVICE_OBJECT *a2, struct _DEVICE_OBJECT *a3)
{
  unsigned int v4; // ebx
  char v5; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // rsi
  __int64 v8; // r9
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // r14
  PDRIVER_ADD_DEVICE AddDevice; // rdi
  __int64 result; // rax
  struct _DEVICE_OBJECT *v13; // r13
  _QWORD *p_Type; // r12
  int v15; // eax
  char v16; // r13
  struct _DRIVER_OBJECT *v17; // rax
  PVOID FsContext; // rdi
  char v19; // dl
  __int64 v20; // rcx
  struct _ERESOURCE *v21; // rbx
  char v22; // si
  BOOLEAN v23; // al
  char v24; // cl
  struct _ERESOURCE *v25; // rcx
  int v26; // [rsp+34h] [rbp-CCh] BYREF
  struct _DEVICE_OBJECT *v27; // [rsp+38h] [rbp-C8h]
  struct _DEVICE_OBJECT *v28; // [rsp+40h] [rbp-C0h]
  PDEVICE_OBJECT *v29; // [rsp+48h] [rbp-B8h]
  PDEVICE_OBJECT v30[72]; // [rsp+50h] [rbp-B0h] BYREF

  v28 = a3;
  v27 = a2;
  memset(v30, 0, 0x238uLL);
  v4 = 0;
  v26 = 0;
  v29 = v30;
  v5 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  if ( AddDevice
    && (*(_DWORD *)AddDevice >= 0x50u && *((_QWORD *)AddDevice + 9)
     || *(_DWORD *)AddDevice >= 0x58u && *((_QWORD *)AddDevice + 10)) )
  {
    v5 = 1;
  }
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v5 )
  {
    p_Type = &v28->Type;
    v29 = 0LL;
    v16 = 0;
LABEL_12:
    if ( !AddDevice
      || (*(_DWORD *)AddDevice < 0x50u || !*((_QWORD *)AddDevice + 9))
      && (*(_DWORD *)AddDevice < 0x58u || !*((_QWORD *)AddDevice + 10)) )
    {
      if ( FastIoDispatch && FastIoDispatch->SizeOfFastIoDispatch >= 0x80 && FastIoDispatch->AcquireForModWrite )
        v4 = sub_14042A5E0(FileObject, v27);
      else
        v4 = -1073741808;
      v26 |= 1u;
    }
    if ( v16 )
      ObfDereferenceObject(BaseFileSystemDeviceObject);
    v13 = v27;
    goto LABEL_25;
  }
  result = sub_1402885A0((__int64)v30, 253, (__int64)RelatedDeviceObject, v8, (__int64)FileObject, 1u);
  if ( (int)result < 0 )
    return result;
  v13 = v27;
  p_Type = &v28->Type;
  v30[3] = v27;
  v30[4] = v28;
  v15 = sub_140288250((__int64)v30, 1, 1, &v26);
  v4 = v15;
  if ( v15 >= 0 )
  {
    if ( v15 )
    {
      v4 = 0;
      if ( v15 != 294 )
        v4 = v15;
      goto LABEL_25;
    }
    FileObject = (PFILE_OBJECT)v30[2];
    if ( ((__int64)v30[8] & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(v30[1]);
      v16 = 1;
      v17 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v17->FastIoDispatch;
      AddDevice = v17->DriverExtension[1].AddDevice;
    }
    else
    {
      v16 = 0;
    }
    goto LABEL_12;
  }
LABEL_25:
  if ( v4 == -1073741808 && (v26 & 1) != 0 )
  {
    FsContext = FileObject->FsContext;
    if ( *((_QWORD *)FsContext + 1) )
    {
      v19 = *((_BYTE *)FsContext + 4);
      if ( (v19 & 8) != 0
        || (v20 = *((_QWORD *)FsContext + 5), *(_QWORD *)&v13->Type > v20) && v20 != *((_QWORD *)FsContext + 4) )
      {
        v22 = 1;
      }
      else
      {
        if ( (v19 & 0x10) == 0 )
        {
          v21 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
          if ( v21 )
          {
            v22 = 0;
            goto LABEL_56;
          }
        }
        v22 = 0;
      }
      v21 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
      while ( 1 )
      {
LABEL_56:
        if ( v22 )
          v23 = ExAcquireResourceExclusiveLite(v21, 0);
        else
          v23 = ExAcquireSharedWaitForExclusive(v21, 0);
        if ( !v23 )
          goto LABEL_73;
        v24 = *((_BYTE *)FsContext + 4);
        if ( (v24 & 8) != 0 || *(_QWORD *)&v13->Type > *((_QWORD *)FsContext + 5) )
        {
          if ( v22 )
            goto LABEL_45;
        }
        else
        {
          if ( (v24 & 0x10) == 0 )
          {
            v25 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
            if ( !v25 || v21 == v25 )
            {
              if ( v22 )
LABEL_44:
                ExConvertExclusiveToSharedLite(v21);
            }
            else
            {
              v21 = 0LL;
              if ( ExAcquireSharedWaitForExclusive(v25, 0) )
                v21 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
              ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
              if ( !v21 )
              {
LABEL_73:
                v4 = -1073741608;
                goto LABEL_26;
              }
            }
LABEL_45:
            *p_Type = v21;
            goto LABEL_46;
          }
          if ( v22 )
            goto LABEL_44;
          if ( v21 == *((struct _ERESOURCE **)FsContext + 1) )
            goto LABEL_45;
        }
        ExReleaseResourceLite(v21);
        v21 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
        v22 = 1;
      }
    }
    *p_Type = 0LL;
LABEL_46:
    v4 = 0;
  }
LABEL_26:
  if ( v29 )
  {
    if ( *((_WORD *)v29 + 37) )
      sub_1402881A0((__int64)v30, v4);
    sub_140288178((__int64)v30);
  }
  return v4;
}
