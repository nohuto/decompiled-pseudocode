/*
 * XREFs of KeSignalGate @ 0x14024B0B4
 * Callers:
 *     MiUnlockControlAreaSectionExtend @ 0x14022C984 (MiUnlockControlAreaSectionExtend.c)
 *     MmDetachSession @ 0x140231240 (MmDetachSession.c)
 *     MiDereferencePageRunsEx @ 0x14023FD0C (MiDereferencePageRunsEx.c)
 *     MiZeroInParallelWorker @ 0x14026C240 (MiZeroInParallelWorker.c)
 *     MiAttachThreadDone @ 0x14027D8DC (MiAttachThreadDone.c)
 *     MiCheckControlArea @ 0x140287660 (MiCheckControlArea.c)
 *     MiReleaseControlAreaWaiters @ 0x1402879F8 (MiReleaseControlAreaWaiters.c)
 *     MiWriteComplete @ 0x14028C230 (MiWriteComplete.c)
 *     KiRetireDpcList @ 0x1402A8980 (KiRetireDpcList.c)
 *     MiProcessWorkingSets @ 0x14030BBF0 (MiProcessWorkingSets.c)
 *     MiFinishVadDeletion @ 0x14030FEC0 (MiFinishVadDeletion.c)
 *     MiReturnWsToExpansionList @ 0x14036DAE4 (MiReturnWsToExpansionList.c)
 *     MiZeroLargePageThread @ 0x1403C6B00 (MiZeroLargePageThread.c)
 *     MiSignalZeroingPassComplete @ 0x1403C6CDC (MiSignalZeroingPassComplete.c)
 *     MiZeroNodePages @ 0x1403D3960 (MiZeroNodePages.c)
 *     MiNodeCompletedBootZeroing @ 0x1403D3D2C (MiNodeCompletedBootZeroing.c)
 *     KiEpfComplete @ 0x14057AFDC (KiEpfComplete.c)
 *     MiSubsectionProtosCreated @ 0x1405A0FD8 (MiSubsectionProtosCreated.c)
 *     MiWakeExtentDeletionWaiters @ 0x1405A1C08 (MiWakeExtentDeletionWaiters.c)
 *     MiIncrementAweMapCount @ 0x1405AB148 (MiIncrementAweMapCount.c)
 *     MiWakeLargePageWaiters @ 0x1405B05A0 (MiWakeLargePageWaiters.c)
 *     PsWatchWorkingSet @ 0x1405E0600 (PsWatchWorkingSet.c)
 *     MiScrubMemoryWorker @ 0x140983B10 (MiScrubMemoryWorker.c)
 * Callees:
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F6A70 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x1402F6BC0 (KiTryUnwaitThread.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     KiWakeOtherQueueWaiters @ 0x14035B550 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x14056B1E4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14062DA60 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeSignalGate(_DWORD *SystemArgument1, int a2)
{
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int16 *v5; // r12
  _DWORD *SchedulerAssist; // r9
  __int64 v8; // rax
  unsigned __int16 *v9; // rbx
  void **v10; // rcx
  char v11; // al
  bool v12; // zf
  __int64 v13; // rsi
  _QWORD *v14; // r14
  unsigned __int8 v15; // cl
  _DWORD *v16; // r9
  struct _KPRCB *v17; // r15
  _KTHREAD *CurrentThread; // rbp
  __int64 v19; // r8
  int v20; // ecx
  unsigned __int16 **v21; // rdx
  struct _KPRCB *v22; // [rsp+70h] [rbp+8h]
  char v24; // [rsp+80h] [rbp+18h]

  CurrentIrql = KeGetCurrentIrql();
  v24 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v22 = CurrentPrcb;
  KiAcquireKobjectLockSafe(SystemArgument1);
  if ( !SystemArgument1[1] )
  {
    SystemArgument1[1] = 1;
    v5 = (unsigned __int16 *)*((_QWORD *)SystemArgument1 + 1);
    while ( v5 != (unsigned __int16 *)(SystemArgument1 + 2) )
    {
      v8 = *(_QWORD *)v5;
      v9 = v5;
      v5 = (unsigned __int16 *)v8;
      v10 = (void **)*((_QWORD *)v9 + 1);
      if ( *(unsigned __int16 **)(v8 + 8) != v9 || *v10 != v9 )
LABEL_10:
        __fastfail(3u);
      *v10 = (void *)v8;
      *(_QWORD *)(v8 + 8) = v10;
      v11 = *((_BYTE *)v9 + 16);
      switch ( v11 )
      {
        case 1:
          if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v9, v9[9], 0LL) )
          {
            v12 = SystemArgument1[1]-- == 1;
            if ( v12 )
              goto LABEL_5;
          }
          break;
        case 2:
          *((_BYTE *)v9 + 17) = 5;
          v13 = *((_QWORD *)v9 + 3);
          *(_QWORD *)v9 = 0LL;
          v14 = (_QWORD *)(v13 + 8);
          v15 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v15 <= 0xFu )
          {
            v16 = KeGetCurrentPrcb()->SchedulerAssist;
            v16[5] |= (-1 << (v15 + 1)) & 4;
          }
          v17 = KeGetCurrentPrcb();
          CurrentThread = v17->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            LOBYTE(v19) = KeIsThreadRunning(v17->CurrentThread);
            EtwTraceEnqueueWork(CurrentThread, v9, v19);
          }
          KiAcquireKobjectLockSafe(v13);
          if ( (_QWORD *)*v14 == v14
            || *(_DWORD *)(v13 + 40) >= *(_DWORD *)(v13 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v13 && CurrentThread->WaitReason == 15
            || !(unsigned __int8)KiWakeQueueWaiter(v17, v13, v9) )
          {
            v20 = *(_DWORD *)(v13 + 4);
            *(_DWORD *)(v13 + 4) = v20 + 1;
            v21 = *(unsigned __int16 ***)(v13 + 32);
            if ( *v21 != (unsigned __int16 *)(v13 + 24) )
              goto LABEL_10;
            *(_QWORD *)v9 = v13 + 24;
            *((_QWORD *)v9 + 1) = v21;
            *v21 = v9;
            *(_QWORD *)(v13 + 32) = v9;
            if ( !v20 && (_QWORD *)*v14 != v14 )
              KiWakeOtherQueueWaiters(v17, v13);
          }
          else
          {
            *(_QWORD *)v9 = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)v13, 0xFFFFFF7F);
          v12 = SystemArgument1[1]-- == 1;
          if ( v12 )
            goto LABEL_5;
          CurrentPrcb = v22;
          break;
        case 4:
          *((_BYTE *)v9 + 17) = 5;
          SystemArgument1[1] = 0;
          KeInsertQueueDpc(*((PRKDPC *)v9 + 3), SystemArgument1, v9);
          break;
        default:
          KiTryUnwaitThread(CurrentPrcb, v9, 256LL, 0LL);
          break;
      }
    }
  }
LABEL_5:
  _InterlockedAnd(SystemArgument1, 0xFFFFFF7F);
  return KiExitDispatcher((_DWORD)v22, 0, 1, a2, v24);
}
