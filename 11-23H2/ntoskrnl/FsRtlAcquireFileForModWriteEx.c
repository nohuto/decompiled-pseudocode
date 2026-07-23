/*
 * XREFs of FsRtlAcquireFileForModWriteEx @ 0x14034A23C
 * Callers:
 *     MiGatherMappedPages @ 0x140297FB4 (MiGatherMappedPages.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14022F620 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x1402A20E0 (IoGetBaseFileSystemDeviceObject.c)
 *     FsFilterCtrlInit @ 0x1402A2120 (FsFilterCtrlInit.c)
 *     FsFilterPerformCompletionCallbacks @ 0x1402A21B0 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x1402A2240 (FsFilterPerformCallbacks.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140302D18 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ExConvertExclusiveToSharedLite @ 0x140347950 (ExConvertExclusiveToSharedLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1403C8B30 (ExAcquireSharedWaitForExclusive.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     FsFilterFreeCompletionStack @ 0x14045F6DA (FsFilterFreeCompletionStack.c)
 */

__int64 __fastcall FsRtlAcquireFileForModWriteEx(PFILE_OBJECT FileObject, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  char v5; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v7; // r9
  _QWORD *BaseFileSystemDeviceObject; // r14
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 result; // rax
  _QWORD *v13; // r13
  _QWORD *v14; // r12
  int v15; // eax
  char v16; // r13
  __int64 (__fastcall *v17)(PFILE_OBJECT, __int64, _QWORD *, _QWORD *); // rax
  __int64 v18; // rax
  PVOID FsContext; // rdi
  char v20; // dl
  __int64 v21; // rcx
  struct _ERESOURCE *v22; // rcx
  char v23; // si
  struct _ERESOURCE *v24; // rbx
  BOOLEAN i; // al
  char v26; // cl
  struct _ERESOURCE *v27; // rcx
  int v28; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v29; // [rsp+38h] [rbp-C8h]
  __int64 v30; // [rsp+40h] [rbp-C0h]
  __int64 *v31; // [rsp+48h] [rbp-B8h]
  __int64 v32[72]; // [rsp+50h] [rbp-B0h] BYREF

  v30 = a3;
  v29 = a2;
  memset(v32, 0, 0x238uLL);
  v4 = 0;
  v28 = 0;
  v31 = v32;
  v5 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  v9 = BaseFileSystemDeviceObject[1];
  v10 = *(_QWORD *)(v9 + 80);
  v11 = *(_QWORD *)(*(_QWORD *)(v9 + 48) + 48LL);
  if ( v11 && (*(_DWORD *)v11 >= 0x50u && *(_QWORD *)(v11 + 72) || *(_DWORD *)v11 >= 0x58u && *(_QWORD *)(v11 + 80)) )
    v5 = 1;
  if ( RelatedDeviceObject == (PDEVICE_OBJECT)BaseFileSystemDeviceObject && !v5 )
  {
    v14 = (_QWORD *)v30;
    v31 = 0LL;
    v16 = 0;
    goto LABEL_12;
  }
  result = FsFilterCtrlInit((__int64)v32, 253, (__int64)RelatedDeviceObject, v7, (__int64)FileObject, 1u);
  if ( (int)result < 0 )
    return result;
  v13 = (_QWORD *)v29;
  v14 = (_QWORD *)v30;
  v32[3] = v29;
  v32[4] = v30;
  v15 = FsFilterPerformCallbacks((__int64)v32, 1, 1, &v28);
  v4 = v15;
  if ( v15 >= 0 )
  {
    if ( !v15 )
    {
      FileObject = (PFILE_OBJECT)v32[2];
      if ( (v32[8] & 4) != 0 )
      {
        BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRefWithTag(v32[1], 0x746C6644u);
        v16 = 1;
        v18 = BaseFileSystemDeviceObject[1];
        v10 = *(_QWORD *)(v18 + 80);
        v11 = *(_QWORD *)(*(_QWORD *)(v18 + 48) + 48LL);
      }
      else
      {
        v16 = 0;
      }
LABEL_12:
      if ( !v11
        || (*(_DWORD *)v11 < 0x50u || !*(_QWORD *)(v11 + 72)) && (*(_DWORD *)v11 < 0x58u || !*(_QWORD *)(v11 + 80)) )
      {
        if ( v10
          && *(_DWORD *)v10 >= 0x80u
          && (v17 = *(__int64 (__fastcall **)(PFILE_OBJECT, __int64, _QWORD *, _QWORD *))(v10 + 120)) != 0LL )
        {
          v4 = v17(FileObject, v29, v14, BaseFileSystemDeviceObject);
        }
        else
        {
          v4 = -1073741808;
        }
        v28 |= 1u;
      }
      if ( v16 )
        ObfDereferenceObjectWithTag(BaseFileSystemDeviceObject, 0x746C6644u);
      v13 = (_QWORD *)v29;
      goto LABEL_25;
    }
    v4 = 0;
    if ( v15 != 294 )
      v4 = v15;
  }
LABEL_25:
  if ( v4 == -1073741808 && (v28 & 1) != 0 )
  {
    FsContext = FileObject->FsContext;
    if ( !*((_QWORD *)FsContext + 1) )
    {
      *v14 = 0LL;
LABEL_46:
      v4 = 0;
      goto LABEL_26;
    }
    v20 = *((_BYTE *)FsContext + 4);
    if ( (v20 & 8) != 0 || (v21 = *((_QWORD *)FsContext + 5), *v13 > v21) && v21 != *((_QWORD *)FsContext + 4) )
    {
      v23 = 1;
    }
    else
    {
      if ( (v20 & 0x10) == 0 )
      {
        v22 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
        if ( v22 )
        {
          v23 = 0;
LABEL_56:
          v24 = v22;
          if ( v23 )
            goto LABEL_58;
          for ( i = ExAcquireSharedWaitForExclusive(v22, 0); ; i = ExAcquireResourceExclusiveLite(v24, 0) )
          {
            if ( !i )
              goto LABEL_73;
            v26 = *((_BYTE *)FsContext + 4);
            if ( (v26 & 8) != 0 || *v13 > *((_QWORD *)FsContext + 5) )
            {
              if ( v23 )
                goto LABEL_45;
            }
            else
            {
              if ( (v26 & 0x10) == 0 )
              {
                v27 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
                if ( !v27 || v24 == v27 )
                {
                  if ( v23 )
LABEL_44:
                    ExConvertExclusiveToSharedLite(v24);
                }
                else
                {
                  v24 = 0LL;
                  if ( ExAcquireSharedWaitForExclusive(v27, 0) )
                    v24 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
                  ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
                  if ( !v24 )
                  {
LABEL_73:
                    v4 = -1073741608;
                    goto LABEL_26;
                  }
                }
LABEL_45:
                *v14 = v24;
                goto LABEL_46;
              }
              if ( v23 )
                goto LABEL_44;
              if ( v24 == *((struct _ERESOURCE **)FsContext + 1) )
                goto LABEL_45;
            }
            ExReleaseResourceLite(v24);
            v24 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
            v23 = 1;
LABEL_58:
            ;
          }
        }
      }
      v23 = 0;
    }
    v22 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
    goto LABEL_56;
  }
LABEL_26:
  if ( v31 )
  {
    if ( *((_WORD *)v31 + 37) )
      FsFilterPerformCompletionCallbacks((__int64)v32, v4);
    if ( (v32[8] & 1) != 0 )
      FsFilterFreeCompletionStack(v32);
  }
  return v4;
}
