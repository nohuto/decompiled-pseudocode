/*
 * XREFs of CcSetFileSizesEx @ 0x1402F1230
 * Callers:
 *     CcSetFileSizes @ 0x1402F2810 (CcSetFileSizes.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14023CC80 (KeReleaseInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     MmFlushSection @ 0x140287720 (MmFlushSection.c)
 *     CcDecrementOpenCount @ 0x14029CDB0 (CcDecrementOpenCount.c)
 *     CcUnmapVacbArray @ 0x14029F050 (CcUnmapVacbArray.c)
 *     CcPurgeCacheSection @ 0x1402F0A60 (CcPurgeCacheSection.c)
 *     CcPurgeAndClearCacheSection @ 0x1402F1564 (CcPurgeAndClearCacheSection.c)
 *     CcExtendVacbArray @ 0x1402F2CD4 (CcExtendVacbArray.c)
 *     CcDeleteMbcb @ 0x1402F4094 (CcDeleteMbcb.c)
 *     RtlRaiseStatus @ 0x140321A40 (RtlRaiseStatus.c)
 *     FsRtlIsNtstatusExpected @ 0x140359EA0 (FsRtlIsNtstatusExpected.c)
 *     CcDeleteBcbs @ 0x1403C6848 (CcDeleteBcbs.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     MmExtendSection @ 0x140706714 (MmExtendSection.c)
 */

