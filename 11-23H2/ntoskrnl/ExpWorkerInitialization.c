/*
 * XREFs of ExpWorkerInitialization @ 0x140B6610C
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140B49FE4 (ExpInitSystemPhase1.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExQueueDebuggerWorker @ 0x140293BCC (ExQueueDebuggerWorker.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfReleasePushLock @ 0x1402BDAC0 (ExfReleasePushLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402E76F4 (KiQueryUnbiasedInterruptTime.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     ExpLegacyWorkerInitialization @ 0x1403A5794 (ExpLegacyWorkerInitialization.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ExpPartitionStart @ 0x1408496C8 (ExpPartitionStart.c)
 *     ExpPartitionInitialize @ 0x140849908 (ExpPartitionInitialize.c)
 *     ExpNodeInitialize @ 0x140849C54 (ExpNodeInitialize.c)
 */

__int64 ExpWorkerInitialization()
{
  int v0; // eax
  unsigned int v1; // eax
  unsigned __int16 i; // bx
  char *v3; // rcx
  __int64 result; // rax
  unsigned int v5; // ebp
  _QWORD *v6; // r8
  const char *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // ebx
  unsigned int v11; // ecx
  __int64 v12; // rdi
  __int64 *v13; // rdx
  signed __int64 *v14; // rsi
  signed __int64 v15; // rax
  signed __int64 v16; // rdx
  signed __int64 v17; // rtt
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v24; // rsi
  __int64 v25; // rdi
  unsigned int AbEntrySummary; // eax
  unsigned int v27; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v30; // eax
  signed __int32 v31; // ett
  int SessionId; // eax
  struct _KTHREAD *v33; // rcx
  bool v34; // zf
  __int64 v35; // rax
  unsigned int v36; // [rsp+50h] [rbp+8h]

  ExpWorkerSwapinMutex.Event.Header.Size = 6;
  ExpWorkerSwapinMutex.Owner = 0LL;
  ExpWorkerSwapinMutex.Event.Header.WaitListHead.Blink = &ExpWorkerSwapinMutex.Event.Header.WaitListHead;
  ExpWorkerSwapinMutex.Event.Header.WaitListHead.Flink = &ExpWorkerSwapinMutex.Event.Header.WaitListHead;
  v0 = ExpMaximumKernelWorkerThreads;
  ExpWorkerSwapinMutex.Count = 1;
  ExpWorkerSwapinMutex.Contention = 0;
  LOWORD(ExpWorkerSwapinMutex.Event.Header.Lock) = 1;
  ExpWorkerSwapinMutex.Event.Header.SignalState = 0;
  ExpWorkersCanSwap = 1;
  if ( ExpMaximumKernelWorkerThreads > 0x4000 )
  {
    v0 = 0x4000;
    ExpMaximumKernelWorkerThreads = 0x4000;
  }
  if ( v0 < 32 )
    ExpMaximumKernelWorkerThreads = 32;
  v1 = ExpWorkerThreadTimeoutInSeconds;
  if ( (unsigned int)ExpWorkerThreadTimeoutInSeconds > 0xE10 )
  {
    v1 = 3600;
    ExpWorkerThreadTimeoutInSeconds = 3600;
  }
  if ( v1 < 0x3C )
    ExpWorkerThreadTimeoutInSeconds = 60;
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    v3 = (char *)KeNodeBlock[i];
    if ( v3 == (char *)&KiNodeInit + 304 * i )
      v3 = 0LL;
    ExpNodeInitialize((__int64)v3);
  }
  result = ExpPartitionInitialize((__int64)PspSystemPartition);
  if ( (int)result >= 0 )
  {
    result = ExpPartitionStart(*((_QWORD *)PspSystemPartition + 2));
    v5 = result;
    if ( (int)result >= 0 )
    {
      ExpLegacyWorkerInitialization();
      _mm_lfence();
      if ( !qword_140C64AE0 )
      {
        v18 = __rdtsc();
        v19 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v18) << 32) | (unsigned int)v18) >> 4)) ^ 0xBD6LL;
        if ( !v19 )
          v19 = 1LL;
        qword_140C64AE0 = v19;
        v20 = __rdtsc();
        v21 = 0LL;
        v22 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v20) << 32) | (unsigned int)v20) >> 4)) ^ 0x5EBLL;
        qword_140C64AE8 = v22;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        v24 = KeGetCurrentThread();
        v25 = (__int64)ObpTypeObjectType + 184;
        _disable();
        AbEntrySummary = v24->AbEntrySummary;
        if ( v24->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v22, (__int64)v24)) != 0 )
        {
          _BitScanForward(&v27, AbEntrySummary);
          v36 = v27;
          v24->AbEntrySummary = AbEntrySummary & ~(1 << v27);
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v30 = *SchedulerAssist;
            do
            {
              v31 = v30;
              v30 = _InterlockedCompareExchange(SchedulerAssist, v30 & 0xFFDFFFFF, v30);
            }
            while ( v31 != v30 );
            if ( (v30 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
          _enable();
          v21 = (__int64)(&v24[1].Process + 12 * v36);
          if ( (unsigned __int64)(v25 - qword_140C659E8) >= 0x8000000000LL )
            SessionId = -1;
          else
            SessionId = MmGetSessionIdEx((__int64)v24->ApcState.Process);
          *(_DWORD *)(v21 + 8) = SessionId;
          *(_QWORD *)v21 = v25 & 0x7FFFFFFFFFFFFFFCLL;
        }
        if ( _interlockedbittestandset64((volatile signed __int32 *)v25, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v25, v21, v25);
        if ( v21 )
          *(_BYTE *)(v21 + 18) = 1;
        v11 = 0;
        v10 = 64;
        v12 = *((unsigned int *)ObpTypeObjectType + 11);
        qword_140C64AF8 = v12;
        if ( (_DWORD)v12 )
        {
          v13 = ObpObjectTypes;
          while ( *v13 )
          {
            if ( (*(_BYTE *)(*v13 + 66) & 0x40) != 0 )
              _bittestandset64(&qword_140C64B00, v11);
            ++v11;
            ++v13;
            if ( v11 >= (unsigned int)v12 )
              goto LABEL_36;
          }
          LODWORD(v12) = v11;
          qword_140C64AF8 = v11;
        }
LABEL_36:
        v14 = (signed __int64 *)((char *)ObpTypeObjectType + 184);
        _m_prefetchw((char *)ObpTypeObjectType + 184);
        v15 = *v14;
        v16 = *v14 - 16;
        if ( (*v14 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v16 = 0LL;
        if ( (v15 & 2) != 0 || (v17 = *v14, v17 != _InterlockedCompareExchange64(v14, v16, v15)) )
          ExfReleasePushLock(v14);
        KeAbPostRelease((ULONG_PTR)v14);
        v33 = KeGetCurrentThread();
        v34 = v33->SpecialApcDisable++ == -1;
        if ( v34 && ($C71981A45BEB2B45F82C232A7085991E *)v33->ApcState.ApcListHead[0].Flink != &v33->152 )
          KiCheckForKernelApcDelivery();
        if ( (_DWORD)v12 )
        {
          qword_140C64B20 = ObpObjectTypes[41929663 * (__rdtsc() >> 4) % (unsigned int)v12];
          v6 = (_QWORD *)(qword_140C64B20 + 112);
          v7 = (const char *)(qword_140C64B20 + 112);
          if ( qword_140C64B20 + 112 < (unsigned __int64)(qword_140C64B20 + 176) )
          {
            do
            {
              _mm_prefetch(v7, 0);
              v7 += 64;
            }
            while ( (unsigned __int64)v7 < qword_140C64B20 + 176 );
          }
          v8 = qword_140C64AE0;
          v9 = 8LL;
          do
          {
            v8 = __ROR8__(v8 - *v6++, qword_140C64AE8);
            v10 -= 8;
            --v9;
          }
          while ( v9 );
          for ( ; v10; --v10 )
          {
            v35 = *(unsigned __int8 *)v6;
            v6 = (_QWORD *)((char *)v6 + 1);
            v8 = __ROR8__(v8 - v35, qword_140C64AE8);
          }
          qword_140C64B28 = v8;
          qword_140C64AF0 = KiQueryUnbiasedInterruptTime()
                          + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL
                          + 288000000000LL;
        }
        else
        {
          qword_140C64AE0 = 0LL;
        }
      }
      LODWORD(ExpDebuggerDpc) = 275;
      qword_140C2D538 = (__int64)ExpDebuggerDpcRoutine;
      ExpDebuggerWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ExpDebuggerWorker;
      qword_140C2D540 = 0LL;
      qword_140C2D558 = 0LL;
      qword_140C2D530 = 0LL;
      ExpDebuggerWorkItem.Parameter = 0LL;
      ExpDebuggerWorkItem.List.Flink = 0LL;
      ExpDebuggerWork = 1;
      ExQueueDebuggerWorker();
      return v5;
    }
  }
  return result;
}
