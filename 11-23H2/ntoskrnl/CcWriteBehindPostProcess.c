/*
 * XREFs of CcWriteBehindPostProcess @ 0x14029B2C8
 * Callers:
 *     CcWriteBehindInternal @ 0x14029BA10 (CcWriteBehindInternal.c)
 *     CcWriteBehindAsync @ 0x14053A9D0 (CcWriteBehindAsync.c)
 *     CcCompleteAsyncWriteBehind @ 0x14053B9B8 (CcCompleteAsyncWriteBehind.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140299B34 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcScheduleLazyWriteScan @ 0x140299C88 (CcScheduleLazyWriteScan.c)
 *     CcDeleteSharedCacheMap @ 0x14029A250 (CcDeleteSharedCacheMap.c)
 *     CcShouldIssueVDLUpdate @ 0x14029B630 (CcShouldIssueVDLUpdate.c)
 *     CcWriteBehindReleaseFile @ 0x14029B6B8 (CcWriteBehindReleaseFile.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1402A1760 (CcReferenceSharedCacheMapFileObject.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402A2790 (ObFastDereferenceObjectDeferDelete.c)
 *     CcGetFlushedValidData @ 0x1402F0CE0 (CcGetFlushedValidData.c)
 *     CcIsFatalWriteError @ 0x1402F4538 (CcIsFatalWriteError.c)
 *     CcSetValidData @ 0x140354FC4 (CcSetValidData.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x140535650 (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcMmLogLostDelayedWriteError @ 0x140537DC4 (CcMmLogLostDelayedWriteError.c)
 *     FsRtlAcquireFileExclusive @ 0x140723AE0 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x140723B10 (FsRtlReleaseFile.c)
 */

