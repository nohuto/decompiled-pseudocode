/*
 * XREFs of CcCanIWrite @ 0x14020F1A0
 * Callers:
 *     FsRtlCopyWrite @ 0x1408509C0 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14093D660 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     CcCanIWriteStreamEx @ 0x14020FCA0 (CcCanIWriteStreamEx.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KeDelayExecutionThread @ 0x1402467F0 (KeDelayExecutionThread.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140260E00 (KxWaitForLockOwnerShip.c)
 *     ExInterlockedInsertTailList @ 0x14028C180 (ExInterlockedInsertTailList.c)
 *     CcScheduleLazyWriteScan @ 0x1402998D8 (CcScheduleLazyWriteScan.c)
 *     KxWaitForLockChainValid @ 0x14031A4F0 (KxWaitForLockChainValid.c)
 *     DbgPrintEx @ 0x14032A560 (DbgPrintEx.c)
 *     ExInterlockedInsertHeadList @ 0x1403519A0 (ExInterlockedInsertHeadList.c)
 *     CcPostDeferredWrites @ 0x1403C17E8 (CcPostDeferredWrites.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045FB2E (KiAcquireQueuedSpinLockInstrumented.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x140535D04 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcPerfLogCanWriteFail @ 0x14053A7B8 (CcPerfLogCanWriteFail.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405715E8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057FFFC (KiHaltOnAddressWakeEntireList.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __stdcall CcCanIWrite(PFILE_OBJECT FileObject, ULONG BytesToWrite, BOOLEAN Wait, UCHAR Retrying)
{
  PFILE_OBJECT v4; // rdi
  __int64 *v5; // r15
  unsigned __int64 v7; // rdx
  KSPIN_LOCK *v8; // r9
  ULONG Flags; // eax
  _DWORD *SchedulerAssist; // r10
  __int64 v11; // rdx
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rcx
  _QWORD *SharedCacheMap; // rax
  __int64 v14; // r14
  _LIST_ENTRY *v15; // r12
  _BYTE *v16; // r13
  _QWORD *v17; // rax
  PVPB Vpb; // rcx
  PDEVICE_OBJECT DeviceObject; // rcx
  __int64 *v20; // rax
  __int64 *v21; // rcx
  __int64 *v22; // rax
  PSECTION_OBJECT_POINTERS v23; // rcx
  bool v24; // si
  _DWORD *v25; // rax
  PVOID v26; // rax
  __int64 v27; // rax
  unsigned __int8 v28; // cl
  unsigned __int64 v29; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  int v32; // eax
  bool v33; // zf
  char v34; // si
  ULONG v35; // ecx
  BOOLEAN v36; // di
  BOOLEAN CanIWriteStream; // al
  _QWORD *v38; // r13
  KSPIN_LOCK *v39; // r8
  __int64 v40; // r8
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r10
  _DWORD *v44; // r9
  int v45; // eax
  _BYTE *v46; // r12
  __int64 v47; // r8
  unsigned __int64 v48; // rdi
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r10
  _DWORD *v51; // r9
  int v52; // eax
  char v53; // si
  unsigned __int8 v54; // dl
  __int64 v55; // r10
  __int64 v56; // rdx
  int v57; // eax
  int v58; // eax
  _QWORD **v59; // rdx
  PVOID *v60; // rcx
  void *v61; // rcx
  __int64 v62; // rax
  unsigned __int8 v63; // cl
  unsigned __int64 v64; // rbx
  unsigned __int8 v65; // cl
  struct _KPRCB *v66; // r10
  _DWORD *v67; // r9
  int v68; // eax
  int v69; // ebx
  signed __int64 v70; // rax
  bool v71; // cc
  signed __int64 v72; // rax
  signed __int32 v73[8]; // [rsp+0h] [rbp-100h] BYREF
  char v74; // [rsp+40h] [rbp-C0h] BYREF
  char v75; // [rsp+41h] [rbp-BFh]
  char v76; // [rsp+42h] [rbp-BEh]
  int v77; // [rsp+44h] [rbp-BCh]
  PVOID P; // [rsp+48h] [rbp-B8h]
  __int128 v79; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v80; // [rsp+60h] [rbp-A0h]
  __int64 v81; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int64 *v82; // [rsp+70h] [rbp-90h]
  __int64 v83; // [rsp+78h] [rbp-88h]
  _BYTE *v84; // [rsp+80h] [rbp-80h]
  __int64 Object; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v86[2]; // [rsp+90h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp-60h] BYREF
  LARGE_INTEGER Interval; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v89; // [rsp+C0h] [rbp-40h]
  __int64 v90; // [rsp+D0h] [rbp-30h]
  PFILE_OBJECT v91; // [rsp+D8h] [rbp-28h]
  _LIST_ENTRY ListEntry; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v93; // [rsp+F0h] [rbp-10h]
  __int64 *p_Object; // [rsp+F8h] [rbp-8h]
  __int128 v95; // [rsp+100h] [rbp+0h]
  __int64 v96; // [rsp+110h] [rbp+10h]
  __int64 v97; // [rsp+118h] [rbp+18h]
  __int128 v98; // [rsp+120h] [rbp+20h]
  __int64 v99; // [rsp+130h] [rbp+30h]
  __int128 v100; // [rsp+140h] [rbp+40h]
  __int64 v101; // [rsp+150h] [rbp+50h]
  void *retaddr; // [rsp+1A8h] [rbp+A8h]
  BOOLEAN v105; // [rsp+1C0h] [rbp+C0h]

  v105 = Wait;
  v80 = 0LL;
  v79 = 0LL;
  v4 = FileObject;
  v76 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v75 = 0;
  v5 = 0LL;
  v77 = 0;
  P = 0LL;
  if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 )
    return 1;
  v7 = 4LL;
  v8 = &CcMasterLock;
  v89 = 4LL;
  if ( !FileObject )
  {
    v14 = *((_QWORD *)PspSystemPartition + 1);
    v84 = (_BYTE *)(v14 + 1292);
    v15 = (_LIST_ENTRY *)(v14 + 1168);
    v16 = (_BYTE *)(v14 + 780);
    goto LABEL_67;
  }
  Flags = FileObject->Flags;
  if ( (Flags & 0x10) != 0 || (Flags & 0x1000000) != 0 )
    return 1;
  *((_QWORD *)&v79 + 1) = &CcMasterLock;
  *(_QWORD *)&v79 = 0LL;
  *(_QWORD *)&Wait = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && Wait <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( Wait != 2 )
      v7 = (-1LL << (Wait + 1)) & 4;
    SchedulerAssist[5] |= v7;
    v8 = &CcMasterLock;
  }
  LOBYTE(v80) = Wait;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v79, &CcMasterLock);
  }
  else
  {
    v11 = _InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&v79);
    if ( v11 )
      KxWaitForLockOwnerShip(&v79, v11, Wait, &CcMasterLock);
  }
  SectionObjectPointer = v4->SectionObjectPointer;
  if ( SectionObjectPointer && (SharedCacheMap = SectionObjectPointer->SharedCacheMap) != 0LL )
    v14 = SharedCacheMap[67];
  else
    v14 = *((_QWORD *)PspSystemPartition + 1);
  if ( CcEnablePerVolumeLazyWriter )
  {
    if ( SectionObjectPointer && (v17 = SectionObjectPointer->SharedCacheMap) != 0LL )
    {
      v5 = (__int64 *)v17[75];
    }
    else
    {
      Vpb = v4->Vpb;
      if ( Vpb )
        DeviceObject = Vpb->DeviceObject;
      else
        DeviceObject = v4->DeviceObject;
      v20 = (__int64 *)CcVolumeCacheMapList;
      if ( (__int64 *)CcVolumeCacheMapList != &CcVolumeCacheMapList )
      {
        while ( (PDEVICE_OBJECT)*(v20 - 1) != DeviceObject )
        {
          v20 = (__int64 *)*v20;
          if ( v20 == &CcVolumeCacheMapList )
            goto LABEL_36;
        }
        v21 = v20 + 24;
        v22 = (__int64 *)v20[24];
        if ( v22 == v21 )
        {
LABEL_35:
          v5 = 0LL;
        }
        else
        {
          while ( 1 )
          {
            v5 = v22 - 74;
            if ( *(v22 - 70) == v14 )
              break;
            v22 = (__int64 *)*v22;
            if ( v22 == v21 )
              goto LABEL_35;
          }
        }
      }
    }
LABEL_36:
    v84 = (char *)v5 + 1172;
    v15 = (_LIST_ENTRY *)(v5 + 138);
    v16 = (char *)v5 + 708;
  }
  else
  {
    v84 = (_BYTE *)(v14 + 1292);
    v15 = (_LIST_ENTRY *)(v14 + 1168);
    v16 = (_BYTE *)(v14 + 780);
  }
  v7 = 1LL;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v14 + 1296)) <= 1 )
    __fastfail(0xEu);
  if ( v5 && _InterlockedIncrement64(v5 + 1) <= 1 )
    __fastfail(0xEu);
  v23 = v4->SectionObjectPointer;
  v24 = 0;
  v76 = 1;
  v101 = 0LL;
  v100 = 0LL;
  if ( v23 )
  {
    v25 = v23->SharedCacheMap;
    if ( v25 )
      v24 = (v25[38] & 0x40000000) != 0;
  }
  if ( !byte_140C5F961 )
  {
    if ( v23 )
    {
      v26 = v23->SharedCacheMap;
      if ( v26 )
      {
        P = (PVOID)*((_QWORD *)v26 + 64);
        v75 = 1;
        ++*((_DWORD *)P + 1);
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v79, retaddr);
  }
  else
  {
    _m_prefetchw(&v79);
    v27 = v79;
    if ( !(_QWORD)v79 )
    {
      if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v79 + 1), 0LL, (signed __int64)&v79) == &v79 )
        goto LABEL_56;
      v27 = KxWaitForLockChainValid(&v79);
    }
    v7 = v27 + 8;
    *(_QWORD *)&v79 = 0LL;
    v28 = BYTE8(v79);
    if ( ((v28 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v27 + 8), *((__int64 *)&v79 + 1))) & 4) != 0 )
    {
      _InterlockedOr(v73, 0);
      KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[(v7 >> 5) & 0x7F], 0LL));
    }
  }
LABEL_56:
  v29 = (unsigned __int8)v80;
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v80 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v8 = (KSPIN_LOCK *)CurrentPrcb->SchedulerAssist;
      v7 = -1LL << ((unsigned __int8)v80 + 1);
      v32 = ~(unsigned __int16)v7;
      v33 = (v32 & *((_DWORD *)v8 + 5)) == 0;
      *(_QWORD *)&Wait = (unsigned int)v32 & *((_DWORD *)v8 + 5);
      *((_DWORD *)v8 + 5) = Wait;
      if ( v33 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v29);
  if ( v24 )
    goto LABEL_121;
  if ( !CcEnablePerVolumeLazyWriter )
    goto LABEL_69;
  if ( !v5 )
    goto LABEL_121;
  v4 = FileObject;
LABEL_67:
  if ( !CcEnablePerVolumeLazyWriter || v4 )
  {
    while ( 1 )
    {
LABEL_69:
      ++v77;
      v34 = 0;
      v35 = BytesToWrite;
      v36 = 0;
      v74 = 0;
      if ( Retrying
        || v15->Flink == v15
        || CcAzure_LargeWriteSize && BytesToWrite && BytesToWrite >= CcAzure_LargeWriteSize )
      {
        CanIWriteStream = CcCanIWriteStreamEx(v14, (_DWORD)v5, (_DWORD)FileObject, BytesToWrite, 0, 0, (__int64)&v74);
        v34 = v74;
        v36 = CanIWriteStream;
        if ( CanIWriteStream && !v74 || v77 == 2 && CanIWriteStream )
          goto LABEL_121;
        v35 = BytesToWrite;
      }
      if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
        CcPerfLogCanWriteFail(FileObject, v35, *(_QWORD *)(v14 + 1056), *(_QWORD *)(v14 + 1080));
      LOBYTE(v7) = 1;
      CcAdjustWriteBehindThreadPoolIfNeeded(v14, v7);
      if ( v105 )
        break;
      if ( v77 != 1 )
      {
        v38 = P;
        if ( P )
          ++*((_QWORD *)P + 49);
        goto LABEL_123;
      }
      if ( !v36 )
      {
        v36 = 0;
        goto LABEL_122;
      }
      if ( !v34 )
        goto LABEL_121;
      Interval.HighPart = -1;
      Interval.LowPart = -10000 * CcSoftThrottleDelay;
      DbgPrintEx(0x7Fu, 2u, "CcCanIWrite: will delay %lums before retrying async-write\n", CcSoftThrottleDelay);
      if ( P )
        ++*((_QWORD *)P + 50);
      KeDelayExecutionThread(0, 0, &Interval);
    }
    Object = 393216LL;
    v86[1] = v86;
    v86[0] = v86;
    v91 = FileObject;
    v90 = 6816508LL;
    v93 = 0LL;
    p_Object = &Object;
    ListEntry = 0LL;
    LODWORD(ListEntry.Flink) = BytesToWrite;
    v96 = 0LL;
    v97 = v14;
    v98 = (unsigned __int64)v5;
    v95 = 0LL;
    v99 = MEMORY[0xFFFFF78000000320];
    if ( !v36 || (BYTE8(v98) = 1, !v74) )
      BYTE8(v98) = 0;
    v39 = (KSPIN_LOCK *)(v14 + 1216);
    if ( Retrying )
      ExInterlockedInsertHeadList(v15, (PLIST_ENTRY)&ListEntry.Blink, v39);
    else
      ExInterlockedInsertTailList(v15, (PLIST_ENTRY)&ListEntry.Blink, v39);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v14 + 768), &LockHandle);
    LOBYTE(v40) = 1;
    CcScheduleLazyWriteScan(v14, v5, v40, 0LL);
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      v42 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v42 <= 0xFu && LockHandle.OldIrql <= 0xFu && v42 >= 2u )
      {
        v43 = KeGetCurrentPrcb();
        v44 = v43->SchedulerAssist;
        v45 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v33 = (v45 & v44[5]) == 0;
        v44[5] &= v45;
        if ( v33 )
          KiRemoveSystemWorkPriorityKick(v43);
      }
    }
    __writecr8(OldIrql);
    CcPostDeferredWrites(v14, v5);
    if ( KeWaitForSingleObject(&Object, Executive, 0, 0, &CcIdleDelay) )
    {
      v46 = v84;
      do
      {
        if ( *v46 || *v16 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v14 + 768), &LockHandle);
          LOBYTE(v47) = 1;
          CcScheduleLazyWriteScan(v14, v5, v47, 0LL);
          if ( *v16 )
            *v16 = 0;
          KxReleaseQueuedSpinLock(&LockHandle);
          v48 = LockHandle.OldIrql;
          if ( (_DWORD)KiIrqlFlags )
          {
            v49 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v49 <= 0xFu && LockHandle.OldIrql <= 0xFu && v49 >= 2u )
            {
              v50 = KeGetCurrentPrcb();
              v51 = v50->SchedulerAssist;
              v52 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v33 = (v52 & v51[5]) == 0;
              v51[5] &= v52;
              if ( v33 )
                KiRemoveSystemWorkPriorityKick(v50);
            }
          }
          __writecr8(v48);
        }
        CcPostDeferredWrites(v14, v5);
      }
      while ( KeWaitForSingleObject(&Object, Executive, 0, 0, &CcIdleDelay) );
    }
  }
LABEL_121:
  v36 = 1;
LABEL_122:
  v38 = P;
LABEL_123:
  if ( !v75 )
    goto LABEL_158;
  ++v38[48];
  v82 = (volatile signed __int64 *)&CcMasterLock;
  v53 = 0;
  v81 = 0LL;
  v83 = 0LL;
  v54 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v54 <= 0xFu )
  {
    v8 = (KSPIN_LOCK *)KeGetCurrentPrcb()->SchedulerAssist;
    if ( v54 == 2 )
      LODWORD(v55) = v89;
    else
      v55 = (-1LL << (v54 + 1)) & 4;
    *(_QWORD *)&Wait = (unsigned int)v55 | *((_DWORD *)v8 + 5);
    *((_DWORD *)v8 + 5) = Wait;
  }
  LOBYTE(v83) = v54;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v81, &CcMasterLock);
  }
  else
  {
    v56 = _InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&v81);
    if ( v56 )
      KxWaitForLockOwnerShip(&v81, v56, Wait, v8);
  }
  v57 = *((_DWORD *)v38 + 1);
  if ( !v57 )
    KeBugCheckEx(0x34u, 0x645uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v58 = v57 - 1;
  *((_DWORD *)v38 + 1) = v58;
  if ( !v58 )
  {
    v59 = (_QWORD **)v38[2];
    v60 = (PVOID *)v38[3];
    v53 = 1;
    if ( v59[1] != v38 + 2 || *v60 != v38 + 2 )
      __fastfail(3u);
    *v60 = v59;
    v59[1] = v60;
    _InterlockedDecrement64(&qword_140C5F968);
    v61 = (void *)v38[20];
    if ( v61 )
    {
      ObfDereferenceObject(v61);
      v38[20] = 0LL;
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v81, retaddr);
    goto LABEL_149;
  }
  _m_prefetchw(&v81);
  v62 = v81;
  if ( v81 )
  {
LABEL_147:
    v81 = 0LL;
    v63 = (unsigned __int8)v82;
    if ( ((v63 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v62 + 8), (__int64)v82)) & 4) != 0 )
    {
      _InterlockedOr(v73, 0);
      KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v62 + 8) >> 5) & 0x7F], 0LL));
    }
    goto LABEL_149;
  }
  if ( (__int64 *)_InterlockedCompareExchange64(v82, 0LL, (signed __int64)&v81) != &v81 )
  {
    v62 = KxWaitForLockChainValid(&v81);
    goto LABEL_147;
  }
LABEL_149:
  v64 = (unsigned __int8)v83;
  if ( (_DWORD)KiIrqlFlags )
  {
    v65 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v65 <= 0xFu && (unsigned __int8)v83 <= 0xFu && v65 >= 2u )
    {
      v66 = KeGetCurrentPrcb();
      v67 = v66->SchedulerAssist;
      v68 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v83 + 1));
      v33 = (v68 & v67[5]) == 0;
      v67[5] &= v68;
      if ( v33 )
        KiRemoveSystemWorkPriorityKick(v66);
    }
  }
  __writecr8(v64);
  if ( v53 )
  {
    v69 = *((_DWORD *)v38 + 51);
    ExFreePoolWithTag(v38, 0x6D566343u);
    DbgPrintEx(
      0x7Fu,
      3u,
      "[%04x:%04x]CcDecrementVolumeUseCountWithDelete: VCM:%p(vid:%2lx) Freed!\n",
      LODWORD(KeGetCurrentThread()[1].CycleTime),
      KeGetCurrentThread()[1].CurrentRunTime,
      v38,
      v69);
  }
LABEL_158:
  if ( v76 )
  {
    v70 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 1296), 0xFFFFFFFFFFFFFFFFuLL);
    v71 = v70 <= 1;
    v72 = v70 - 1;
    if ( v71 )
    {
      if ( v72 )
        __fastfail(0xEu);
      KeSetEvent((PRKEVENT)(v14 + 1328), 0, 0);
    }
    if ( v5 && _InterlockedDecrement64(v5 + 1) <= -1 )
      __fastfail(0xEu);
  }
  return v36;
}
