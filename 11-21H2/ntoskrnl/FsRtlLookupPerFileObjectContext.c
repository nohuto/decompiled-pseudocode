/*
 * XREFs of FsRtlLookupPerFileObjectContext @ 0x14021C390
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLockSharedEx @ 0x14021C64C (ExfReleasePushLockSharedEx.c)
 *     ExpAcquireFannedOutPushLockShared @ 0x14023642C (ExpAcquireFannedOutPushLockShared.c)
 *     ExpTryExpandAutoExpandPushLock @ 0x140259E60 (ExpTryExpandAutoExpandPushLock.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029F350 (ExfAcquirePushLockSharedEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
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
  unsigned int AbEntrySummary; // eax
  __int64 v13; // rdx
  int SessionId; // eax
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
  if ( FileObjectExtension == IopRevocationExtension )
    return 0LL;
  v7 = FileObjectExtension[4];
  if ( !v7 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = 0LL;
  v10 = KeGetCurrentThread();
  v11 = 0LL;
  _disable();
  AbEntrySummary = v10->AbEntrySummary;
  if ( v10->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v7, v10)) != 0 )
  {
    _BitScanForward((unsigned int *)&v13, AbEntrySummary);
    v10->AbEntrySummary = AbEntrySummary & ~(1 << v13);
    _enable();
    v11 = (__int64)(&v10[1].Process + 12 * v13);
    if ( (unsigned __int64)(v7 - qword_140C50630) < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(v10->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v11 + 8) = SessionId;
    *(_QWORD *)v11 = v7 & 0x7FFFFFFFFFFFFFFCLL;
  }
  v15 = *(_DWORD *)(v7 + 8);
  if ( (v15 & 1) != 0 )
  {
    v16 = ExpAcquireFannedOutPushLockShared(v15 & 0xFFFFFFF8, 0LL, v11, v7);
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v7, 0LL, v11, v7);
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
    if ( (unsigned __int16)v20 < (unsigned int)ExpAeCycleCountThreshold
      || (v20 & 0xF0000) >= 0xF0000
      || KeGetCurrentIrql() >= 2u )
    {
      v20 = (v20 >> 2) & 0x3FF33FFF;
      *(_DWORD *)(v19 + 12) = v20;
    }
    else
    {
      ExpTryExpandAutoExpandPushLock(v19);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v19, 0LL, 17LL) == 17 )
    goto LABEL_24;
  if ( (v20 & ExpAeSamplingPeriodMask) != 0 )
  {
    ExfReleasePushLockSharedEx(v19, 0LL);
    v23 = *(_DWORD *)(v19 + 12);
    if ( v23 < 0x80000000 )
      *(_DWORD *)(v19 + 12) = v23 + 0x100000;
    goto LABEL_26;
  }
  ExfReleasePushLockSharedEx(v19, &v26);
  if ( v26 )
  {
    v24 = *(_DWORD *)(v19 + 12);
    if ( v24 < 0x80000000 )
    {
      v25 = v26 >> ExpAeCycleCountScaler;
      if ( v26 >> ExpAeCycleCountScaler > 0x1FF )
        LODWORD(v25) = 511;
      v20 = v25 + v24;
LABEL_24:
      if ( v20 < 0x80000000 )
        *(_DWORD *)(v19 + 12) = v20 + 0x100000;
    }
  }
LABEL_26:
  KeAbPostRelease(v19);
  v21 = KeGetCurrentThread();
  v22 = v21->KernelApcDisable++ == -1;
  if ( v22
    && ($CEA84C04E3712D858E5667A507841A2A *)v21->ApcState.ApcListHead[0].Flink != &v21->152
    && !v21->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v9;
}