char __fastcall CcWriteBehindPostProcess(__int64 a1, char a2)
{
  __int64 v3; // r14
  _DWORD *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // r12
  int valid; // esi
  _BYTE *v8; // rbx
  __int64 v9; // r8
  int v10; // eax
  unsigned __int64 OldIrql; // rbx
  struct _FILE_OBJECT *FileObject; // rsi
  int v13; // ecx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  char v17; // dl
  int v18; // eax
  unsigned __int64 v19; // rbx
  struct _FILE_OBJECT *v20; // rbx
  __int64 v21; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v25; // eax
  bool v26; // zf
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  _DWORD *v29; // r9
  int v30; // eax
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r11
  _DWORD *v33; // r10
  int v34; // eax
  unsigned __int64 v35; // rbx
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r9
  _DWORD *v38; // r8
  int v39; // eax
  _BYTE *v40; // rax
  char v41; // r9
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r9
  _DWORD *v44; // r8
  int v45; // eax
  KSPIN_LOCK *SpinLock; // [rsp+30h] [rbp-48h]
  _DWORD *v47; // [rsp+38h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v49; // [rsp+58h] [rbp-20h] BYREF
  char v50; // [rsp+C0h] [rbp+48h]
  char v51; // [rsp+C8h] [rbp+50h]
  LARGE_INTEGER FlushedValidData; // [rsp+D0h] [rbp+58h]
  __int64 v53; // [rsp+D8h] [rbp+60h]

  v51 = 0;
  v50 = 0;
  memset(&v49, 0, sizeof(v49));
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a2 )
    CcWriteBehindReleaseFile();
  v3 = *(_QWORD *)(a1 + 256);
  v4 = *(_DWORD **)(a1 + 112);
  v47 = v4;
  if ( *(_DWORD *)(v3 + 128) == 2 )
  {
    v5 = *(_QWORD *)(v3 + 16);
    v50 = *(_BYTE *)(v3 + 56);
    v53 = *(_QWORD *)(v5 + 536);
    if ( CcEnablePerVolumeLazyWriter )
      v6 = *(_QWORD *)(v5 + 600);
    else
      v6 = 0LL;
  }
  else
  {
    v5 = *(_QWORD *)(v3 + 24);
    v6 = *(_QWORD *)(v3 + 144);
    v53 = *(_QWORD *)(v3 + 136);
  }
  if ( *v4 != -2147483626 && (unsigned __int8)CcIsFatalWriteError(v5) )
  {
    v21 = CcReferenceSharedCacheMapFileObject(v5);
    CcMmLogLostDelayedWriteError(v21, (unsigned int)*v4);
    ObFastDereferenceObjectDeferDelete(v5 + 96, v21, 1666409283LL);
  }
  valid = 0;
  ExAcquireFastMutex((PFAST_MUTEX)(v5 + 288));
  FlushedValidData = *(LARGE_INTEGER *)(v5 + 40);
  if ( (unsigned __int8)CcShouldIssueVDLUpdate(v5) )
  {
    FlushedValidData = CcGetFlushedValidData(*(PSECTION_OBJECT_POINTERS *)(a1 + 24), 1u);
    if ( FlushedValidData.QuadPart >= *(_QWORD *)(v5 + 40) )
    {
      ExReleaseFastMutex((PFAST_MUTEX)(v5 + 288));
      v20 = (struct _FILE_OBJECT *)CcReferenceSharedCacheMapFileObject(v5);
      valid = CcSetValidData(v20);
      ObFastDereferenceObjectDeferDelete(v5 + 96, v20, 1666409283LL);
      ExAcquireFastMutex((PFAST_MUTEX)(v5 + 288));
      if ( valid < 0 )
      {
        if ( valid != -1073741670 && valid != -2147483626 && valid != -1073741740 )
          FlushedValidData = *(LARGE_INTEGER *)(v5 + 48);
      }
      else
      {
        *(LARGE_INTEGER *)(v5 + 40) = FlushedValidData;
      }
    }
  }
  ExReleaseFastMutex((PFAST_MUTEX)(v5 + 288));
  v8 = (_BYTE *)v53;
  SpinLock = (KSPIN_LOCK *)(v53 + 768);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v53 + 768), &LockHandle);
  v10 = *(_DWORD *)(v5 + 4);
  --*(_DWORD *)(v5 + 544);
  *(_DWORD *)(v5 + 4) = --v10;
  if ( !v10 )
  {
    if ( valid == -1073741740 || valid == -2147483626 || valid == -1073741670 )
    {
      if ( (*(_DWORD *)(v5 + 152) & 0x10000) != 0 )
        CcCancelMmWaitForUninitializeCacheMap(v5);
      if ( !*(_DWORD *)(v5 + 112) )
      {
        CcInsertIntoDirtySharedCacheMapList(v5);
        v17 = 1;
        goto LABEL_31;
      }
    }
    else
    {
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && CurrentIrql <= 0xFu
          && LockHandle.OldIrql <= 0xFu
          && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v26 = (v25 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v25;
          if ( v26 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
      FileObject = (struct _FILE_OBJECT *)CcReferenceSharedCacheMapFileObject(v5);
      FsRtlAcquireFileExclusive(FileObject);
      KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v49);
      KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
      v13 = *(_DWORD *)(v5 + 4);
      if ( !v13
        && (!*(_DWORD *)(v5 + 112)
         && (*(_QWORD *)(v5 + 40) == 0x7FFFFFFFFFFFFFFFLL
          || (*(_DWORD *)(v5 + 152) & 0x400) == 0
          || FlushedValidData.QuadPart >= *(_QWORD *)(v5 + 48))
         || !*(_QWORD *)(v5 + 8) && (*(_DWORD *)(v5 + 152) & 4) == 0) )
      {
        CcDeleteSharedCacheMap((_QWORD *)v5, (volatile signed __int64 **)&v49, (__int64)&LockHandle, 1, FileObject);
        *((_QWORD *)v47 + 1) = 0LL;
LABEL_18:
        if ( v50 )
          KeSetEvent((PRKEVENT)(v3 + 32), 0, 0);
        return 1;
      }
      if ( *(_DWORD *)(v5 + 112) )
      {
        if ( (*(_DWORD *)(v5 + 152) & 0x10000) != 0 )
          CcCancelMmWaitForUninitializeCacheMap(v5);
      }
      else if ( !v13 )
      {
        CcInsertIntoDirtySharedCacheMapList(v5);
        v51 = 1;
      }
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      v15 = LockHandle.OldIrql;
      if ( (_DWORD)KiIrqlFlags )
      {
        v27 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v27 <= 0xFu && LockHandle.OldIrql <= 0xFu && v27 >= 2u )
        {
          v28 = KeGetCurrentPrcb();
          v29 = v28->SchedulerAssist;
          v30 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v26 = (v30 & v29[5]) == 0;
          v29[5] &= v30;
          if ( v26 )
            KiRemoveSystemWorkPriorityKick(v28);
        }
      }
      __writecr8(v15);
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&v49);
      v16 = v49.OldIrql;
      if ( (_DWORD)KiIrqlFlags )
      {
        v31 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v31 <= 0xFu && v49.OldIrql <= 0xFu && v31 >= 2u )
        {
          v32 = KeGetCurrentPrcb();
          v33 = v32->SchedulerAssist;
          v34 = ~(unsigned __int16)(-1LL << (v49.OldIrql + 1));
          v26 = (v34 & v33[5]) == 0;
          v33[5] &= v34;
          if ( v26 )
            KiRemoveSystemWorkPriorityKick(v32);
        }
      }
      __writecr8(v16);
      FsRtlReleaseFile(FileObject);
      ObFastDereferenceObjectDeferDelete(v5 + 96, FileObject, 1666409283LL);
      KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
      v8 = (_BYTE *)v53;
    }
  }
  v17 = v51;
