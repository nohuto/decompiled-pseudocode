/*
 * XREFs of FsRtlPrepareMdlWriteDev @ 0x14092DCF0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlIsNtstatusExpected @ 0x140247160 (FsRtlIsNtstatusExpected.c)
 *     CcPrepareMdlWrite @ 0x140253190 (CcPrepareMdlWrite.c)
 *     CcCanIWrite @ 0x140283F40 (CcCanIWrite.c)
 *     IoSetTopLevelIrp @ 0x140288140 (IoSetTopLevelIrp.c)
 *     IoGetTopLevelIrp @ 0x140288160 (IoGetTopLevelIrp.c)
 *     CcZeroData @ 0x14029BD20 (CcZeroData.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

BOOLEAN __stdcall FsRtlPrepareMdlWriteDev(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG LockKey,
        PMDL *MdlChain,
        PIO_STATUS_BLOCK IoStatus,
        PDEVICE_OBJECT DeviceObject)
{
  __int64 v9; // rsi
  __int64 v10; // r14
  char v11; // di
  char *FsContext; // r15
  struct _KTHREAD *CurrentThread; // rax
  char v15; // r9
  LARGE_INTEGER v16; // rdi
  LONGLONG v17; // rbx
  char v18; // cl
  struct _ERESOURCE *v19; // rcx
  struct _ERESOURCE *v20; // rcx
  struct _ERESOURCE *v21; // rcx
  BOOLEAN v22; // [rsp+50h] [rbp-68h]
  char v23; // [rsp+51h] [rbp-67h]
  char v24; // [rsp+52h] [rbp-66h]
  int v25; // [rsp+5Ch] [rbp-5Ch]
  LARGE_INTEGER EndOffset; // [rsp+60h] [rbp-58h] BYREF
  __int64 v27; // [rsp+68h] [rbp-50h]
  __int64 v28; // [rsp+70h] [rbp-48h]
  char *v29; // [rsp+78h] [rbp-40h]

  v9 = 0LL;
  v27 = 0LL;
  v10 = 0LL;
  v28 = 0LL;
  v22 = 1;
  v23 = 0;
  if ( FileOffset->LowPart != -1 || (v11 = 1, FileOffset->HighPart != -1) )
    v11 = 0;
  v24 = v11;
  if ( IoGetTopLevelIrp() || !CcCanIWrite(FileObject, Length, 1u, 0) || (FileObject->Flags & 0x10) != 0 )
    return 0;
  IoStatus->Status = 0;
  if ( !Length )
    return 1;
  FsContext = (char *)FileObject->FsContext;
  v29 = FsContext;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  if ( v11 || Length + FileOffset->QuadPart > *((_QWORD *)FsContext + 5) )
  {
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), 1u);
    v15 = 0;
  }
  else
  {
    ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), 1u);
    v15 = 1;
  }
  if ( v11 )
    v16 = *(LARGE_INTEGER *)(FsContext + 32);
  else
    v16 = *FileOffset;
  v17 = v16.QuadPart + Length;
  v25 = HIDWORD(v17);
  EndOffset = v16;
  if ( !FileObject->PrivateCacheMap )
    goto LABEL_51;
  v18 = FsContext[5];
  if ( !v18 || 0x7FFFFFFFFFFFFFFFLL - v16.QuadPart < Length || v17 > *((_QWORD *)FsContext + 3) )
    goto LABEL_51;
  if ( v15 && v17 > *((_QWORD *)FsContext + 5) )
  {
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), 1u);
    if ( v24 )
    {
      v16 = *(LARGE_INTEGER *)(FsContext + 32);
      EndOffset = v16;
      v17 = v16.QuadPart + Length;
      v25 = HIDWORD(v17);
    }
    if ( !FileObject->PrivateCacheMap )
      goto LABEL_51;
    v18 = FsContext[5];
    if ( !v18 || v17 > *((_QWORD *)FsContext + 3) )
      goto LABEL_51;
  }
  if ( v18 == 2 && !(unsigned __int8)sub_14042A5E0(FileObject, FileOffset) )
  {
LABEL_51:
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
    sub_1402F9540((__int64)KeGetCurrentThread());
    return 0;
  }
  if ( v17 > *((_QWORD *)FsContext + 4) )
  {
    v23 = 1;
    v9 = *((_QWORD *)FsContext + 4);
    v27 = v9;
    v10 = *((_QWORD *)FsContext + 5);
    v28 = v10;
    if ( *((_DWORD *)FsContext + 9) == v25 || (v19 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
    {
      *((_QWORD *)FsContext + 4) = v17;
    }
    else
    {
      ExAcquireResourceExclusiveLite(v19, 1u);
      *((_QWORD *)FsContext + 4) = v17;
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
    }
  }
  IoSetTopLevelIrp((PIRP)4);
  if ( v16.QuadPart > *((_QWORD *)FsContext + 5) )
    v22 = CcZeroData(FileObject, (PLARGE_INTEGER)FsContext + 5, &EndOffset, 1u);
  if ( v22 )
    CcPrepareMdlWrite(FileObject, &EndOffset, Length, MdlChain, IoStatus);
  IoSetTopLevelIrp(0LL);
  if ( v22 )
  {
    if ( v17 > *((_QWORD *)FsContext + 5) )
    {
      if ( *((_DWORD *)FsContext + 11) == v25 || (v20 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
      {
        *((_QWORD *)FsContext + 5) = v17;
      }
      else
      {
        ExAcquireResourceExclusiveLite(v20, 1u);
        *((_QWORD *)FsContext + 5) = v17;
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
      }
    }
    FileObject->Flags |= 0x1000u;
    if ( v23 )
    {
      *((_QWORD *)FileObject->SectionObjectPointer->SharedCacheMap + 1) = v17;
      FileObject->Flags |= 0x2000u;
    }
  }
  else if ( v23 )
  {
    v21 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
    if ( v21 )
    {
      ExAcquireResourceExclusiveLite(v21, 1u);
      *((_QWORD *)FsContext + 4) = v9;
      *((_QWORD *)FsContext + 5) = v10;
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
    }
    else
    {
      *((_QWORD *)FsContext + 4) = v9;
      *((_QWORD *)FsContext + 5) = v10;
    }
  }
  ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v22;
}
