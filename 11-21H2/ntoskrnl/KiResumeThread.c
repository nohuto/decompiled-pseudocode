/*
 * XREFs of KiResumeThread @ 0x1402EF710
 * Callers:
 *     KeResumeThread @ 0x1402EEAA8 (KeResumeThread.c)
 *     KeForceResumeThread @ 0x1402EF5FC (KeForceResumeThread.c)
 *     KiThawSingleThread @ 0x14035F27C (KiThawSingleThread.c)
 *     KiAdjustThreadTimer @ 0x140573898 (KiAdjustThreadTimer.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KiTestForAlertPending @ 0x14025C08C (KiTestForAlertPending.c)
 *     KiTimerWaitTest @ 0x1402A7FE0 (KiTimerWaitTest.c)
 *     KiInsertTimerTable @ 0x1402B7800 (KiInsertTimerTable.c)
 *     KiSignalThreadForApc @ 0x1402EE894 (KiSignalThreadForApc.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiWakeQueueWaiter @ 0x1402F6A70 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x1402F6BC0 (KiTryUnwaitThread.c)
 *     KiSignalThread @ 0x1402F6ED0 (KiSignalThread.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     KiComputeDueTime @ 0x140357790 (KiComputeDueTime.c)
 *     KiWakeOtherQueueWaiters @ 0x14035B550 (KiWakeOtherQueueWaiters.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x14056B1E4 (KeIsThreadRunning.c)
 *     KiTraceSetTimer @ 0x14057AAF8 (KiTraceSetTimer.c)
 *     EtwTraceEnqueueWork @ 0x14062DA60 (EtwTraceEnqueueWork.c)
 */