LABEL_31:
  v18 = *(_DWORD *)(v5 + 152);
  if ( (v18 & 0x10000) == 0 || *(_BYTE *)(a1 + 136) )
  {
    if ( *((_QWORD *)v47 + 1) != 35422LL )
      *(_DWORD *)(v5 + 152) = v18 & 0xFFFFFFDF;
    if ( v17 )
    {
      if ( CcEnablePerVolumeLazyWriter )
        v40 = (_BYTE *)(*(_QWORD *)(v5 + 600) + 986LL);
      else
        v40 = (_BYTE *)(*(_QWORD *)(v5 + 536) + 1050LL);
      *v40 = 1;
      if ( _bittest((const signed __int32 *)(v5 + 152), 0x10u) )
      {
        v41 = 1;
        LOBYTE(v9) = 1;
      }
      else
      {
        v41 = 0;
        v9 = 0LL;
      }
      CcScheduleLazyWriteScan(v8, v6, v9, v41);
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v19 = LockHandle.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      v42 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v42 <= 0xFu && LockHandle.OldIrql <= 0xFu && v42 >= 2u )
      {
        v43 = KeGetCurrentPrcb();
        v44 = v43->SchedulerAssist;
        v45 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v26 = (v45 & v44[5]) == 0;
        v44[5] &= v45;
        if ( v26 )
          KiRemoveSystemWorkPriorityKick(v43);
      }
    }
    __writecr8(v19);
    goto LABEL_18;
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v35 = LockHandle.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    v36 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v36 <= 0xFu && LockHandle.OldIrql <= 0xFu && v36 >= 2u )
    {
      v37 = KeGetCurrentPrcb();
      v38 = v37->SchedulerAssist;
      v39 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v26 = (v39 & v38[5]) == 0;
      v38[5] &= v39;
      if ( v26 )
        KiRemoveSystemWorkPriorityKick(v37);
    }
  }
  __writecr8(v35);
  *(_BYTE *)(a1 + 137) = 1;
  return 0;
}