NTSTATUS __stdcall CcSetFileSizesEx(PFILE_OBJECT FileObject, PCC_FILE_SIZES FileSizes)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rsi
  _LARGE_INTEGER AllocationSize; // r14
  _LARGE_INTEGER ValidDataLength; // rbx
  __int64 SharedCacheMap; // rdi
  char v6; // r13
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r14
  KSPIN_LOCK *v9; // r14
  LARGE_INTEGER v10; // rcx
  NTSTATUS v11; // ebx
  unsigned __int64 v12; // rdi
  NTSTATUS result; // eax
  unsigned __int64 v14; // rbx
  unsigned __int64 OldIrql; // r14
  unsigned __int64 v16; // r14
  __int64 v17; // rcx
  NTSTATUS v18; // eax
  NTSTATUS v19; // r14d
  unsigned __int64 v20; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  bool v25; // zf
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r10
  _DWORD *v28; // r9
  int v29; // eax
  unsigned __int64 v30; // rbx
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r9
  _DWORD *v33; // r8
  int v34; // eax
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  _DWORD *v37; // r9
  int v38; // eax
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r10
  _DWORD *v41; // r9
  int v42; // eax
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r10
  _DWORD *v45; // r9
  int v46; // eax
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r9
  _DWORD *v49; // r8
  int v50; // eax
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // r9
  _DWORD *v53; // r8
  int v54; // eax
  struct _IO_STATUS_BLOCK v55; // [rsp+30h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE v56; // [rsp+40h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-18h] BYREF
  LARGE_INTEGER FileOffset; // [rsp+B0h] [rbp+40h] BYREF
  _LARGE_INTEGER v59; // [rsp+B8h] [rbp+48h] BYREF
  PSECTION_OBJECT_POINTERS v60; // [rsp+C0h] [rbp+50h]
  PKSPIN_LOCK SpinLock; // [rsp+C8h] [rbp+58h]

  SectionObjectPointer = FileObject->SectionObjectPointer;
  AllocationSize = FileSizes->AllocationSize;
  ValidDataLength = FileSizes->ValidDataLength;
  FileOffset = FileSizes->FileSize;
  v55 = 0LL;
  v60 = SectionObjectPointer;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v59 = AllocationSize;
  memset(&v56, 0, sizeof(v56));
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  SharedCacheMap = (__int64)SectionObjectPointer->SharedCacheMap;
  v6 = 1;
  if ( SharedCacheMap && *(_QWORD *)(SharedCacheMap + 176) )
  {
    SpinLock = (PKSPIN_LOCK)(*(_QWORD *)(SharedCacheMap + 536) + 768LL);
    KeAcquireInStackQueuedSpinLock(SpinLock, &v56);
    if ( AllocationSize.QuadPart <= *(_QWORD *)(SharedCacheMap + 32) )
      goto LABEL_4;
    ++*(_DWORD *)(SharedCacheMap + 4);
    ++*(_DWORD *)(SharedCacheMap + 544);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&v56);
    OldIrql = v56.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v56.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v24 = ~(unsigned __int16)(-1LL << (v56.OldIrql + 1));
        v25 = (v24 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v24;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v16 = LockHandle.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      v26 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v26 <= 0xFu && LockHandle.OldIrql <= 0xFu && v26 >= 2u )
      {
        v27 = KeGetCurrentPrcb();
        v28 = v27->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v25 = (v29 & v28[5]) == 0;
        v28[5] &= v29;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(v27);
      }
    }
    __writecr8(v16);
    v59.QuadPart += 0xFFFFFLL;
    v17 = *(_QWORD *)(SharedCacheMap + 176);
    v59.LowPart &= 0xFFF00000;
    v6 = 0;
    v18 = MmExtendSection(v17, &v59, 1LL);
    v19 = v18;
    if ( v18 < 0 )
    {
      if ( !FsRtlIsNtstatusExpected(v18) )
        v19 = -1073741588;
    }
    else
    {
      v19 = ((__int64 (__fastcall *)(_QWORD, _QWORD))CcExtendVacbArray)(SharedCacheMap, (_LARGE_INTEGER)v59.QuadPart);
    }
    KeAcquireInStackQueuedSpinLock(SpinLock, &v56);
    CcDecrementOpenCount(SharedCacheMap);
    if ( v19 < 0 )
    {
      KeReleaseInStackQueuedSpinLock(&v56);
      RtlRaiseStatus(v19);
    }
    SharedCacheMap = (__int64)v60->SharedCacheMap;
    if ( SharedCacheMap )
    {
LABEL_4:
      ++*(_DWORD *)(SharedCacheMap + 4);
      ++*(_DWORD *)(SharedCacheMap + 544);
      if ( v6 )
      {
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&v56);
        v7 = v56.OldIrql;
        if ( (_DWORD)KiIrqlFlags )
        {
          v35 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v35 <= 0xFu && v56.OldIrql <= 0xFu && v35 >= 2u )
          {
            v36 = KeGetCurrentPrcb();
            v37 = v36->SchedulerAssist;
            v38 = ~(unsigned __int16)(-1LL << (v56.OldIrql + 1));
            v25 = (v38 & v37[5]) == 0;
            v37[5] &= v38;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick(v36);
          }
        }
        __writecr8(v7);
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        v8 = LockHandle.OldIrql;
        if ( (_DWORD)KiIrqlFlags )
        {
          v39 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v39 <= 0xFu && LockHandle.OldIrql <= 0xFu && v39 >= 2u )
          {
            v40 = KeGetCurrentPrcb();
            v41 = v40->SchedulerAssist;
            v42 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v25 = (v42 & v41[5]) == 0;
            v41[5] &= v42;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick(v40);
          }
        }
        __writecr8(v8);
        v9 = SpinLock;
        KeAcquireInStackQueuedSpinLock(SpinLock, &v56);
      }
      else
      {
        v9 = SpinLock;
      }
      v10 = *(LARGE_INTEGER *)(SharedCacheMap + 40);
      if ( v10.QuadPart != 0x7FFFFFFFFFFFFFFFLL )
      {
        if ( FileOffset.QuadPart < v10.QuadPart )
          *(LARGE_INTEGER *)(SharedCacheMap + 40) = FileOffset;
        *(_LARGE_INTEGER *)(SharedCacheMap + 48) = ValidDataLength;
      }
      v11 = 0;
      if ( FileOffset.QuadPart < *(_QWORD *)(SharedCacheMap + 8) && (*(_DWORD *)(SharedCacheMap + 152) & 4) == 0 )
      {
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&v56);
        v14 = v56.OldIrql;
        if ( (_DWORD)KiIrqlFlags )
        {
          v43 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v43 <= 0xFu && v56.OldIrql <= 0xFu && v43 >= 2u )
          {
            v44 = KeGetCurrentPrcb();
            v45 = v44->SchedulerAssist;
            v46 = ~(unsigned __int16)(-1LL << (v56.OldIrql + 1));
            v25 = (v46 & v45[5]) == 0;
            v45[5] &= v46;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick(v44);
          }
        }
        __writecr8(v14);
        v11 = 0;
        if ( CcUnmapVacbArray(SharedCacheMap, (__int64 *)&FileOffset, 0, 0, 0, 0) )
        {
          if ( !FileOffset.QuadPart )
          {
            if ( *(_QWORD *)(SharedCacheMap + 168) )
              CcDeleteMbcb(SharedCacheMap);
            if ( *(_QWORD *)(SharedCacheMap + 16) != SharedCacheMap + 16 )
              CcDeleteBcbs(SharedCacheMap);
          }
          v11 = CcPurgeAndClearCacheSection(SharedCacheMap, &FileOffset);
        }
        KeAcquireInStackQueuedSpinLock(v9, &v56);
      }
      *(LARGE_INTEGER *)(SharedCacheMap + 8) = FileOffset;
      CcDecrementOpenCount(SharedCacheMap);
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&v56);
      v12 = v56.OldIrql;
      if ( (_DWORD)KiIrqlFlags )
      {
        v47 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v47 <= 0xFu && v56.OldIrql <= 0xFu && v47 >= 2u )
        {
          v48 = KeGetCurrentPrcb();
          v49 = v48->SchedulerAssist;
          v50 = ~(unsigned __int16)(-1LL << (v56.OldIrql + 1));
          v25 = (v50 & v49[5]) == 0;
          v49[5] &= v50;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(v48);
        }
      }
      __writecr8(v12);
      return v11;
    }
    else
    {
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&v56);
      v30 = v56.OldIrql;
      if ( (_DWORD)KiIrqlFlags )
      {
        v31 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v31 <= 0xFu && v56.OldIrql <= 0xFu && v31 >= 2u )
        {
          v32 = KeGetCurrentPrcb();
          v33 = v32->SchedulerAssist;
          v34 = ~(unsigned __int16)(-1LL << (v56.OldIrql + 1));
          v25 = (v34 & v33[5]) == 0;
          v33[5] &= v34;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(v32);
        }
      }
      __writecr8(v30);
      return 0;
    }
  }
  else
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v20 = LockHandle.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      v51 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 )
      {
        if ( v51 <= 0xFu && LockHandle.OldIrql <= 0xFu && v51 >= 2u )
        {
          v52 = KeGetCurrentPrcb();
          v53 = v52->SchedulerAssist;
          v54 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v25 = (v54 & v53[5]) == 0;
          v53[5] &= v54;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(v52);
        }
        SectionObjectPointer = v60;
      }
    }
    __writecr8(v20);
    if ( (FileOffset.LowPart & 0xFFF) == 0 )
      return CcPurgeCacheSection(SectionObjectPointer, &FileOffset, 0, 0) == 0 ? 0xC0000435 : 0;
    MmFlushSection((int)SectionObjectPointer, (__int64 *)&FileOffset, 1uLL, 0LL, &v55, 0);
    result = v55.Status;
    if ( v55.Status >= 0 )
      return CcPurgeCacheSection(SectionObjectPointer, &FileOffset, 0, 0) == 0 ? 0xC0000435 : 0;
  }
  return result;
}
