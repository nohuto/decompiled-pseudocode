/*
 * XREFs of CcDeleteSharedCacheMap @ 0x14029A250
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x14025EB60 (CcInitializeCacheMapInternal.c)
 *     CcWriteBehindPostProcess @ 0x14029B2C8 (CcWriteBehindPostProcess.c)
 *     CcUninitializeCacheMap @ 0x14029BED0 (CcUninitializeCacheMap.c)
 *     CcDeleteSectionsForPartition @ 0x1405394A4 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDecrementVolumeUseCountWithDelete @ 0x14029A070 (CcDecrementVolumeUseCountWithDelete.c)
 *     CcUnmapAndPurge @ 0x14029A1C8 (CcUnmapAndPurge.c)
 *     ObFastReplaceObject @ 0x14029A808 (ObFastReplaceObject.c)
 *     CcDecrementPrivateVolumeUseCount @ 0x14029A86C (CcDecrementPrivateVolumeUseCount.c)
 *     CcDereferencePartition @ 0x14029C6C0 (CcDereferencePartition.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402A2790 (ObFastDereferenceObjectDeferDelete.c)
 *     CcDeleteMbcb @ 0x1402F4094 (CcDeleteMbcb.c)
 *     DbgPrintEx @ 0x14032A9D0 (DbgPrintEx.c)
 *     CcPostPVCMForDeleteToPartition @ 0x1403C45F0 (CcPostPVCMForDeleteToPartition.c)
 *     CcDeleteBcbs @ 0x1403C6848 (CcDeleteBcbs.c)
 *     CcFreeSharedCacheMapIgnoreNull @ 0x14040FC70 (CcFreeSharedCacheMapIgnoreNull.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     FsRtlReleaseFile @ 0x140723B10 (FsRtlReleaseFile.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeleteSharedCacheMap(
        _QWORD *Entry,
        volatile signed __int64 **LockHandle,
        __int64 a3,
        int a4,
        PFILE_OBJECT FileObject)
{
  __int64 v5; // r12
  __int64 v10; // rsi
  char *v11; // rax
  __int64 v12; // rdx
  char **v13; // rcx
  char v14; // r8
  _QWORD **v15; // rdx
  PVOID *v16; // rcx
  _QWORD **v17; // rdx
  PVOID *v18; // rcx
  _QWORD **v19; // rdx
  PVOID *v20; // rcx
  __int64 v21; // r8
  _QWORD *v22; // rdx
  __int64 v23; // rdx
  _QWORD *v24; // rax
  unsigned __int64 v25; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v29; // eax
  bool v30; // zf
  unsigned __int64 v31; // rbx
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  _DWORD *v34; // r9
  int v35; // eax
  void *v36; // rcx
  _DWORD *v37; // rbx
  void *v38; // rax
  __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  __int64 v41; // rbx
  unsigned __int64 v42; // rbx
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r10
  _DWORD *v45; // r9
  int v46; // eax
  _QWORD *v47; // rcx
  _QWORD *v48; // rcx
  _QWORD *v49; // rcx
  int v50; // [rsp+50h] [rbp-78h]
  char v51; // [rsp+D0h] [rbp+8h] BYREF

  v5 = Entry[67];
  v50 = 0;
  v10 = 0LL;
  if ( CcEnablePerVolumeLazyWriter )
    v10 = Entry[75];
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v5 + 1296)) <= 1 )
    __fastfail(0xEu);
  if ( v10 && _InterlockedIncrement64((volatile signed __int64 *)(v10 + 8)) <= 1 )
    __fastfail(0xEu);
  v11 = (char *)(Entry + 17);
  v12 = Entry[17];
  v13 = (char **)Entry[18];
  if ( *(char **)(*(_QWORD *)v11 + 8LL) != v11 || *v13 != v11 )
    goto LABEL_87;
  v14 = CcEnablePerVolumeLazyWriter;
  *v13 = (char *)v12;
  *(_QWORD *)(v12 + 8) = v13;
  if ( v14 )
  {
    v15 = (_QWORD **)Entry[71];
    v16 = (PVOID *)Entry[72];
    if ( v15[1] != Entry + 71 || *v16 != Entry + 71 )
      goto LABEL_87;
    *v16 = v15;
    v15[1] = v16;
  }
  if ( (Entry[19] & 0x3000000) != 0 )
  {
    v17 = (_QWORD **)Entry[15];
    v18 = (PVOID *)Entry[16];
    if ( v17[1] != Entry + 15 || *v18 != Entry + 15 )
      goto LABEL_87;
    *v18 = v17;
    v17[1] = v18;
    if ( v14 )
    {
      v19 = (_QWORD **)Entry[73];
      v20 = (PVOID *)Entry[74];
      if ( v19[1] != Entry + 73 || *v20 != Entry + 73 )
        goto LABEL_87;
      *v20 = v19;
      v19[1] = v20;
    }
  }
  *(_QWORD *)(*(_QWORD *)((Entry[12] & 0xFFFFFFFFFFFFFFF0uLL) + 0x28) + 8LL) = 0LL;
  *((_DWORD *)Entry + 38) |= 0x80020u;
  if ( LockHandle )
  {
    ++CcSectionDeletionSequencePhase1;
  }
  else if ( !*(_BYTE *)(v5 + 1294) )
  {
    KeBugCheckEx(0x34u, 0xFE3uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  if ( Entry[75] )
  {
    v50 = CcDecrementPrivateVolumeUseCount();
    if ( !v50 )
    {
      v21 = *(_QWORD *)(v10 + 592);
      v22 = *(_QWORD **)(v10 + 600);
      if ( *(_QWORD *)(v21 + 8) == v10 + 592 && *v22 == v10 + 592 )
      {
        *v22 = v21;
        *(_QWORD *)(v21 + 8) = v22;
        v23 = *(_QWORD *)(v10 + 576);
        v24 = *(_QWORD **)(v10 + 584);
        if ( *(_QWORD *)(v23 + 8) == v10 + 576 && *v24 == v10 + 576 )
        {
          *v24 = v23;
          *(_QWORD *)(v23 + 8) = v24;
          goto LABEL_30;
        }
      }
LABEL_87:
      __fastfail(3u);
    }
  }
LABEL_30:
  KxReleaseQueuedSpinLock((volatile signed __int64 **)a3);
  v25 = *(unsigned __int8 *)(a3 + 16);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v25 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v25 + 1));
      v30 = (v29 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v29;
      if ( v30 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v25);
  if ( LockHandle )
  {
    KxReleaseQueuedSpinLock(LockHandle);
    v31 = *((unsigned __int8 *)LockHandle + 16);
    if ( (_DWORD)KiIrqlFlags )
    {
      v32 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v32 <= 0xFu && (unsigned __int8)v31 <= 0xFu && v32 >= 2u )
      {
        v33 = KeGetCurrentPrcb();
        v34 = v33->SchedulerAssist;
        v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v31 + 1));
        v30 = (v35 & v34[5]) == 0;
        v34[5] &= v35;
        if ( v30 )
          KiRemoveSystemWorkPriorityKick(v33);
      }
    }
    __writecr8(v31);
  }
  if ( (_QWORD *)Entry[2] != Entry + 2 )
    CcDeleteBcbs(Entry);
  CcUnmapAndPurge((__int64)Entry, Entry[1] >= 0x100000LL);
  if ( a4 )
  {
    FsRtlReleaseFile(FileObject);
    ObFastDereferenceObjectDeferDelete(Entry + 12, FileObject, 1666409283LL);
  }
  v36 = (void *)Entry[22];
  if ( v36 )
  {
    ObfDereferenceObject(v36);
    Entry[22] = 0LL;
  }
  if ( Entry[21] )
    CcDeleteMbcb(Entry);
  v37 = (_DWORD *)Entry[64];
  v51 = 0;
  CcDecrementVolumeUseCountWithDelete(v37, 0, &v51);
  if ( v51 )
    ExFreePoolWithTag(v37, 0x6D566343u);
  v38 = (void *)ObFastReplaceObject(Entry + 12, 0LL);
  ObfDereferenceObject(v38);
  v39 = Entry[35];
  if ( v39 )
  {
    do
    {
      v40 = v39 & 0xFFFFFFFFFFFFFFFEuLL;
      v41 = *(_QWORD *)v40;
      KeSetEvent((PRKEVENT)(v40 + 8), 0, 0);
      v39 = v41;
    }
    while ( v41 );
  }
  if ( LockHandle )
  {
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, (PKLOCK_QUEUE_HANDLE)LockHandle);
    ++CcSectionDeletionSequencePhase2;
    KxReleaseQueuedSpinLock(LockHandle);
    v42 = *((unsigned __int8 *)LockHandle + 16);
    if ( (_DWORD)KiIrqlFlags )
    {
      v43 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v43 <= 0xFu && (unsigned __int8)v42 <= 0xFu && v43 >= 2u )
      {
        v44 = KeGetCurrentPrcb();
        v45 = v44->SchedulerAssist;
        v46 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v42 + 1));
        v30 = (v46 & v45[5]) == 0;
        v45[5] &= v46;
        if ( v30 )
          KiRemoveSystemWorkPriorityKick(v44);
      }
    }
    __writecr8(v42);
  }
  v47 = (_QWORD *)Entry[11];
  if ( v47 != Entry + 7 && v47 )
    ExFreePoolWithTag(v47, 0);
  v48 = (_QWORD *)Entry[23];
  if ( v48 && v48 != Entry + 44 )
    ExFreePoolWithTag(v48, 0);
  v49 = (_QWORD *)Entry[24];
  if ( v49 && v49 != Entry + 44 )
    ExFreePoolWithTag(v49, 0);
  CcDereferencePartition(v5);
  if ( v10 )
  {
    if ( _InterlockedDecrement64((volatile signed __int64 *)(v10 + 8)) <= -1 )
      __fastfail(0xEu);
    if ( !v50 )
    {
      DbgPrintEx(
        0x7Fu,
        2u,
        "[%04x:%04x]CcDeleteSharedCacheMap: QUEUE-DEL-PVCM SCM:%p, VCM:%p(vid:%2lx), PVCM:%p(vid:%2lx)\n",
        LODWORD(KeGetCurrentThread()[1].CycleTime),
        KeGetCurrentThread()[1].CurrentRunTime,
        Entry,
        (const void *)Entry[64],
        *(_DWORD *)(Entry[64] + 204LL),
        (const void *)v10,
        *(_DWORD *)(v10 + 24));
      CcPostPVCMForDeleteToPartition(v10, 0LL);
    }
  }
  if ( EnableFeatureServicing_45016043 )
    CcFreeSharedCacheMapIgnoreNull(Entry);
  else
    ExFreePoolWithTag(Entry, 0);
}
