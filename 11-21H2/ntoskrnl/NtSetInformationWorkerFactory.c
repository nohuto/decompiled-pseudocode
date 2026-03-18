/*
 * XREFs of NtSetInformationWorkerFactory @ 0x1402D4530
 * Callers:
 *     <none>
 * Callees:
 *     KiValidateCpuSetMasks @ 0x14020F30C (KiValidateCpuSetMasks.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140229AD4 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ObpDeferObjectDeletion @ 0x1402440B4 (ObpDeferObjectDeletion.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x1402445C8 (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     KeAreAllApcsDisabled @ 0x140281980 (KeAreAllApcsDisabled.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140282C20 (KxWaitForLockChainValid.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x1402D5324 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     ExpWorkerFactoryCreateThread @ 0x1402D5484 (ExpWorkerFactoryCreateThread.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1402D56F4 (ExpLeaveWorkerFactoryAwayMode.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402F8420 (ExpWorkerFactoryCheckCreate.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140311C70 (KxWaitForLockOwnerShip.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     Feature_1831408952__private_IsEnabled @ 0x14041ACC0 (Feature_1831408952__private_IsEnabled.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045A10C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056E6FC (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x1405C5EC8 (ObpPushStackInfo.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1406A1350 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObpRemoveObjectRoutine @ 0x1407CDAC0 (ObpRemoveObjectRoutine.c)
 *     ObpDeregisterObject @ 0x140985970 (ObpDeregisterObject.c)
 *     ExSystemExceptionFilter @ 0x1409F8660 (ExSystemExceptionFilter.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall NtSetInformationWorkerFactory(HANDLE Handle, int a2, unsigned __int64 a3, unsigned int a4)
{
  KPROCESSOR_MODE PreviousMode; // di
  int v9; // r12d
  int v10; // r14d
  NTSTATUS result; // eax
  __int64 v12; // rcx
  int Thread; // esi
  PVOID v14; // rcx
  int v15; // eax
  PVOID v16; // r15
  unsigned __int64 *v17; // rdi
  unsigned __int8 CurrentIrql; // r10
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v21; // rdx
  int v22; // eax
  char *v23; // rdi
  __int64 v24; // rdx
  unsigned int v25; // edx
  int v26; // ecx
  _DWORD *v27; // r12
  unsigned int v28; // eax
  bool v29; // r13
  _DWORD *v30; // r13
  _DWORD *v31; // r14
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r10
  _DWORD *v35; // r9
  int v36; // eax
  bool v37; // zf
  __int64 v38; // rax
  char v39; // r8
  unsigned int v40; // ecx
  bool v41; // al
  unsigned int v42; // ecx
  unsigned int v43; // edx
  PKSPIN_LOCK *v44; // r15
  unsigned int v45; // eax
  int *v46; // r14
  int v47; // ecx
  unsigned __int64 v48; // rsi
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r10
  _DWORD *v51; // r9
  int v52; // eax
  __int64 Next; // rax
  struct _KPRCB *v54; // rcx
  _DWORD *v55; // rdx
  int v56; // eax
  unsigned __int64 v57; // rdi
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // r10
  _DWORD *v60; // r9
  int v61; // eax
  signed __int64 v62; // rdi
  signed __int64 v63; // r12
  bool v64; // cc
  signed __int64 v65; // r12
  __int64 v66; // rax
  bool v67; // [rsp+30h] [rbp-198h]
  char v68; // [rsp+34h] [rbp-194h]
  char v69; // [rsp+35h] [rbp-193h]
  PVOID Object; // [rsp+38h] [rbp-190h] BYREF
  char v71; // [rsp+42h] [rbp-186h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-180h] BYREF
  _DWORD *v73; // [rsp+60h] [rbp-168h]
  _QWORD v74[35]; // [rsp+68h] [rbp-160h] BYREF
  void *retaddr; // [rsp+1C8h] [rbp+0h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  *(_OWORD *)v74 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset(&v74[3], 0, 0x100uLL);
  v9 = a2 - 2;
  switch ( a2 )
  {
    case 2:
      v10 = 8;
      goto LABEL_9;
    case 3:
    case 4:
    case 5:
    case 8:
    case 9:
    case 11:
    case 12:
    case 13:
    case 14:
      v10 = 4;
      goto LABEL_9;
    case 6:
      return -1073741822;
    case 10:
      v10 = 16;
      goto LABEL_9;
    case 15:
      if ( a4 >= 0x100 )
        v10 = 256;
      else
        v10 = a4 + (a4 & 7);
LABEL_9:
      if ( a4 != v10 )
        return -1073741820;
      switch ( a2 )
      {
        case 2:
          if ( PreviousMode && (a3 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v74[3] = *(_QWORD *)a3;
          break;
        case 3:
        case 4:
        case 5:
          if ( PreviousMode )
          {
            v12 = 0x7FFFFFFF0000LL;
            if ( a3 < 0x7FFFFFFF0000LL )
              v12 = a3;
            LODWORD(v74[3]) = *(_DWORD *)v12;
          }
          else
          {
            LODWORD(v74[3]) = *(_DWORD *)a3;
          }
          break;
        default:
          __fastfail(0x25u);
      }
      Thread = 0;
      Object = 0LL;
      result = ObReferenceObjectByHandle(Handle, 4u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
      if ( result < 0 )
        return result;
      if ( a2 == 8 )
      {
        v14 = Object;
        v15 = v74[3];
        if ( !LODWORD(v74[3]) )
        {
          v15 = KeNumberProcessors_0;
          v14 = Object;
        }
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Object + 2) + 8LL) + 44LL) = v15;
        ObfDereferenceObjectWithTag(v14, 0x746C6644u);
        return 0;
      }
      v69 = 0;
      v67 = 0;
      v71 = 0;
      v68 = 1;
      v16 = Object;
      v17 = (unsigned __int64 *)*((_QWORD *)Object + 2);
      LockHandle.LockQueue.Lock = v17;
      LockHandle.LockQueue.Next = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      LockHandle.OldIrql = CurrentIrql;
      CurrentPrcb = KeGetCurrentPrcb();
      v21 = CurrentPrcb->SchedulerAssist;
      if ( v21 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v22 = v21[6];
          v21[6] = v22 + 1;
          if ( v22 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, v17);
      }
      else if ( _InterlockedExchange64((volatile __int64 *)v17, (__int64)&LockHandle) )
      {
        KxWaitForLockOwnerShip(&LockHandle);
      }
      switch ( v9 )
      {
        case 0:
          if ( (unsigned int)Feature_1831408952__private_IsEnabled() && *(_BYTE *)(*((_QWORD *)v16 + 2) + 33LL) )
          {
            Thread = 128;
            v23 = (char *)Object;
          }
          else if ( v74[3] >= 0LL )
          {
            Thread = -1073741811;
            v23 = (char *)Object;
          }
          else
          {
            v24 = -10000000LL;
            if ( v74[3] <= -10000000LL )
            {
              v24 = v74[3];
              if ( v74[3] < -6000000000LL )
                v24 = -6000000000LL;
            }
            v74[3] = v24;
            v23 = (char *)Object;
            *((_QWORD *)Object + 14) = v24;
            v74[1] = -1LL;
            KeSetTimer2(v23 + 424, v24, -v24, v74);
          }
          goto LABEL_96;
        case 1:
          v23 = (char *)Object;
          v25 = *((_DWORD *)Object + 101);
          if ( SLODWORD(v74[3]) < 0 )
          {
            if ( v25 <= -LODWORD(v74[3]) )
            {
              *((_DWORD *)Object + 101) = 0;
              v26 = 0;
            }
            else
            {
              v26 = v25 + LODWORD(v74[3]);
              *((_DWORD *)Object + 101) = v25 + LODWORD(v74[3]);
            }
          }
          else
          {
            v26 = -1;
            if ( v25 < v25 + LODWORD(v74[3]) )
              v26 = v25 + LODWORD(v74[3]);
            *((_DWORD *)Object + 101) = v26;
          }
          if ( v25 )
          {
            if ( !v26 && (*((_DWORD *)v23 + 102) & 0x200) != 0 )
              ExpLeaveWorkerFactoryAwayMode(v23);
          }
          else if ( v26 && (unsigned __int8)ExpTryEnterWorkerFactoryAwayMode(v23) )
          {
            ExpWorkerFactoryCheckCreate(v23, &LockHandle);
            v68 = 0;
          }
          goto LABEL_96;
        case 2:
          v23 = (char *)Object;
          if ( *(_BYTE *)(*((_QWORD *)v16 + 2) + 33LL) )
          {
            Thread = 128;
            goto LABEL_96;
          }
          v27 = (char *)Object + 376;
          v28 = v74[3];
          v29 = LODWORD(v74[3]) > *((_DWORD *)Object + 94);
          v67 = v29;
          *((_DWORD *)Object + 94) = v74[3];
          if ( *((_DWORD *)v23 + 95) < v28 )
            *((_DWORD *)v23 + 95) = v28;
          if ( !v29 )
            goto LABEL_96;
          v67 = 0;
          if ( (*((_DWORD *)v23 + 102) & 0x200) != 0 )
            ExpLeaveWorkerFactoryAwayMode(v23);
          v30 = v23 + 392;
          v73 = v23 + 384;
          if ( (unsigned int)(*((_DWORD *)v23 + 98) + *((_DWORD *)v23 + 96)) >= *v27 )
            goto LABEL_96;
          v31 = v23 + 400;
          break;
        case 3:
          v38 = *((_QWORD *)v16 + 2);
          v23 = (char *)Object;
          if ( *(_BYTE *)(v38 + 33) )
          {
            Thread = 128;
            goto LABEL_96;
          }
          v39 = 1;
          v69 = 1;
          v40 = v74[3];
          v41 = LODWORD(v74[3])
             && (!*((_DWORD *)Object + 95) && *(_DWORD *)(v38 + 24) || *(int *)(*(_QWORD *)(v38 + 8) + 4LL) > 0);
          *((_DWORD *)Object + 95) = v74[3];
          if ( v40 < *((_DWORD *)v23 + 94) )
            *((_DWORD *)v23 + 94) = v40;
          goto LABEL_97;
        default:
          __fastfail(0x25u);
      }
      while ( 1 )
      {
        ++*v31;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v33 = KeGetCurrentIrql();
            if ( v33 <= 0xFu && LockHandle.OldIrql <= 0xFu && v33 >= 2u )
            {
              v34 = KeGetCurrentPrcb();
              v35 = v34->SchedulerAssist;
              v36 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v37 = (v36 & v35[5]) == 0;
              v35[5] &= v36;
              if ( v37 )
                KiRemoveSystemWorkPriorityKick(v34);
              v23 = (char *)Object;
            }
          }
        }
        __writecr8(OldIrql);
        Thread = ExpWorkerFactoryCreateThread(v23);
        KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)v16 + 2), &LockHandle);
        if ( Thread < 0 )
          break;
        if ( (unsigned int)(*v30 + *v73) >= *v27 )
          goto LABEL_96;
      }
      --*v31;
LABEL_96:
      v41 = v67;
      v39 = 0;
LABEL_97:
      if ( v41 )
      {
        v42 = *((_DWORD *)v23 + 96);
        v43 = v42 + *((_DWORD *)v23 + 98);
        v44 = (PKSPIN_LOCK *)(v23 + 16);
        if ( *(_BYTE *)(*((_QWORD *)v23 + 2) + 33LL) )
        {
          Thread = 128;
        }
        else
        {
          v45 = *((_DWORD *)v23 + 95);
          if ( v42 < v45 )
          {
            v46 = (int *)(v23 + 400);
            v47 = *((_DWORD *)v23 + 100);
            if ( v47 || v43 >= v45 )
              goto LABEL_117;
            if ( (*((_DWORD *)v23 + 102) & 0x200) != 0 )
            {
              ExpLeaveWorkerFactoryAwayMode(v23);
              v47 = *v46;
            }
            *v46 = v47 + 1;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            v48 = LockHandle.OldIrql;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v49 = KeGetCurrentIrql();
                if ( v49 <= 0xFu && LockHandle.OldIrql <= 0xFu && v49 >= 2u )
                {
                  v50 = KeGetCurrentPrcb();
                  v51 = v50->SchedulerAssist;
                  v52 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                  v37 = (v52 & v51[5]) == 0;
                  v51[5] &= v52;
                  if ( v37 )
                    KiRemoveSystemWorkPriorityKick(v50);
                  v23 = (char *)Object;
                }
              }
            }
            __writecr8(v48);
            v68 = 0;
            Thread = ExpWorkerFactoryCreateThread(v23);
            if ( Thread < 0 )
            {
              v68 = 1;
              KeAcquireInStackQueuedSpinLock(*v44, &LockHandle);
              --*v46;
              if ( v69 )
LABEL_117:
                Thread = 0;
            }
          }
          else if ( !v39 )
          {
            Thread = -1073741527;
          }
        }
      }
      if ( !v68 )
        goto LABEL_137;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
        goto LABEL_125;
      }
      _m_prefetchw(&LockHandle);
      Next = (__int64)LockHandle.LockQueue.Next;
      if ( LockHandle.LockQueue.Next )
        goto LABEL_124;
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) != &LockHandle )
      {
        Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
LABEL_124:
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
      }
LABEL_125:
      v54 = KeGetCurrentPrcb();
      v55 = v54->SchedulerAssist;
      if ( v55 )
      {
        if ( v54->NestingLevel <= 1u )
        {
          v56 = v55[6] - 1;
          v55[6] = v56;
          if ( !v56 )
            KiRemoveSystemWorkPriorityKick(v54);
        }
      }
      v57 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v58 = KeGetCurrentIrql();
          if ( v58 <= 0xFu && LockHandle.OldIrql <= 0xFu && v58 >= 2u )
          {
            v59 = KeGetCurrentPrcb();
            v60 = v59->SchedulerAssist;
            v61 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v37 = (v61 & v60[5]) == 0;
            v60[5] &= v61;
            if ( v37 )
              KiRemoveSystemWorkPriorityKick(v59);
          }
        }
      }
      __writecr8(v57);
      v23 = (char *)Object;
LABEL_137:
      v62 = (signed __int64)(v23 - 48);
      if ( ObpTraceFlags )
        ObpPushStackInfo(v62);
      v63 = _InterlockedExchangeAdd64((volatile signed __int64 *)v62, 0xFFFFFFFFFFFFFFFFuLL);
      v64 = v63 <= 1;
      v65 = v63 - 1;
      if ( !v64 )
        return Thread;
      if ( *(_QWORD *)(v62 + 8) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v62 + 24) ^ (unsigned __int64)BYTE1(v62)],
          (ULONG_PTR)Object,
          1uLL,
          *(_QWORD *)(v62 + 8));
      if ( v65 < 0 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v65);
      if ( KeAreAllApcsDisabled() )
      {
        ObpDeferObjectDeletion(v62);
        return Thread;
      }
      v66 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v62);
      if ( v66 )
        ObpHandleRevocationBlockRemoveObject(v66);
      if ( ObpTraceFlags )
        ObpDeregisterObject(v62);
      ObpRemoveObjectRoutine(v62, 0LL);
      return Thread;
    default:
      return -1073741821;
  }
}
