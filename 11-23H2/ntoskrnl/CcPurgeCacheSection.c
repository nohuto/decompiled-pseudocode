/*
 * XREFs of CcPurgeCacheSection @ 0x1402F0A60
 * Callers:
 *     CcUnmapAndPurge @ 0x14029A1C8 (CcUnmapAndPurge.c)
 *     CcUninitializeCacheMap @ 0x14029BED0 (CcUninitializeCacheMap.c)
 *     CcZeroEndOfLastPage @ 0x1402A2578 (CcZeroEndOfLastPage.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x1402EFA60 (CcCoherencyFlushAndPurgeCache.c)
 *     CcSetFileSizesEx @ 0x1402F1230 (CcSetFileSizesEx.c)
 *     CcPurgeAndClearCacheSection @ 0x1402F1564 (CcPurgeAndClearCacheSection.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402468E0 (KeDelayExecutionThread.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcUninitializeCacheMap @ 0x14029BED0 (CcUninitializeCacheMap.c)
 *     CcDecrementOpenCount @ 0x14029CDB0 (CcDecrementOpenCount.c)
 *     CcUnmapVacbArray @ 0x14029F050 (CcUnmapVacbArray.c)
 *     MmPurgeSection @ 0x1402DCB60 (MmPurgeSection.c)
 *     MmTrimSection @ 0x1402EFB68 (MmTrimSection.c)
 *     MmGetControlAreaPartition @ 0x1402F0DE4 (MmGetControlAreaPartition.c)
 *     MmCanFileBeTruncated @ 0x14034A750 (MmCanFileBeTruncated.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

BOOLEAN __stdcall CcPurgeCacheSection(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags)
{
  __int64 v4; // r13
  unsigned int v7; // r12d
  char *SharedCacheMap; // rbx
  unsigned __int64 v9; // r15
  BOOLEAN v10; // r15
  bool v12; // zf
  __int64 v13; // rcx
  unsigned __int64 v14; // r15
  __int64 *v15; // r15
  char v16; // al
  unsigned __int64 v17; // rbx
  LONGLONG QuadPart; // rax
  int v19; // ebx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // edx
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r10
  _DWORD *v27; // r9
  int v28; // eax
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r9
  int v32; // eax
  _QWORD *i; // r15
  unsigned __int64 v34; // rbx
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r9
  _DWORD *v37; // r8
  int v38; // eax
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r9
  _DWORD *v41; // r8
  int v42; // eax
  _BYTE v43[4]; // [rsp+30h] [rbp-50h] BYREF
  int v44; // [rsp+34h] [rbp-4Ch]
  __int64 v45; // [rsp+38h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE v46; // [rsp+40h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-28h] BYREF
  char *v48; // [rsp+70h] [rbp-10h]
  PSECTION_OBJECT_POINTERS SectionPointera; // [rsp+C0h] [rbp+40h]
  char v51; // [rsp+D8h] [rbp+58h]

  v51 = Flags;
  v4 = Length;
  v44 = -1;
  v43[0] = 0;
  v7 = 0;
  v45 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v46, 0, sizeof(v46));
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
  v48 = SharedCacheMap;
  if ( SharedCacheMap )
  {
    v12 = (*((_DWORD *)SharedCacheMap + 38) & 0x2000) == 0;
    v13 = *((_QWORD *)SharedCacheMap + 67);
    v45 = v13;
    if ( !v12 )
    {
      if ( ((unsigned __int8)FileOffset & 1) == 0 )
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
            v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v12 = (v24 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v24;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(OldIrql);
        return 1;
      }
      FileOffset = (PLARGE_INTEGER)((unsigned __int64)FileOffset ^ 1);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v13 + 768), &v46);
    ++*((_DWORD *)SharedCacheMap + 1);
    ++*((_DWORD *)SharedCacheMap + 136);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&v46);
    v14 = v46.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      v25 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v25 <= 0xFu && v46.OldIrql <= 0xFu && v25 >= 2u )
      {
        v26 = KeGetCurrentPrcb();
        v27 = v26->SchedulerAssist;
        v28 = ~(unsigned __int16)(-1LL << (v46.OldIrql + 1));
        v12 = (v28 & v27[5]) == 0;
        v27[5] &= v28;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(v26);
      }
    }
    __writecr8(v14);
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v9 = LockHandle.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    v29 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v29 <= 0xFu && LockHandle.OldIrql <= 0xFu && v29 >= 2u )
    {
      v30 = KeGetCurrentPrcb();
      v31 = v30->SchedulerAssist;
      v32 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v12 = (v32 & v31[5]) == 0;
      v31[5] &= v32;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick(v30);
    }
  }
  __writecr8(v9);
  if ( !SharedCacheMap )
    goto LABEL_4;
  v15 = (__int64 *)SectionObjectPointer;
  if ( v45 != *(_QWORD *)(MmGetControlAreaPartition(SectionObjectPointer) + 8) )
    KeBugCheckEx(0x34u, 0x13F3uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v16 = v51;
  if ( (v51 & 1) != 0 )
  {
    for ( i = SharedCacheMap + 232; (_QWORD *)*i != i; CcUninitializeCacheMap(*(PFILE_OBJECT *)(*i - 88LL), 0LL, 0LL) )
      ;
    v15 = (__int64 *)SectionObjectPointer;
    v16 = v51;
  }
  if ( (v16 & 8) == 0 )
  {
    CcUnmapVacbArray((__int64)SharedCacheMap, (__int64 *)FileOffset, v4, 0, 1, 0);
    goto LABEL_16;
  }
  if ( (int)MmTrimSection(v15, (__int64 *)FileOffset, v4, 0) >= 0 )
  {
LABEL_16:
    if ( FileOffset )
      v7 = 1;
LABEL_4:
    if ( (v51 & 4) != 0 )
    {
      v7 |= 2u;
      v44 = 5;
    }
    v10 = MmPurgeSection(SectionObjectPointer, (unsigned __int64 *)&FileOffset->QuadPart, v4, v7, v43);
    if ( !v10 && !(_DWORD)v4 )
    {
      v19 = v44;
      do
      {
        if ( !MmCanFileBeTruncated(SectionObjectPointer, FileOffset) )
          break;
        if ( (v51 & 2) != 0 )
          break;
        KeDelayExecutionThread(0, 0, &CcCollisionDelay);
        if ( !--v19 )
          break;
        v10 = MmPurgeSection(SectionObjectPointer, (unsigned __int64 *)&FileOffset->QuadPart, 0LL, v7, v43);
      }
      while ( !v10 );
      SharedCacheMap = v48;
    }
    if ( SharedCacheMap )
    {
      if ( !(_DWORD)v4 )
      {
        if ( FileOffset )
        {
          QuadPart = FileOffset->QuadPart;
          if ( FileOffset->QuadPart < *((_QWORD *)SharedCacheMap + 47) )
          {
            SectionPointera = (PSECTION_OBJECT_POINTERS)(QuadPart + 0x3FFFF);
            LODWORD(SectionPointera) = (QuadPart + 0x3FFFF) & 0xFFFC0000;
            *((_QWORD *)SharedCacheMap + 47) = (char *)SectionPointera + 0x40000;
          }
        }
        else
        {
          *((_QWORD *)SharedCacheMap + 47) = 0LL;
        }
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v45 + 768), &v46);
      CcDecrementOpenCount((__int64)SharedCacheMap);
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&v46);
      v17 = v46.OldIrql;
      if ( (_DWORD)KiIrqlFlags )
      {
        v39 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v39 <= 0xFu && v46.OldIrql <= 0xFu && v39 >= 2u )
        {
          v40 = KeGetCurrentPrcb();
          v41 = v40->SchedulerAssist;
          v42 = ~(unsigned __int16)(-1LL << (v46.OldIrql + 1));
          v12 = (v42 & v41[5]) == 0;
          v41[5] &= v42;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(v40);
        }
      }
      __writecr8(v17);
    }
    return v10;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v45 + 768), &v46);
  CcDecrementOpenCount((__int64)SharedCacheMap);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v46);
  v34 = v46.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    v35 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v35 <= 0xFu && v46.OldIrql <= 0xFu && v35 >= 2u )
    {
      v36 = KeGetCurrentPrcb();
      v37 = v36->SchedulerAssist;
      v38 = ~(unsigned __int16)(-1LL << (v46.OldIrql + 1));
      v12 = (v38 & v37[5]) == 0;
      v37[5] &= v38;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick(v36);
    }
  }
  __writecr8(v34);
  return 0;
}
