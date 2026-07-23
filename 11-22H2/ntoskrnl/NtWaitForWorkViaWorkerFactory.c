/*
 * XREFs of NtWaitForWorkViaWorkerFactory @ 0x1402A9090
 * Callers:
 *     <none>
 * Callees:
 *     ObpDeferObjectDeletion @ 0x14020B950 (ObpDeferObjectDeletion.c)
 *     KeAreAllApcsDisabled @ 0x140215020 (KeAreAllApcsDisabled.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     KeRegisterObjectNotification @ 0x140250890 (KeRegisterObjectNotification.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x140258390 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     ObpIncrPointerCount @ 0x14025A124 (ObpIncrPointerCount.c)
 *     ObpTraceObjectReferenceIfActive @ 0x14025A14C (ObpTraceObjectReferenceIfActive.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140260E00 (KxWaitForLockOwnerShip.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8BC0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExpWorkerFactoryFinishDeferredWork @ 0x1402A9020 (ExpWorkerFactoryFinishDeferredWork.c)
 *     IoRemoveIoCompletion @ 0x1402A9C40 (IoRemoveIoCompletion.c)
 *     KiSetPriorityThread @ 0x1402B05A0 (KiSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x1402B0E40 (KiProcessDeferredReadyList.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 *     AlpciSendDeferredMessageBeforeWait @ 0x1402B6990 (AlpciSendDeferredMessageBeforeWait.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402B8D10 (ExpWorkerFactoryCheckCreate.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1402BACC8 (KiUpdateTotalCyclesCurrentThread.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1402F4E10 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x140304BB4 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KxWaitForLockChainValid @ 0x14031A4F0 (KxWaitForLockChainValid.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x140357BF0 (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     ExpWorkerFactoryWantsToCreate @ 0x14035AE18 (ExpWorkerFactoryWantsToCreate.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045FB2E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405715E8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057FFFC (KiHaltOnAddressWakeEntireList.c)
 *     ObpPushStackInfo @ 0x140582C68 (ObpPushStackInfo.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14060B12C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1406E3750 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1407293F0 (ProbeForWrite.c)
 *     ObpRemoveObjectRoutine @ 0x1407297E0 (ObpRemoveObjectRoutine.c)
 *     NtAlpcSendWaitReceivePort @ 0x14073B0C0 (NtAlpcSendWaitReceivePort.c)
 *     ExSystemExceptionFilter @ 0x140865F70 (ExSystemExceptionFilter.c)
 *     ObpDeregisterObject @ 0x14097CA00 (ObpDeregisterObject.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtWaitForWorkViaWorkerFactory(
        HANDLE WorkerFactoryHandle,
        PFILE_IO_COMPLETION_INFORMATION MiniPackets,
        ULONG Count,
        PULONG PacketsReturned,
        PWORKER_FACTORY_DEFERRED_WORK DeferredWork)
{
  char *v7; // rsi
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v9; // rcx
  int v10; // r14d
  unsigned __int64 *v11; // r8
  unsigned __int8 CurrentIrql; // dl
  signed __int64 *v13; // rdx
  PVOID v14; // rbx
  _DWORD *v15; // rcx
  _DWORD *v16; // rax
  _KSPIN_LOCK_QUEUE *volatile v17; // rax
  unsigned __int64 v18; // r14
  struct _KTHREAD *v19; // r14
  PVOID v20; // r15
  unsigned __int64 *v21; // r8
  unsigned __int8 v22; // dl
  signed __int64 *v23; // rdx
  _DWORD *v24; // r12
  struct _KTHREAD *v25; // r15
  unsigned int v26; // ecx
  _QWORD *v27; // rbx
  struct _KTHREAD **v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdi
  PVOID *v31; // rbx
  __int64 v32; // r15
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  unsigned __int64 v34; // rbx
  signed __int64 v35; // rdi
  bool v36; // cc
  signed __int64 v37; // rdi
  _DWORD *v39; // r11
  __int64 v40; // r9
  _DWORD *SchedulerAssist; // r11
  __int64 v42; // r9
  _DWORD *v43; // r9
  struct _KPRCB *v44; // rcx
  ULONG_PTR SystemPriority; // rcx
  unsigned __int8 v46; // al
  unsigned __int8 v47; // al
  unsigned int v48; // edx
  char Priority; // dl
  char v50; // cl
  KIRQL v51; // r14
  int v52; // ecx
  __int64 v53; // rdx
  unsigned __int8 v54; // cl
  void *v55; // rcx
  struct _KPRCB *v56; // rcx
  signed __int32 *v57; // r8
  struct _KPRCB *v58; // rbx
  bool v59; // zf
  __int64 v60; // r10
  _DWORD *v61; // r9
  __int64 v62; // rdx
  signed __int32 v63; // eax
  signed __int32 v64; // ett
  unsigned __int8 Lock; // cl
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v67; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v69; // r9
  int v70; // eax
  unsigned __int8 v71; // cl
  struct _KPRCB *v72; // r10
  _DWORD *v73; // r9
  int v74; // eax
  unsigned __int8 v75; // cl
  struct _KPRCB *v76; // r10
  _DWORD *v77; // r9
  int v78; // eax
  unsigned __int8 v79; // cl
  struct _KPRCB *v80; // r10
  _DWORD *v81; // r9
  int v82; // eax
  unsigned __int8 v83; // cl
  struct _KPRCB *v84; // r10
  _DWORD *v85; // r9
  int v86; // eax
  BOOLEAN v87; // al
  signed __int64 v88; // rcx
  __int64 v89; // rax
  signed __int32 v90[8]; // [rsp+0h] [rbp-1C8h] BYREF
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-1A0h]
  KIRQL v92; // [rsp+40h] [rbp-188h]
  KPROCESSOR_MODE v93; // [rsp+41h] [rbp-187h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-180h] BYREF
  __int64 v95; // [rsp+60h] [rbp-168h] BYREF
  PVOID Object; // [rsp+68h] [rbp-160h] BYREF
  _DWORD *v97; // [rsp+70h] [rbp-158h]
  PFILE_IO_COMPLETION_INFORMATION v98; // [rsp+78h] [rbp-150h]
  struct _KPRCB *v99; // [rsp+80h] [rbp-148h]
  PULONG v100; // [rsp+88h] [rbp-140h]
  PVOID P; // [rsp+90h] [rbp-138h]
  HANDLE v102; // [rsp+98h] [rbp-130h]
  int v103; // [rsp+A0h] [rbp-128h] BYREF
  int v104; // [rsp+A4h] [rbp-124h] BYREF
  volatile void *Address; // [rsp+A8h] [rbp-120h]
  PVOID v106; // [rsp+B0h] [rbp-118h]
  __int128 v107; // [rsp+B8h] [rbp-110h] BYREF
  HANDLE PortHandle[2]; // [rsp+C8h] [rbp-100h]
  ULONG Flags[2]; // [rsp+D8h] [rbp-F0h]
  __int64 v110; // [rsp+E0h] [rbp-E8h] BYREF
  PVOID v111; // [rsp+E8h] [rbp-E0h]
  struct _KTHREAD *CurrentThread; // [rsp+F0h] [rbp-D8h]
  _BYTE v113[128]; // [rsp+100h] [rbp-C8h] BYREF
  void *retaddr; // [rsp+1C8h] [rbp+0h]

  v100 = PacketsReturned;
  Address = MiniPackets;
  v102 = WorkerFactoryHandle;
  v98 = MiniPackets;
  LODWORD(v97) = Count;
  v99 = (struct _KPRCB *)PacketsReturned;
  v107 = 0LL;
  *(_OWORD *)PortHandle = 0LL;
  *(_QWORD *)Flags = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v113, 0, sizeof(v113));
  LODWORD(v95) = 0;
  v7 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v93 = PreviousMode;
  v92 = PreviousMode;
  P = v113;
  if ( Count - 1 > 0x7FFFFFE )
  {
    v10 = -1073741811;
    goto LABEL_55;
  }
  if ( PreviousMode )
  {
    ProbeForWrite(Address, 32LL * Count, 8u);
    v9 = (__int64)v100;
    if ( (unsigned __int64)v100 >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v9 = *(_DWORD *)v9;
    if ( ((unsigned __int8)DeferredWork & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&DeferredWork[1] > 0x7FFFFFFF0000LL || &DeferredWork[1] < DeferredWork )
      MEMORY[0x7FFFFFFF0000] = 0;
    *(_OWORD *)PortHandle = *(_OWORD *)&DeferredWork->AlpcSendMessage;
    *(_QWORD *)Flags = *(_QWORD *)&DeferredWork->AlpcSendMessageFlags;
  }
  else
  {
    *(_OWORD *)PortHandle = *(_OWORD *)&DeferredWork->AlpcSendMessage;
    *(_QWORD *)Flags = *(_QWORD *)&DeferredWork->AlpcSendMessageFlags;
  }
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(WorkerFactoryHandle, 2u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
  v7 = (char *)Object;
  v106 = Object;
  if ( v10 >= 0 )
  {
    if ( Count > 0x10 )
    {
      P = (PVOID)ExAllocatePool2(64LL, 8LL * Count, 1701736270LL);
      if ( !P )
        P = v113;
    }
    v11 = (unsigned __int64 *)*((_QWORD *)v7 + 2);
    LockHandle.LockQueue.Lock = v11;
    LockHandle.LockQueue.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v42) = 4;
      else
        v42 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v42;
    }
    LockHandle.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v11);
    }
    else
    {
      v13 = (signed __int64 *)_InterlockedExchange64((volatile __int64 *)v11, (__int64)&LockHandle);
      if ( v13 )
        KxWaitForLockOwnerShip((signed __int64)&LockHandle, v13);
    }
    v14 = Object;
    v111 = Object;
    if ( *(_BYTE *)(*((_QWORD *)Object + 2) + 33LL) )
    {
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( (_DWORD)KiIrqlFlags )
      {
        v67 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v67 <= 0xFu && LockHandle.OldIrql <= 0xFu && v67 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v69 = CurrentPrcb->SchedulerAssist;
          v70 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v59 = (v70 & v69[5]) == 0;
          v69[5] &= v70;
          if ( v59 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
      v10 = 128;
      goto LABEL_55;
    }
    if ( (*((_DWORD *)Object + 102) & 0x200) != 0 )
      ExpLeaveWorkerFactoryAwayMode(Object);
    ++*(_DWORD *)(*((_QWORD *)v14 + 2) + 28LL);
    v15 = (char *)Object + 380;
    v98 = (PFILE_IO_COMPLETION_INFORMATION)((char *)Object + 380);
    v16 = (char *)Object + 384;
    v97 = (char *)Object + 384;
    while ( 1 )
    {
      if ( *v15 < *v16 || *(_BYTE *)(*((_QWORD *)v14 + 2) + 33LL) )
      {
        v10 = 258;
LABEL_37:
        --*(_DWORD *)(*((_QWORD *)v7 + 2) + 28LL);
        if ( v10 == 258 )
        {
          --*((_DWORD *)v7 + 96);
          --*((_DWORD *)v7 + 97);
          ExpRemoveCurrentThreadFromThreadHistory(v7);
          v24 = v7 + 408;
        }
        else
        {
          v24 = v7 + 408;
          if ( (*((_DWORD *)v7 + 102) & 7) != 4 )
          {
            v25 = KeGetCurrentThread();
            v26 = 0;
            v27 = (char *)Object + 72;
            v28 = (struct _KTHREAD **)((char *)Object + 72);
            while ( *v28 != v25 )
            {
              ++v26;
              ++v28;
              if ( v26 >= 4 )
              {
                ObfReferenceObjectWithTag(v25, 0x746C6644u);
                v29 = 0LL;
                while ( *v27 )
                {
                  v29 = (unsigned int)(v29 + 1);
                  ++v27;
                  if ( (unsigned int)v29 >= 4 )
                  {
                    v30 = *v24 & 7;
                    v31 = (PVOID *)&v7[8 * v30];
                    ObfDereferenceObjectWithTag(v31[9], 0x746C6644u);
                    v31[9] = v25;
                    *v24 = *v24 & 0xFFFFFFF8 | ((_BYTE)v30 + 1) & 3;
                    goto LABEL_46;
                  }
                }
                *(_QWORD *)&v7[8 * v29 + 72] = v25;
                break;
              }
            }
          }
        }
LABEL_46:
        v32 = *((_QWORD *)v7 + 2);
        if ( *((_DWORD *)v7 + 96) >= *((_DWORD *)v7 + 95) || *(_DWORD *)(v32 + 28) )
        {
LABEL_48:
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
            goto LABEL_51;
          }
          _m_prefetchw(&LockHandle);
          Next = LockHandle.LockQueue.Next;
          if ( !LockHandle.LockQueue.Next )
          {
            if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                 0LL,
                                                 (signed __int64)&LockHandle) == &LockHandle )
              goto LABEL_51;
            Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
          }
          LockHandle.LockQueue.Next = 0LL;
          Lock = (unsigned __int8)LockHandle.LockQueue.Lock;
          if ( ((Lock ^ (unsigned __int8)_InterlockedExchange64(
                                           (volatile __int64 *)&Next->Lock,
                                           (__int64)LockHandle.LockQueue.Lock)) & 4) != 0 )
          {
            _InterlockedOr(v90, 0);
            KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)&Next->Lock >> 5) & 0x7F], 0LL));
          }
LABEL_51:
          v34 = LockHandle.OldIrql;
          if ( (_DWORD)KiIrqlFlags )
          {
            v83 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v83 <= 0xFu && LockHandle.OldIrql <= 0xFu && v83 >= 2u )
            {
              v84 = KeGetCurrentPrcb();
              v85 = v84->SchedulerAssist;
              v86 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v59 = (v86 & v85[5]) == 0;
              v85[5] &= v86;
              if ( v59 )
                KiRemoveSystemWorkPriorityKick(v84);
            }
          }
          __writecr8(v34);
        }
        else
        {
          if ( *((_DWORD *)v7 + 101) )
          {
            v52 = *v24 | 0x200;
            *v24 = v52;
            if ( !*(_DWORD *)(*(_QWORD *)(v32 + 8) + 4LL) )
            {
              if ( (v52 & 0x400) == 0 )
              {
                *v24 = v52 | 0x400;
                ObpTraceObjectReferenceIfActive((_DWORD)v7 - 48);
                ObpIncrPointerCount((volatile signed __int64 *)v7 - 6);
                KeRegisterObjectNotification(
                  *(_QWORD *)(v32 + 8),
                  (__int64)&ExpWorkerFactoryManagerQueue,
                  (__int64)(v7 + 616));
              }
              goto LABEL_48;
            }
          }
          ExpWorkerFactoryCheckCreate((PSLIST_ENTRY)v7, &LockHandle);
        }
        if ( !v10 )
          *v100 = v95;
        break;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
        goto LABEL_26;
      }
      _m_prefetchw(&LockHandle);
      v17 = LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_26;
        v17 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      v54 = (unsigned __int8)LockHandle.LockQueue.Lock;
      if ( ((v54 ^ (unsigned __int8)_InterlockedExchange64(
                                      (volatile __int64 *)&v17->Lock,
                                      (__int64)LockHandle.LockQueue.Lock)) & 4) != 0 )
      {
        _InterlockedOr(v90, 0);
        KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)&v17->Lock >> 5) & 0x7F], 0LL));
      }
LABEL_26:
      v18 = LockHandle.OldIrql;
      if ( (_DWORD)KiIrqlFlags )
      {
        v71 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v71 <= 0xFu && LockHandle.OldIrql <= 0xFu && v71 >= 2u )
        {
          v72 = KeGetCurrentPrcb();
          v73 = v72->SchedulerAssist;
          v74 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v59 = (v74 & v73[5]) == 0;
          v73[5] &= v74;
          if ( v59 )
            KiRemoveSystemWorkPriorityKick(v72);
        }
      }
      __writecr8(v18);
      if ( (Flags[1] & 2) != 0 )
      {
        v19 = KeGetCurrentThread();
        v20 = v19[1].WaitBlock[1].Object;
        if ( v20 )
        {
          if ( (*((_DWORD *)&v19->0 + 1) & 0x200) != 0 )
          {
            v55 = (void *)KeGetCurrentIrql();
            v102 = v55;
            __writecr8(2uLL);
            if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)v55 <= 0xFu )
            {
              v61 = KeGetCurrentPrcb()->SchedulerAssist;
              if ( (_BYTE)v55 == 2 )
                LODWORD(v62) = 4;
              else
                v62 = (-1LL << ((unsigned __int8)v55 + 1)) & 4;
              v61[5] |= v62;
            }
            v99 = KeGetCurrentPrcb();
            _disable();
            KiUpdateTotalCyclesCurrentThread(v99, v19, 0LL);
            v56 = KeGetCurrentPrcb();
            v57 = (signed __int32 *)v56->SchedulerAssist;
            if ( v57 )
            {
              _m_prefetchw(v57);
              v63 = *v57;
              do
              {
                v64 = v63;
                v63 = _InterlockedCompareExchange(v57, v63 & 0xFFDFFFFF, v63);
              }
              while ( v64 != v63 );
              if ( (v63 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick(v56);
            }
            _enable();
            v103 = 0;
            v58 = v99;
            while ( _interlockedbittestandset64((volatile signed __int32 *)&v58->PrcbLock, 0LL) )
            {
              do
                KeYieldProcessorEx(&v103);
              while ( v58->PrcbLock );
            }
            _interlockedbittestandreset(&v19->Header.Lock, 0x12u);
            v19->SchedulingGroup = 0LL;
            _interlockedbittestandreset((volatile signed __int32 *)&v19->116 + 1, 9u);
            _InterlockedAnd64((volatile signed __int64 *)&v58->PrcbLock, 0LL);
            v14 = v111;
            if ( (_DWORD)KiIrqlFlags )
            {
              v75 = KeGetCurrentIrql();
              if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v75 <= 0xFu && (unsigned __int8)v102 <= 0xFu && v75 >= 2u )
              {
                v76 = KeGetCurrentPrcb();
                v77 = v76->SchedulerAssist;
                v78 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v102 + 1));
                v59 = (v78 & v77[5]) == 0;
                v77[5] &= v78;
                if ( v59 )
                  KiRemoveSystemWorkPriorityKick(v76);
              }
            }
            __writecr8((unsigned __int8)v102);
          }
          v92 = ExAcquireSpinLockExclusive(&PspThreadWorkOnBehalfLock);
          v19[1].WaitBlock[1].Object = 0LL;
          v110 = 0LL;
          v44 = (struct _KPRCB *)KeGetCurrentIrql();
          v99 = v44;
          __writecr8(2uLL);
          if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)v44 <= 0xFu )
          {
            v43 = KeGetCurrentPrcb()->SchedulerAssist;
            if ( (_BYTE)v44 == 2 )
              LODWORD(v53) = 4;
            else
              v53 = (-1LL << ((unsigned __int8)v44 + 1)) & 4;
            v43[5] |= v53;
          }
          v104 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&v19->ThreadLock, 0LL) )
          {
            do
              KeYieldProcessorEx(&v104);
            while ( v19->ThreadLock );
          }
          SystemPriority = v19->SystemPriority;
          v19->SystemPriority = 0;
          v46 = v19->PriorityFloorCounts[SystemPriority];
          if ( !v46 )
            KeBugCheckEx(0x157u, (ULONG_PTR)v19, SystemPriority, 2uLL, 0LL);
          v47 = v46 - 1;
          v19->PriorityFloorCounts[SystemPriority] = v47;
          if ( !v47 )
          {
            v48 = v19->PriorityFloorSummary ^ (1 << SystemPriority);
            v19->PriorityFloorSummary = v48;
            if ( v48 < 1 << SystemPriority )
            {
              Priority = v19->Priority;
              if ( Priority <= 31 )
              {
                v50 = (v19->PriorityDecrement & 0xF)
                    + v19->BasePriority
                    + ((unsigned __int8)v19->PriorityDecrement >> 4);
                if ( v50 < Priority )
                  KiSetPriorityThread(v19, &v110, (unsigned int)v50, v43);
              }
            }
          }
          v19->ThreadLock = 0LL;
          KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v110, (unsigned __int8)v99);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, retaddr);
          else
            PspThreadWorkOnBehalfLock = 0;
          if ( (_DWORD)KiIrqlFlags && (v79 = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0) && v79 <= 0xFu )
          {
            v51 = v92;
            if ( v92 <= 0xFu && v79 >= 2u )
            {
              v80 = KeGetCurrentPrcb();
              v81 = v80->SchedulerAssist;
              v82 = ~(unsigned __int16)(-1LL << (v92 + 1));
              v59 = (v82 & v81[5]) == 0;
              v81[5] &= v82;
              if ( v59 )
                KiRemoveSystemWorkPriorityKick(v80);
            }
          }
          else
          {
            v51 = v92;
          }
          __writecr8(v51);
          EtwTraceThreadWorkOnBehalfUpdate((__int64)v20, 0LL);
          ObDereferenceObjectDeferDeleteWithTag(v20, 0x746E6F43u);
        }
        PreviousMode = v93;
      }
      if ( (Flags[1] & 1) != 0 )
      {
        LOBYTE(HandleInformation) = PreviousMode;
        AlpciSendDeferredMessageBeforeWait(&v107, PortHandle[1], Flags[0], PortHandle[0]);
      }
      v10 = IoRemoveIoCompletion(*(PVOID *)(*((_QWORD *)v14 + 2) + 8LL), (__int64)&v95, PreviousMode, 0LL, 1);
      ExpWorkerFactoryFinishDeferredWork((__int64)&v107);
      v21 = (unsigned __int64 *)*((_QWORD *)v14 + 2);
      LockHandle.LockQueue.Lock = v21;
      LockHandle.LockQueue.Next = 0LL;
      v22 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v22 <= 0xFu )
      {
        v39 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v22 == 2 )
          LODWORD(v40) = 4;
        else
          v40 = (-1LL << (v22 + 1)) & 4;
        v39[5] |= v40;
      }
      LockHandle.OldIrql = v22;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, v21);
      }
      else
      {
        v23 = (signed __int64 *)_InterlockedExchange64((volatile __int64 *)v21, (__int64)&LockHandle);
        if ( v23 )
          KxWaitForLockOwnerShip((signed __int64)&LockHandle, v23);
      }
      if ( v10 != 258 )
        goto LABEL_37;
      v59 = (unsigned __int8)ExpWorkerFactoryWantsToCreate(Object, 1LL) == 0;
      v16 = v97;
      v15 = v98;
      if ( v59 )
      {
        v16 = v97;
        v15 = v98;
        if ( *v97 > *(_DWORD *)(v60 + 376) )
        {
          if ( *(struct _KTHREAD **)&CurrentThread[1].SystemCallNumber == (struct _KTHREAD *)&CurrentThread[1].SystemCallNumber )
            goto LABEL_37;
          v16 = v97;
        }
      }
    }
  }
LABEL_55:
  if ( P != v113 )
    ExFreePoolWithTag(P, 0);
  if ( v7 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)v7 - 48);
    v35 = _InterlockedExchangeAdd64((volatile signed __int64 *)v7 - 6, 0xFFFFFFFFFFFFFFFFuLL);
    v36 = v35 <= 1;
    v37 = v35 - 1;
    if ( v36 )
    {
      if ( *((_QWORD *)v7 - 5) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v7 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v7 - 48) >> 8)],
          (ULONG_PTR)v7,
          1uLL,
          *((_QWORD *)v7 - 5));
      if ( v37 < 0 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v7, 2uLL, v37);
      v87 = KeAreAllApcsDisabled();
      v88 = (signed __int64)(v7 - 48);
      if ( v87 )
      {
        ObpDeferObjectDeletion(v88);
      }
      else
      {
        v89 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v88);
        if ( v89 )
          ObpHandleRevocationBlockRemoveObject(v89);
        if ( ObpTraceFlags )
          ObpDeregisterObject(v7 - 48);
        ObpRemoveObjectRoutine(v7 - 48, 0LL);
      }
    }
  }
  if ( (Flags[1] & 1) != 0 )
    NtAlpcSendWaitReceivePort(PortHandle[1], Flags[0], (PPORT_MESSAGE)PortHandle[0], 0LL, 0LL, 0LL, 0LL, 0LL);
  return v10;
}
