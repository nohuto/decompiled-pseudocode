/*
 * XREFs of CcUninitializeCacheMap @ 0x14029BED0
 * Callers:
 *     CcPurgeCacheSection @ 0x1402F0A60 (CcPurgeCacheSection.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14020C878 (IoDiskIoAttributionDereference.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402611B0 (KxWaitForLockOwnerShip.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140299B34 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcScheduleLazyWriteScan @ 0x140299C88 (CcScheduleLazyWriteScan.c)
 *     CcDeleteSharedCacheMap @ 0x14029A250 (CcDeleteSharedCacheMap.c)
 *     CcFreeWorkQueueEntry @ 0x14029C620 (CcFreeWorkQueueEntry.c)
 *     CcDereferencePartition @ 0x14029C6C0 (CcDereferencePartition.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14029CE60 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     CcPurgeCacheSection @ 0x1402F0A60 (CcPurgeCacheSection.c)
 *     CcFreePrivateCacheMapIgnoreNull @ 0x14040FC4C (CcFreePrivateCacheMapIgnoreNull.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14046058E (KiAcquireQueuedSpinLockInstrumented.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1405361A4 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall CcUninitializeCacheMap(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER TruncateSize,
        PCACHE_UNINITIALIZE_EVENT UninitializeEvent)
{
  __int64 v5; // r15
  __int64 v6; // r13
  unsigned __int8 CurrentIrql; // r8
  _DWORD *SchedulerAssist; // r10
  __int64 v9; // rdx
  signed __int64 *v10; // rdx
  PFILE_OBJECT v11; // r8
  PFILE_OBJECT *PrivateCacheMap; // r12
  char *SharedCacheMap; // rbx
  PFILE_OBJECT v14; // rax
  __int64 v15; // rdx
  _QWORD *p_Type; // rcx
  PFILE_OBJECT v17; // rdx
  PVOID *v18; // rcx
  unsigned __int64 v19; // rbx
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r10
  _DWORD *v22; // r9
  int v23; // eax
  bool v24; // zf
  __int64 v25; // rdx
  unsigned __int64 v26; // rbx
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  _DWORD *v29; // r9
  int v30; // eax
  int v31; // eax
  bool v32; // bl
  BOOLEAN v33; // di
  _BYTE *v34; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v36; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v38; // r9
  int v39; // eax
  unsigned __int64 v40; // rbx
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r10
  _DWORD *v43; // r9
  int v44; // eax
  __int64 v45; // rcx
  PSLIST_ENTRY ListEntry; // [rsp+30h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE v48; // [rsp+38h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v50; // [rsp+68h] [rbp-18h] BYREF
  bool v52; // [rsp+D8h] [rbp+58h]

  ListEntry = 0LL;
  *(_QWORD *)&v48.OldIrql = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v48.LockQueue.Lock = &CcMasterLock;
  memset(&v50, 0, sizeof(v50));
  v48.LockQueue.Next = 0LL;
  v5 = 0LL;
  v52 = 0;
  v6 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v9) = 4;
    else
      v9 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v9;
  }
  v48.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v48, &CcMasterLock);
  }
  else
  {
    v10 = (signed __int64 *)_InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&v48);
    if ( v10 )
      KxWaitForLockOwnerShip((signed __int64)&v48, v10);
  }
  v11 = FileObject;
  PrivateCacheMap = (PFILE_OBJECT *)FileObject->PrivateCacheMap;
  SharedCacheMap = (char *)FileObject->SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap )
  {
    v6 = 0LL;
    v5 = *((_QWORD *)SharedCacheMap + 67);
    if ( CcEnablePerVolumeLazyWriter )
      v6 = *((_QWORD *)SharedCacheMap + 75);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v5 + 1296)) <= 1 )
      __fastfail(0xEu);
    if ( v6 && _InterlockedIncrement64((volatile signed __int64 *)(v6 + 8)) <= 1 )
      __fastfail(0xEu);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 768), &LockHandle);
    v11 = FileObject;
  }
  if ( PrivateCacheMap )
  {
    if ( PrivateCacheMap[1] != v11 )
      KeBugCheckEx(0x34u, 0xAABuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( !v5 )
      KeBugCheckEx(0x34u, 0xAB1uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( PrivateCacheMap[14] )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 832), &v50);
      v14 = PrivateCacheMap[14];
      if ( v14 )
      {
        v15 = *(_QWORD *)&v14->Type;
        ++CcDbgNumberOfNoopedReadAheads;
        p_Type = &v14->DeviceObject->Type;
        ListEntry = (PSLIST_ENTRY)v14;
        if ( *(PFILE_OBJECT *)(v15 + 8) != v14 || (PFILE_OBJECT)*p_Type != v14 )
          goto LABEL_36;
        *p_Type = v15;
        *(_QWORD *)(v15 + 8) = p_Type;
        v14->DeviceObject = 0LL;
        *(_QWORD *)&v14->Type = 0LL;
        if ( (PFILE_OBJECT)v14->Vpb != FileObject )
          KeBugCheckEx(0x34u, 0xAD2uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        --*((_DWORD *)SharedCacheMap + 1);
        --*((_DWORD *)SharedCacheMap + 136);
      }
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&v50);
      v11 = FileObject;
    }
    --*((_DWORD *)SharedCacheMap + 1);
    v17 = PrivateCacheMap[12];
    v18 = (PVOID *)PrivateCacheMap[13];
    if ( (PFILE_OBJECT *)v17->DeviceObject == PrivateCacheMap + 12 && *v18 == PrivateCacheMap + 12 )
    {
      *v18 = v17;
      v17->DeviceObject = (PDEVICE_OBJECT)v18;
      if ( PrivateCacheMap == (PFILE_OBJECT *)(SharedCacheMap + 384) )
      {
        *(_WORD *)PrivateCacheMap = 0;
        PrivateCacheMap = 0LL;
      }
      v11->PrivateCacheMap = 0LL;
      goto LABEL_37;
    }
LABEL_36:
    __fastfail(3u);
  }
LABEL_37:
  if ( !SharedCacheMap )
  {
    if ( TruncateSize && !TruncateSize->QuadPart && v11->SectionObjectPointer->DataSectionObject )
    {
      if ( v5 )
        KeBugCheckEx(0x34u, 0xBF9uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&v48);
      OldIrql = v48.OldIrql;
      if ( (_DWORD)KiIrqlFlags )
      {
        v36 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v36 <= 0xFu && v48.OldIrql <= 0xFu && v36 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v38 = CurrentPrcb->SchedulerAssist;
          v39 = ~(unsigned __int16)(-1LL << (v48.OldIrql + 1));
          v24 = (v39 & v38[5]) == 0;
          v38[5] &= v39;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
      CcPurgeCacheSection(FileObject->SectionObjectPointer, TruncateSize, 0, 0);
    }
    else
    {
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&v48);
      v40 = v48.OldIrql;
      if ( (_DWORD)KiIrqlFlags )
      {
        v41 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v41 <= 0xFu && v48.OldIrql <= 0xFu && v41 >= 2u )
        {
          v42 = KeGetCurrentPrcb();
          v43 = v42->SchedulerAssist;
          v25 = -1LL << (v48.OldIrql + 1);
          v44 = ~(unsigned __int16)v25;
          v24 = (v44 & v43[5]) == 0;
          v43[5] &= v44;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(v42);
        }
      }
      __writecr8(v40);
    }
    if ( UninitializeEvent )
      KeSetEvent(&UninitializeEvent->Event, 0, 0);
    goto LABEL_107;
  }
  if ( TruncateSize )
  {
    if ( TruncateSize->QuadPart || !*((_QWORD *)SharedCacheMap + 1) )
    {
      if ( *((char **)SharedCacheMap + 29) == SharedCacheMap + 232 )
        *((LARGE_INTEGER *)SharedCacheMap + 1) = *TruncateSize;
    }
    else
    {
      *((_DWORD *)SharedCacheMap + 38) |= 0x10u;
    }
  }
  if ( *((_DWORD *)SharedCacheMap + 1) )
  {
    if ( UninitializeEvent )
    {
      if ( *((char **)SharedCacheMap + 29) == SharedCacheMap + 232 )
      {
        UninitializeEvent->Next = (_CACHE_UNINITIALIZE_EVENT *)*((_QWORD *)SharedCacheMap + 35);
        *((_QWORD *)SharedCacheMap + 35) = UninitializeEvent;
        v52 = (v11->DeviceObject->Characteristics & 0x10) != 0;
      }
      else
      {
        KeSetEvent(&UninitializeEvent->Event, 0, 0);
      }
    }
    goto LABEL_49;
  }
  if ( *((char **)SharedCacheMap + 29) != SharedCacheMap + 232 )
    KeBugCheckEx(0x34u, 0xB4EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( UninitializeEvent )
  {
    UninitializeEvent->Next = (_CACHE_UNINITIALIZE_EVENT *)*((_QWORD *)SharedCacheMap + 35);
    *((_QWORD *)SharedCacheMap + 35) = UninitializeEvent;
    v52 = (v11->DeviceObject->Characteristics & 0x10) != 0;
  }
  v31 = *((_DWORD *)SharedCacheMap + 38);
  if ( (v31 & 4) != 0 || UninitializeEvent )
  {
    if ( (v31 & 0x20) == 0 )
    {
      if ( !*((_DWORD *)SharedCacheMap + 28)
        && ((v31 & 0x400) == 0 || *((_QWORD *)SharedCacheMap + 5) == 0x7FFFFFFFFFFFFFFFLL) )
      {
        CcDeleteSharedCacheMap(SharedCacheMap, (volatile signed __int64 **)&v48, (__int64)&LockHandle, 0, 0LL);
        v32 = 0;
        v33 = 1;
        goto LABEL_108;
      }
      goto LABEL_75;
    }
  }
  else if ( (v31 & 0x20) == 0 )
  {
LABEL_75:
    CcInsertIntoDirtySharedCacheMapList((__int64)SharedCacheMap);
  }
  if ( CcEnablePerVolumeLazyWriter )
    v34 = (_BYTE *)(*((_QWORD *)SharedCacheMap + 75) + 986LL);
  else
    v34 = (_BYTE *)(*((_QWORD *)SharedCacheMap + 67) + 1050LL);
  *v34 = 1;
  if ( *(_BYTE *)(v5 + 1294) )
  {
    *((_DWORD *)SharedCacheMap + 38) |= 0x10000u;
    LOBYTE(v11) = 1;
    CcScheduleLazyWriteScan((_BYTE *)v5, v6, (__int64)v11, 1);
  }
  else if ( !UninitializeEvent || (*((_DWORD *)SharedCacheMap + 38) & 0x20) != 0 )
  {
    LOBYTE(v11) = 0;
    CcScheduleLazyWriteScan((_BYTE *)v5, v6, (__int64)v11, 0);
  }
  else
  {
    LOBYTE(v11) = 1;
    CcScheduleLazyWriteScan((_BYTE *)v5, v6, (__int64)v11, 1);
  }
LABEL_49:
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v19 = LockHandle.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    v20 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v20 <= 0xFu && LockHandle.OldIrql <= 0xFu && v20 >= 2u )
    {
      v21 = KeGetCurrentPrcb();
      v22 = v21->SchedulerAssist;
      v23 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v24 = (v23 & v22[5]) == 0;
      v22[5] &= v23;
      if ( v24 )
        KiRemoveSystemWorkPriorityKick(v21);
    }
  }
  __writecr8(v19);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v48);
  v26 = v48.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    v27 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v27 <= 0xFu && v48.OldIrql <= 0xFu && v27 >= 2u )
    {
      v28 = KeGetCurrentPrcb();
      v29 = v28->SchedulerAssist;
      v25 = -1LL << (v48.OldIrql + 1);
      v30 = ~(unsigned __int16)v25;
      v24 = (v30 & v29[5]) == 0;
      v29[5] &= v30;
      if ( v24 )
        KiRemoveSystemWorkPriorityKick(v28);
    }
  }
  __writecr8(v26);
LABEL_107:
  v32 = v52;
  v33 = 0;
LABEL_108:
  if ( EnableFeatureServicing_45016043 )
  {
    CcFreePrivateCacheMapIgnoreNull(PrivateCacheMap);
  }
  else if ( PrivateCacheMap )
  {
    ExFreePoolWithTag(PrivateCacheMap, 0);
  }
  if ( v32 )
  {
    LOBYTE(v25) = 1;
    CcAdjustWriteBehindThreadPoolIfNeeded(v5, v25);
  }
  if ( ListEntry )
  {
    ObfDereferenceObject(FileObject);
    v45 = *((_QWORD *)&ListEntry[1].Next + 1);
    if ( v45 )
      IoDiskIoAttributionDereference(v45);
    CcFreeWorkQueueEntry(ListEntry);
  }
  if ( v5 )
  {
    CcDereferencePartition(v5);
    if ( v6 )
    {
      if ( _InterlockedDecrement64((volatile signed __int64 *)(v6 + 8)) <= -1 )
        __fastfail(0xEu);
    }
  }
  return v33;
}
