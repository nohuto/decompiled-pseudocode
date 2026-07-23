/*
 * XREFs of NtSetInformationWorkerFactory @ 0x140302E90
 * Callers:
 *     <none>
 * Callees:
 *     ObpDeferObjectDeletion @ 0x14020B950 (ObpDeferObjectDeletion.c)
 *     KeAreAllApcsDisabled @ 0x140215020 (KeAreAllApcsDisabled.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KeSetTimer2 @ 0x140250130 (KeSetTimer2.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140260E00 (KxWaitForLockOwnerShip.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402B8D10 (ExpWorkerFactoryCheckCreate.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1402F4E10 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ExpWorkerFactoryCreateThread @ 0x140303D2C (ExpWorkerFactoryCreateThread.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x140304BB4 (ExpLeaveWorkerFactoryAwayMode.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x140304C0C (ExpTryEnterWorkerFactoryAwayMode.c)
 *     KxWaitForLockChainValid @ 0x14031A4F0 (KxWaitForLockChainValid.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x140357BF0 (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     KiValidateCpuSetMasks @ 0x14039D37C (KiValidateCpuSetMasks.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     Feature_1697191224__private_IsEnabledDeviceUsage @ 0x140412288 (Feature_1697191224__private_IsEnabledDeviceUsage.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045FB2E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405715E8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057FFFC (KiHaltOnAddressWakeEntireList.c)
 *     ObpPushStackInfo @ 0x140582C68 (ObpPushStackInfo.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1406E3750 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     ObpRemoveObjectRoutine @ 0x1407297E0 (ObpRemoveObjectRoutine.c)
 *     ExSystemExceptionFilter @ 0x140865F70 (ExSystemExceptionFilter.c)
 *     ObpDeregisterObject @ 0x14097CA00 (ObpDeregisterObject.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetInformationWorkerFactory(
        HANDLE WorkerFactoryHandle,
        WORKERFACTORYINFOCLASS WorkerFactoryInformationClass,
        PVOID WorkerFactoryInformation,
        ULONG WorkerFactoryInformationLength)
{
  KPROCESSOR_MODE PreviousMode; // si
  ULONG v8; // r12d
  __int64 v9; // r13
  NTSTATUS result; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  PVOID v13; // rcx
  NTSTATUS Thread; // r14d
  char v15; // r11
  char *v16; // rsi
  unsigned __int64 *v17; // r8
  unsigned __int8 CurrentIrql; // dl
  _DWORD *SchedulerAssist; // r10
  signed __int64 *v20; // rdx
  __int64 v21; // rdx
  unsigned int v22; // ecx
  int v23; // eax
  unsigned int *v24; // r13
  int v25; // r12d
  _DWORD *v26; // r12
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 v28; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v30; // r9
  int v31; // eax
  bool v32; // zf
  __int64 v33; // rax
  char v34; // al
  unsigned int v35; // ecx
  unsigned int v36; // eax
  unsigned __int64 v37; // rdi
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r10
  _DWORD *v40; // r9
  int v41; // eax
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  unsigned __int8 Lock; // cl
  unsigned __int64 v44; // rbx
  unsigned __int8 v45; // cl
  struct _KPRCB *v46; // r10
  _DWORD *v47; // r9
  int v48; // eax
  signed __int64 v49; // rsi
  signed __int64 v50; // r12
  bool v51; // cc
  signed __int64 v52; // r12
  __int64 v53; // rax
  signed __int32 v54[8]; // [rsp+0h] [rbp-1D8h] BYREF
  NTSTATUS v55; // [rsp+30h] [rbp-1A8h]
  char v56; // [rsp+34h] [rbp-1A4h]
  char v57; // [rsp+35h] [rbp-1A3h]
  PVOID Object; // [rsp+38h] [rbp-1A0h] BYREF
  char v59; // [rsp+42h] [rbp-196h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-190h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-178h]
  _DWORD *v62; // [rsp+68h] [rbp-170h]
  _DWORD *v63; // [rsp+70h] [rbp-168h]
  _QWORD v64[35]; // [rsp+78h] [rbp-160h] BYREF
  void *retaddr; // [rsp+1D8h] [rbp+0h]

  LODWORD(v62) = WorkerFactoryInformationClass;
  Handle = WorkerFactoryHandle;
  memset(&LockHandle, 0, sizeof(LockHandle));
  *(_OWORD *)v64 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset(&v64[3], 0, 0x100uLL);
  switch ( WorkerFactoryInformationClass )
  {
    case WorkerFactoryIdleTimeout:
      v8 = 8;
      goto LABEL_9;
    case WorkerFactoryBindingCount:
    case WorkerFactoryThreadMinimum:
    case WorkerFactoryThreadMaximum:
    case WorkerFactoryAdjustThreadGoal:
    case WorkerFactoryCallbackType:
    case WorkerFactoryThreadBasePriority:
    case WorkerFactoryTimeoutWaiters:
    case WorkerFactoryFlags:
    case WorkerFactoryThreadSoftMaximum:
      LODWORD(v9) = 4;
      v8 = 4;
      goto LABEL_10;
    case WorkerFactoryPaused:
      return -1073741822;
    case WorkerFactoryStackInformation:
      v8 = 16;
LABEL_9:
      LODWORD(v9) = 4;
      goto LABEL_10;
    case WorkerFactoryThreadCpuSets:
      LODWORD(v9) = 4;
      if ( WorkerFactoryInformationLength >= 0x100 )
        v8 = 256;
      else
        v8 = WorkerFactoryInformationLength + (WorkerFactoryInformationLength & 7);
LABEL_10:
      if ( WorkerFactoryInformationLength != v8 )
        return -1073741820;
      switch ( WorkerFactoryInformationClass )
      {
        case WorkerFactoryIdleTimeout:
          if ( PreviousMode && ((unsigned __int8)WorkerFactoryInformation & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v64[3] = *(_QWORD *)WorkerFactoryInformation;
          v12 = v64[3];
          break;
        case WorkerFactoryBindingCount:
        case WorkerFactoryThreadMinimum:
        case WorkerFactoryThreadMaximum:
          if ( PreviousMode )
          {
            v11 = 0x7FFFFFFF0000LL;
            if ( (unsigned __int64)WorkerFactoryInformation < 0x7FFFFFFF0000LL )
              v11 = (__int64)WorkerFactoryInformation;
            v12 = *(_DWORD *)v11;
            LODWORD(v64[3]) = *(_DWORD *)v11;
          }
          else
          {
            v12 = *(_DWORD *)WorkerFactoryInformation;
            LODWORD(v64[3]) = *(_DWORD *)WorkerFactoryInformation;
          }
          break;
        default:
          __fastfail(0x25u);
      }
      Object = 0LL;
      result = ObReferenceObjectByHandle(Handle, 4u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
      if ( result < 0 )
        return result;
      if ( WorkerFactoryInformationClass == WorkerFactoryAdjustThreadGoal )
      {
        v13 = Object;
        if ( !v12 )
        {
          v12 = KeNumberProcessors_0;
          v13 = Object;
        }
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Object + 2) + 8LL) + 44LL) = v12;
        ObfDereferenceObjectWithTag(v13, 0x746C6644u);
        return 0;
      }
      Thread = 0;
      v15 = 0;
      v57 = 0;
      LOBYTE(result) = 0;
      v55 = result;
      v59 = 0;
      v56 = 1;
      v16 = (char *)Object;
      v17 = (unsigned __int64 *)*((_QWORD *)Object + 2);
      LockHandle.LockQueue.Lock = v17;
      LockHandle.LockQueue.Next = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql != 2 )
          v9 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v9;
        v12 = v64[3];
        v16 = (char *)Object;
      }
      LockHandle.OldIrql = CurrentIrql;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, v17);
        v15 = 0;
      }
      else
      {
        v20 = (signed __int64 *)_InterlockedExchange64((volatile __int64 *)v17, (__int64)&LockHandle);
        if ( v20 )
        {
          KxWaitForLockOwnerShip((signed __int64)&LockHandle, v20);
          v15 = 0;
        }
        v16 = (char *)Object;
        v12 = v64[3];
      }
      switch ( (int)v62 )
      {
        case 2:
          if ( (unsigned int)Feature_1697191224__private_IsEnabledDeviceUsage()
            && *(_BYTE *)(*((_QWORD *)v16 + 2) + 33LL) )
          {
            Thread = 128;
            goto LABEL_41;
          }
          v21 = v64[3];
          if ( v64[3] >= 0LL )
          {
            Thread = -1073741811;
            v15 = 0;
          }
          else
          {
            if ( v64[3] > -10000000LL )
              v21 = -10000000LL;
            if ( v21 < -6000000000LL )
              v21 = -6000000000LL;
            v64[3] = v21;
            *((_QWORD *)v16 + 14) = v21;
            v64[1] = -1LL;
            KeSetTimer2((__int64)(v16 + 424), v21, -v21, (__int64)v64);
            v15 = 0;
          }
          goto LABEL_99;
        case 3:
          v22 = *((_DWORD *)v16 + 101);
          if ( (v12 & 0x80000000) != 0 )
          {
            if ( v22 <= -v12 )
            {
              *((_DWORD *)v16 + 101) = 0;
              v23 = 0;
            }
            else
            {
              v23 = v22 + v12;
              *((_DWORD *)v16 + 101) = v22 + v12;
            }
          }
          else
          {
            v23 = v22 + v12;
            if ( v22 >= v22 + v12 )
            {
              *((_DWORD *)v16 + 101) = -1;
              v23 = -1;
            }
            else
            {
              *((_DWORD *)v16 + 101) = v23;
            }
          }
          if ( v22 )
          {
            if ( !v23 && (*((_DWORD *)v16 + 102) & 0x200) != 0 )
            {
              ExpLeaveWorkerFactoryAwayMode(v16);
              v15 = 0;
            }
          }
          else if ( v23 )
          {
            if ( (unsigned __int8)ExpTryEnterWorkerFactoryAwayMode(v16) )
            {
              ExpWorkerFactoryCheckCreate((PSLIST_ENTRY)v16, &LockHandle, 0);
              v56 = 0;
              v15 = 0;
            }
            else
            {
LABEL_41:
              v15 = 0;
            }
          }
          goto LABEL_99;
        case 4:
          Handle = v16 + 16;
          if ( *(_BYTE *)(*((_QWORD *)v16 + 2) + 33LL) )
          {
            Thread = 128;
            goto LABEL_99;
          }
          v24 = (unsigned int *)(v16 + 376);
          v25 = (unsigned __int8)v55;
          if ( v12 > *((_DWORD *)v16 + 94) )
            v25 = 1;
          v55 = v25;
          *v24 = v12;
          if ( *((_DWORD *)v16 + 95) < v12 )
            *((_DWORD *)v16 + 95) = v12;
          if ( !(_BYTE)v25 )
            goto LABEL_99;
          LOBYTE(v55) = 0;
          if ( (*((_DWORD *)v16 + 102) & 0x200) != 0 )
            ExpLeaveWorkerFactoryAwayMode(v16);
          v63 = v16 + 392;
          v62 = v16 + 384;
          if ( *((_DWORD *)v16 + 96) + *((_DWORD *)v16 + 98) >= *v24 )
            goto LABEL_86;
          v26 = v16 + 400;
          break;
        case 5:
          v33 = *((_QWORD *)v16 + 2);
          if ( *(_BYTE *)(v33 + 33) )
          {
            Thread = 128;
            goto LABEL_99;
          }
          v15 = 1;
          v57 = 1;
          if ( v12 && (!*((_DWORD *)v16 + 95) && *(_DWORD *)(v33 + 24) || *(int *)(*(_QWORD *)(v33 + 8) + 4LL) > 0) )
            v34 = 1;
          else
            v34 = v55;
          *((_DWORD *)v16 + 95) = v12;
          if ( v12 < *((_DWORD *)v16 + 94) )
            *((_DWORD *)v16 + 94) = v12;
          goto LABEL_100;
        default:
          __fastfail(0x25u);
      }
      while ( 1 )
      {
        ++*v26;
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( (_DWORD)KiIrqlFlags )
        {
          v28 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v28 <= 0xFu && LockHandle.OldIrql <= 0xFu && v28 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v30 = CurrentPrcb->SchedulerAssist;
            v31 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v32 = (v31 & v30[5]) == 0;
            v30[5] &= v31;
            if ( v32 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v16 = (char *)Object;
          }
        }
        __writecr8(OldIrql);
        Thread = ExpWorkerFactoryCreateThread(v16);
        KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)Handle, &LockHandle);
        if ( Thread < 0 )
          break;
        if ( *v63 + *v62 >= *v24 )
        {
LABEL_86:
          v15 = 0;
          goto LABEL_99;
        }
      }
      --*((_DWORD *)v16 + 100);
      v15 = 0;
LABEL_99:
      v34 = v55;
LABEL_100:
      if ( v34 )
      {
        v35 = *((_DWORD *)v16 + 96);
        if ( *(_BYTE *)(*((_QWORD *)v16 + 2) + 33LL) )
        {
          Thread = 128;
        }
        else
        {
          v36 = *((_DWORD *)v16 + 95);
          if ( v35 < v36 )
          {
            if ( *((_DWORD *)v16 + 100) || v35 + *((_DWORD *)v16 + 98) >= v36 )
              goto LABEL_120;
            if ( (*((_DWORD *)v16 + 102) & 0x200) != 0 )
              ExpLeaveWorkerFactoryAwayMode(v16);
            ++*((_DWORD *)v16 + 100);
            KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
            v37 = LockHandle.OldIrql;
            if ( (_DWORD)KiIrqlFlags )
            {
              v38 = KeGetCurrentIrql();
              if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v38 <= 0xFu && LockHandle.OldIrql <= 0xFu && v38 >= 2u )
              {
                v39 = KeGetCurrentPrcb();
                v40 = v39->SchedulerAssist;
                v41 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v32 = (v41 & v40[5]) == 0;
                v40[5] &= v41;
                if ( v32 )
                  KiRemoveSystemWorkPriorityKick(v39);
                v16 = (char *)Object;
              }
            }
            __writecr8(v37);
            v56 = 0;
            Thread = ExpWorkerFactoryCreateThread(v16);
            if ( Thread < 0 )
            {
              v56 = 1;
              KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)v16 + 2), &LockHandle);
              --*((_DWORD *)v16 + 100);
              if ( v57 )
LABEL_120:
                Thread = 0;
            }
          }
          else if ( !v15 )
          {
            Thread = -1073741527;
          }
        }
      }
      if ( !v56 )
        goto LABEL_139;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
        goto LABEL_130;
      }
      _m_prefetchw(&LockHandle);
      Next = LockHandle.LockQueue.Next;
      if ( LockHandle.LockQueue.Next )
        goto LABEL_127;
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) != &LockHandle )
      {
        Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
LABEL_127:
        LockHandle.LockQueue.Next = 0LL;
        Lock = (unsigned __int8)LockHandle.LockQueue.Lock;
        if ( ((Lock ^ (unsigned __int8)_InterlockedExchange64(
                                         (volatile __int64 *)&Next->Lock,
                                         (__int64)LockHandle.LockQueue.Lock)) & 4) != 0 )
        {
          _InterlockedOr(v54, 0);
          KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)&Next->Lock >> 5) & 0x7F], 0LL));
        }
      }
      v16 = (char *)Object;
LABEL_130:
      v44 = LockHandle.OldIrql;
      if ( (_DWORD)KiIrqlFlags )
      {
        v45 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v45 <= 0xFu && LockHandle.OldIrql <= 0xFu && v45 >= 2u )
        {
          v46 = KeGetCurrentPrcb();
          v47 = v46->SchedulerAssist;
          v48 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v32 = (v48 & v47[5]) == 0;
          v47[5] &= v48;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick(v46);
          v16 = (char *)Object;
        }
      }
      __writecr8(v44);
LABEL_139:
      v49 = (signed __int64)(v16 - 48);
      if ( ObpTraceFlags )
        ObpPushStackInfo(v49);
      v50 = _InterlockedExchangeAdd64((volatile signed __int64 *)v49, 0xFFFFFFFFFFFFFFFFuLL);
      v51 = v50 <= 1;
      v52 = v50 - 1;
      if ( !v51 )
        return Thread;
      if ( *(_QWORD *)(v49 + 8) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v49 + 24) ^ (unsigned __int64)BYTE1(v49)],
          (ULONG_PTR)Object,
          1uLL,
          *(_QWORD *)(v49 + 8));
      if ( v52 < 0 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v52);
      if ( KeAreAllApcsDisabled() )
      {
        ObpDeferObjectDeletion(v49);
        return Thread;
      }
      v53 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v49);
      if ( v53 )
        ObpHandleRevocationBlockRemoveObject(v53);
      if ( ObpTraceFlags )
        ObpDeregisterObject(v49);
      ObpRemoveObjectRoutine(v49, 0LL);
      return Thread;
    default:
      return -1073741821;
  }
}
