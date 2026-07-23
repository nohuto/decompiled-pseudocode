/*
 * XREFs of FsRtlCopyWrite @ 0x14092D2C0
 * Callers:
 *     <none>
 * Callees:
 *     CcCopyWriteWontFlush @ 0x140229E10 (CcCopyWriteWontFlush.c)
 *     FsRtlIsNtstatusExpected @ 0x140247160 (FsRtlIsNtstatusExpected.c)
 *     CcCanIWrite @ 0x140283F40 (CcCanIWrite.c)
 *     IoSetTopLevelIrp @ 0x140288140 (IoSetTopLevelIrp.c)
 *     IoGetTopLevelIrp @ 0x140288160 (IoGetTopLevelIrp.c)
 *     CcZeroData @ 0x14029BD20 (CcZeroData.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     CcCopyWrite @ 0x140539DF0 (CcCopyWrite.c)
 */

BOOLEAN __stdcall FsRtlCopyWrite(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        BOOLEAN Wait,
        ULONG LockKey,
        PVOID Buffer,
        PIO_STATUS_BLOCK IoStatus,
        PDEVICE_OBJECT DeviceObject)
{
  ULONG_PTR v9; // rdi
  BOOLEAN v12; // r12
  char *FsContext; // r15
  __int64 v14; // rsi
  __int64 v15; // r14
  struct _KTHREAD *CurrentThread; // rax
  char v18; // r9
  LARGE_INTEGER v19; // rdi
  LONGLONG v20; // rbx
  char v21; // cl
  LONGLONG v22; // r8
  PLARGE_INTEGER v23; // rdx
  struct _ERESOURCE *v24; // rcx
  struct _ERESOURCE *v25; // rcx
  struct _ERESOURCE *v26; // rcx
  BOOLEAN v27; // [rsp+50h] [rbp-78h]
  char v28; // [rsp+51h] [rbp-77h]
  char v29; // [rsp+52h] [rbp-76h]
  LONGLONG v30; // [rsp+58h] [rbp-70h]
  LARGE_INTEGER EndOffset; // [rsp+60h] [rbp-68h] BYREF
  __int128 v32; // [rsp+68h] [rbp-60h]
  __int64 v33; // [rsp+78h] [rbp-50h]
  __int64 v34; // [rsp+80h] [rbp-48h]
  char *v35; // [rsp+88h] [rbp-40h]

  v9 = Length;
  v12 = 0;
  v27 = 1;
  v29 = 0;
  if ( FileOffset->LowPart != -1 || (v28 = 1, FileOffset->HighPart != -1) )
    v28 = 0;
  if ( IoGetTopLevelIrp() )
    return 0;
  FsContext = (char *)FileObject->FsContext;
  v35 = FsContext;
  if ( !CcCanIWrite(FileObject, v9, Wait, 0)
    || (FileObject->Flags & 0x10) != 0
    || !CcCopyWriteWontFlush(FileObject, FileOffset, v9) )
  {
    return 0;
  }
  IoStatus->Status = 0;
  *(_QWORD *)&v32 = v9;
  IoStatus->Information = v9;
  if ( !(_DWORD)v9 )
    return 1;
  v14 = 0LL;
  v33 = 0LL;
  v15 = 0LL;
  v34 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  if ( v28 || (signed __int64)(FileOffset->QuadPart + v9) > *((_QWORD *)FsContext + 5) )
  {
    if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), Wait) )
      goto LABEL_12;
    v18 = 0;
  }
  else
  {
    if ( !ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), Wait) )
    {
LABEL_12:
      sub_1402F9540((__int64)KeGetCurrentThread());
      return 0;
    }
    v18 = 1;
  }
  if ( v28 )
    v19 = *(LARGE_INTEGER *)(FsContext + 32);
  else
    v19 = *FileOffset;
  v20 = v19.QuadPart + v32;
  v30 = v19.QuadPart + v32;
  EndOffset = v19;
  if ( !FileObject->PrivateCacheMap )
    goto LABEL_33;
  v21 = FsContext[5];
  if ( !v21 )
    goto LABEL_33;
  v22 = *((_QWORD *)FsContext + 5);
  if ( v19.QuadPart >= v22 + 0x2000
    || 0x7FFFFFFFFFFFFFFFLL - v19.QuadPart < (__int64)v32
    || v20 > *((_QWORD *)FsContext + 3) )
  {
    goto LABEL_33;
  }
  if ( v18 && v20 > v22 )
  {
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
    if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), Wait) )
      goto LABEL_12;
    if ( v28 )
    {
      v19 = *(LARGE_INTEGER *)(FsContext + 32);
      EndOffset = v19;
      v20 = v19.QuadPart + v32;
      v30 = v19.QuadPart + v32;
    }
    if ( !FileObject->PrivateCacheMap || (v21 = FsContext[5]) == 0 || v20 > *((_QWORD *)FsContext + 3) )
    {
LABEL_33:
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
      goto LABEL_12;
    }
  }
  if ( v21 != 2 )
    goto LABEL_39;
  v32 = 0LL;
  v23 = FileOffset;
  if ( FileOffset->QuadPart == -1 )
    v23 = (PLARGE_INTEGER)(FsContext + 32);
  if ( (unsigned __int8)sub_14042A5E0(FileObject, v23) )
  {
LABEL_39:
    if ( v20 > *((_QWORD *)FsContext + 4) )
    {
      v29 = 1;
      v14 = *((_QWORD *)FsContext + 4);
      v33 = v14;
      v15 = *((_QWORD *)FsContext + 5);
      v34 = v15;
      if ( *((_DWORD *)FsContext + 9) == HIDWORD(v30) || (v24 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
      {
        *((_QWORD *)FsContext + 4) = v20;
      }
      else
      {
        ExAcquireResourceExclusiveLite(v24, 1u);
        *((_QWORD *)FsContext + 4) = v20;
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
      }
    }
    IoSetTopLevelIrp((PIRP)4);
    if ( v19.QuadPart > *((_QWORD *)FsContext + 5) )
      v27 = CcZeroData(FileObject, (PLARGE_INTEGER)FsContext + 5, &EndOffset, Wait);
    if ( v27 )
      v27 = CcCopyWrite(FileObject, &EndOffset, Length, Wait, Buffer);
    IoSetTopLevelIrp(0LL);
    if ( v27 )
    {
      if ( v20 > *((_QWORD *)FsContext + 5) )
      {
        if ( *((_DWORD *)FsContext + 11) == HIDWORD(v30)
          || (v25 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
        {
          *((_QWORD *)FsContext + 5) = v20;
        }
        else
        {
          ExAcquireResourceExclusiveLite(v25, 1u);
          *((_QWORD *)FsContext + 5) = v20;
          ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
        }
      }
      FileObject->Flags |= 0x1000u;
      if ( v29 )
      {
        *((_QWORD *)FileObject->SectionObjectPointer->SharedCacheMap + 1) = v20;
        FileObject->Flags |= 0x2000u;
      }
      FileObject->CurrentByteOffset.QuadPart = v19.QuadPart + Length;
    }
    else if ( v29 )
    {
      v26 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
      if ( v26 )
      {
        ExAcquireResourceExclusiveLite(v26, 1u);
        *((_QWORD *)FsContext + 4) = v14;
        *((_QWORD *)FsContext + 5) = v15;
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
      }
      else
      {
        *((_QWORD *)FsContext + 4) = v14;
        *((_QWORD *)FsContext + 5) = v15;
      }
    }
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
    v12 = v27;
  }
  else
  {
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
  }
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v12;
}