char __fastcall KiResumeThread(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r13
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v8; // rax
  _DWORD *v9; // r12
  _QWORD *v10; // rsi
  _QWORD *v11; // r14
  _QWORD *v12; // rbx
  char v13; // al
  __int64 v14; // r8
  _DWORD *v15; // rcx
  unsigned __int8 v16; // r15
  unsigned __int8 i; // r14
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 *v20; // rcx
  int v21; // edi
  struct _KPRCB *v22; // rsi
  _DWORD *v23; // rcx
  unsigned int v24; // edi
  char v25; // al
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // eax
  int v29; // eax
  int v30; // eax
  _DWORD *v31; // rcx
  int v32; // eax
  __int64 v33; // rdi
  _QWORD *v34; // r15
  unsigned __int8 CurrentIrql; // cl
  _DWORD *v36; // r9
  struct _KPRCB *v37; // r13
  _KTHREAD *CurrentThread; // rbp
  __int64 v39; // r8
  int v40; // ecx
  _QWORD *v41; // rdx
  int v43; // [rsp+80h] [rbp+8h] BYREF
  __int64 v44; // [rsp+88h] [rbp+10h]
  unsigned int v45; // [rsp+90h] [rbp+18h] BYREF
  int v46; // [rsp+98h] [rbp+20h] BYREF

  v44 = a2;
  v4 = a2;
  v45 = 0;
  *(_DWORD *)(a1 + 740) = 1;
  CurrentPrcb = KeGetCurrentPrcb();
  v43 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v28 = SchedulerAssist[6];
        SchedulerAssist[6] = v28 + 1;
        if ( v28 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v15 = CurrentPrcb->SchedulerAssist;
    if ( v15 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v29 = v15[6] - 1;
        v15[6] = v29;
        if ( !v29 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v43);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( *(_BYTE *)(a1 + 388) == 5 && (*(_BYTE *)(a1 + 112) & 7) == 4 )
  {
    if ( !a3 )
    {
      *(_BYTE *)(a1 + 112) = *(_BYTE *)(a1 + 112) & 0xF8 | 5;
      KiReleaseThreadLockSafe(a1);
      v16 = *(_BYTE *)(a1 + 587);
      for ( i = 0; i < v16; ++i )
      {
        v18 = *(_QWORD *)(a1 + 208) + 48LL * i;
        if ( *(_BYTE *)(v18 + 17) == 6 )
        {
          v19 = *(_QWORD *)(v18 + 32);
          *(_BYTE *)(v18 + 17) = 4;
          KiAcquireKobjectLockSafe(v19);
          if ( *(int *)(v19 + 4) > 0 || (*(_BYTE *)v19 & 0x7F) == 2 )
          {
            _InterlockedAnd((volatile signed __int32 *)v19, 0xFFFFFF7F);
            *(_BYTE *)(v18 + 17) = 5;
            a3 = 1;
            break;
          }
          v20 = *(__int64 **)(v19 + 16);
          if ( *v20 != v19 + 8 )
LABEL_88:
            __fastfail(3u);
          *(_QWORD *)v18 = v19 + 8;
          *(_QWORD *)(v18 + 8) = v20;
          *v20 = v18;
          *(_QWORD *)(v19 + 16) = v18;
          _InterlockedAnd((volatile signed __int32 *)v19, 0xFFFFFF7F);
        }
      }
      v21 = 0;
      if ( _bittest((const signed __int32 *)(a1 + 116), 0x11u) && !a3 )
      {
        v26 = *(_QWORD *)(a1 + 280);
        *(_DWORD *)(a1 + 256) |= 0x40000080u;
        if ( (unsigned int)KiComputeDueTime(a1 + 256, v26, 0LL, &v45) )
        {
          if ( KiInsertTimerTable(v4, a1 + 256, 0LL, v45, 0LL) )
          {
            if ( _bittest((_DWORD *)&PerfGlobalGroupMask + 2, 0x11u) )
            {
              LOBYTE(v27) = 1;
              KiTraceSetTimer(a1 + 256, 0LL, v27);
            }
            else
            {
              _InterlockedAnd((volatile signed __int32 *)(a1 + 256), 0xFFFFFF7F);
            }
          }
          else
          {
            KiTimerWaitTest(v4, a1 + 256, 0LL);
          }
          v21 = 1;
        }
        else
        {
          a3 = 1;
          v21 = 0;
        }
      }
      v22 = KeGetCurrentPrcb();
      v46 = 0;
      while ( 1 )
      {
        v23 = v22->SchedulerAssist;
        if ( v23 )
        {
          if ( v22->NestingLevel <= 1u )
          {
            v30 = v23[6];
            v23[6] = v30 + 1;
            if ( v30 == -1 )
              KiRemoveSystemWorkPriorityKick(v22);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
          break;
        v31 = v22->SchedulerAssist;
        if ( v31 )
        {
          if ( v22->NestingLevel <= 1u )
          {
            v32 = v31[6] - 1;
            v31[6] = v32;
            if ( !v32 )
              KiRemoveSystemWorkPriorityKick(v22);
          }
        }
        do
          KeYieldProcessorEx(&v46);
        while ( *(_QWORD *)(a1 + 64) );
      }
      v24 = *(_DWORD *)(a1 + 116) & 0xFFFDFDFF | (v21 << 9) & 0xFFFDFFFF;
      v25 = *(_BYTE *)(a1 + 112) & 0xE7;
      *(_DWORD *)(a1 + 116) = v24;
      if ( v25 != 5 || (unsigned int)KiTestForAlertPending(a1, (v24 & 0x10) != 0, *(_BYTE *)(a1 + 391), 0) )
      {
        a3 = 1;
      }
      else if ( *(_BYTE *)(a1 + 643) == 37 && (*(_BYTE *)(a1 + 120) & 0x10) != 0 )
      {
        a3 = 1;
      }
    }
    *(_BYTE *)(a1 + 112) = *(_BYTE *)(a1 + 112) & 0xF8 | 1;
  }
  if ( a3 )
  {
    if ( (*(_DWORD *)(a1 + 120) & 0x8000) != 0 )
    {
      if ( *(_BYTE *)(a1 + 388) == 5 )
        KiSignalThread(v4, a1, 256LL, 0LL);
    }
    else
    {
      KiSignalThreadForApc(v4, a1 + 648, 2);
    }
  }
  LOBYTE(v8) = KiReleaseThreadLockSafe(a1);
  v9 = (_DWORD *)(a1 + 736);
  v10 = (_QWORD *)(a1 + 744);
  v11 = *(_QWORD **)(a1 + 744);
  if ( v11 != (_QWORD *)(a1 + 744) )
  {
    while ( 1 )
    {
      v12 = v11;
      v11 = (_QWORD *)*v11;
      v13 = *((_BYTE *)v12 + 16);
      if ( v13 == 1 )
        break;
      if ( v13 != 2 )
      {
        if ( v13 == 4 )
        {
          *((_BYTE *)v12 + 17) = 5;
          v9[1] = 0;
          LOBYTE(v8) = KeInsertQueueDpc((PRKDPC)v12[3], v9, v12);
          goto LABEL_18;
        }
        v14 = 256LL;
        goto LABEL_17;
      }
      *((_BYTE *)v12 + 17) = 5;
      v33 = v12[3];
      *v12 = 0LL;
      v34 = (_QWORD *)(v33 + 8);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v36 = KeGetCurrentPrcb()->SchedulerAssist;
        v36[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      v37 = KeGetCurrentPrcb();
      CurrentThread = v37->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v39) = KeIsThreadRunning(v37->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v12, v39);
      }
      KiAcquireKobjectLockSafe(v33);
      if ( (_QWORD *)*v34 == v34
        || *(_DWORD *)(v33 + 40) >= *(_DWORD *)(v33 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v33 && CurrentThread->WaitReason == 15
        || (LOBYTE(v8) = KiWakeQueueWaiter(v37, v33, v12), !(_BYTE)v8) )
      {
        v40 = *(_DWORD *)(v33 + 4);
        *(_DWORD *)(v33 + 4) = v40 + 1;
        v8 = v33 + 24;
        v41 = *(_QWORD **)(v33 + 32);
        if ( *v41 != v33 + 24 )
          goto LABEL_88;
        *v12 = v8;
        v12[1] = v41;
        *v41 = v12;
        *(_QWORD *)(v33 + 32) = v12;
        if ( !v40 && (_QWORD *)*v34 != v34 )
          LOBYTE(v8) = KiWakeOtherQueueWaiters(v37, v33);
      }
      else
      {
        *v12 = 0LL;
      }
      _InterlockedAnd((volatile signed __int32 *)v33, 0xFFFFFF7F);
      v4 = v44;
LABEL_18:
      if ( v11 == v10 )
        goto LABEL_9;
    }
    v14 = *((unsigned __int16 *)v12 + 9);
LABEL_17:
    LOBYTE(v8) = KiTryUnwaitThread(v4, v12, v14, 0LL);
    goto LABEL_18;
  }
LABEL_9:
  v10[1] = v10;
  *v10 = v10;
  return v8;
}
