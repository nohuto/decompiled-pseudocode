/*
 * XREFs of FsRtlLookupPerFileObjectContext @ 0x14021C390
 * Callers:
 *     <none>
 * Callees:
 *     sub_14021C64C @ 0x14021C64C (sub_14021C64C.c)
 *     sub_14023642C @ 0x14023642C (sub_14023642C.c)
 *     sub_140259E60 @ 0x140259E60 (sub_140259E60.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029F350 @ 0x14029F350 (sub_14029F350.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

PFSRTL_PER_FILEOBJECT_CONTEXT __stdcall FsRtlLookupPerFileObjectContext(
        PFILE_OBJECT FileObject,
        PVOID OwnerId,
        PVOID InstanceId)
{
  _QWORD *FileObjectExtension; // rax
  __int64 v7; // rsi
  struct _KTHREAD *CurrentThread; // rax
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *v9; // r15
  struct _KTHREAD *v10; // rbp
  __int64 v11; // r14
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *Flink; // rcx
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *v18; // rsi
  ULONG_PTR v19; // rbx
  unsigned int v20; // edi
  struct _KTHREAD *v21; // rdx
  bool v22; // zf
  unsigned int v23; // eax
  unsigned int v24; // edi
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // [rsp+78h] [rbp+20h] BYREF

  if ( !FileObject )
    return 0LL;
  FileObjectExtension = FileObject->FileObjectExtension;
  if ( !FileObjectExtension )
    return 0LL;
  if ( FileObjectExtension == off_140C06A80 )
    return 0LL;
  v7 = FileObjectExtension[4];
  if ( !v7 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v9 = 0LL;
  v10 = KeGetCurrentThread();
  v11 = 0LL;
  _disable();
  v12 = *((unsigned __int8 *)v10 + 792);
  if ( *((_BYTE *)v10 + 792) || (v12 = sub_14029F6A8(v7, v10)) != 0 )
  {
    _BitScanForward((unsigned int *)&v13, v12);
    *((_BYTE *)v10 + 792) = v12 & ~(1 << v13);
    _enable();
    v11 = (__int64)v10 + 96 * v13 + 1696;
    if ( (unsigned __int64)(v7 - qword_140C50630) < 0x8000000000LL )
      v14 = sub_140287F30(*((_QWORD *)v10 + 23));
    else
      v14 = -1;
    *(_DWORD *)(v11 + 8) = v14;
    *(_QWORD *)v11 = v7 & 0x7FFFFFFFFFFFFFFCLL;
  }
  v15 = *(_DWORD *)(v7 + 8);
  if ( (v15 & 1) != 0 )
  {
    v16 = sub_14023642C(v15 & 0xFFFFFFF8, 0LL, v11, v7);
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
      sub_14029F350(v7, 0LL, v11, v7);
    v16 = v7 | 1;
  }
  if ( v11 )
    *(_BYTE *)(v11 + 18) = 1;
  Flink = *(struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(v7 + 16);
  v18 = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)(v7 + 16);
  if ( InstanceId )
  {
    if ( Flink != v18 )
    {
      while ( Flink->OwnerId != OwnerId || Flink->InstanceId != InstanceId )
      {
        Flink = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)Flink->Links.Flink;
        if ( Flink == v18 )
          goto LABEL_21;
      }
LABEL_20:
      v9 = Flink;
    }
  }
  else
  {
    if ( OwnerId )
    {
      if ( Flink == v18 )
        goto LABEL_21;
      while ( Flink->OwnerId != OwnerId )
      {
        Flink = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)Flink->Links.Flink;
        if ( Flink == v18 )
          goto LABEL_21;
      }
      goto LABEL_20;
    }
    if ( Flink != v18 )
      v9 = Flink;
  }
LABEL_21:
  v26 = 0LL;
  v19 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (v16 & 1) == 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v19, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v19);
    v19 = *(_QWORD *)(v19 + 8);
    goto LABEL_26;
  }
  _m_prefetchw((const void *)(v19 + 12));
  v20 = *(_DWORD *)(v19 + 12);
  if ( v20 >= 0x80000000 && (*(_DWORD *)(v19 + 8) & 3) == 0 )
  {
    if ( (unsigned __int16)v20 < (unsigned int)dword_140D05104 || (v20 & 0xF0000) >= 0xF0000 || KeGetCurrentIrql() >= 2u )
    {
      v20 = (v20 >> 2) & 0x3FF33FFF;
      *(_DWORD *)(v19 + 12) = v20;
    }
    else
    {
      sub_140259E60(v19);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v19, 0LL, 17LL) == 17 )
    goto LABEL_24;
  if ( (v20 & dword_140D0519C) != 0 )
  {
    sub_14021C64C(v19, 0LL);
    v23 = *(_DWORD *)(v19 + 12);
    if ( v23 < 0x80000000 )
      *(_DWORD *)(v19 + 12) = v23 + 0x100000;
    goto LABEL_26;
  }
  sub_14021C64C(v19, &v26);
  if ( v26 )
  {
    v24 = *(_DWORD *)(v19 + 12);
    if ( v24 < 0x80000000 )
    {
      v25 = v26 >> byte_140D05017;
      if ( v26 >> byte_140D05017 > 0x1FF )
        LODWORD(v25) = 511;
      v20 = v25 + v24;
LABEL_24:
      if ( v20 < 0x80000000 )
        *(_DWORD *)(v19 + 12) = v20 + 0x100000;
    }
  }
LABEL_26:
  sub_1402AFC00(v19);
  v21 = KeGetCurrentThread();
  v22 = (*((_WORD *)v21 + 242))++ == 0xFFFF;
  if ( v22 && *((struct _KTHREAD **)v21 + 19) != (struct _KTHREAD *)((char *)v21 + 152) && !*((_WORD *)v21 + 243) )
    KiCheckForKernelApcDelivery();
  return v9;
}
