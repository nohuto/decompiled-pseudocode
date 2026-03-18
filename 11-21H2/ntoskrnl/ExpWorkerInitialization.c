/*
 * XREFs of ExpWorkerInitialization @ 0x140B240EC
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140AFCEF0 (ExpInitSystemPhase1.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     ExQueueDebuggerWorker @ 0x1402DA7E4 (ExQueueDebuggerWorker.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402F5718 (KiQueryUnbiasedInterruptTime.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfReleasePushLock @ 0x140359E10 (ExfReleasePushLock.c)
 *     ExpLegacyWorkerInitialization @ 0x1403D4DFC (ExpLegacyWorkerInitialization.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExpPartitionStart @ 0x140851C58 (ExpPartitionStart.c)
 *     ExpPartitionInitialize @ 0x140851EBC (ExpPartitionInitialize.c)
 *     ExpNodeInitialize @ 0x140852380 (ExpNodeInitialize.c)
 */

__int64 ExpWorkerInitialization()
{
  int v0; // eax
  unsigned int v1; // eax
  unsigned __int16 i; // r9
  _QWORD *v3; // rcx
  __int16 v4; // r9
  __int64 result; // rax
  unsigned int v6; // r12d
  _QWORD *v7; // r8
  const char *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // ebp
  unsigned int v12; // ecx
  __int64 v13; // r14
  unsigned __int64 v14; // r15
  __int64 *v15; // rdx
  ULONG_PTR v16; // rdi
  signed __int64 v17; // rax
  signed __int64 v18; // rdx
  signed __int64 v19; // rtt
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v24; // rdi
  struct _KTHREAD *v25; // rsi
  __int64 v26; // rbx
  unsigned int AbEntrySummary; // eax
  __int64 v28; // rdx
  int SessionId; // eax
  struct _KTHREAD *v30; // rsi
  unsigned int v31; // ecx
  __int64 p_Process; // rbx
  unsigned int v33; // edx
  int v34; // r9d
  struct _KTHREAD *v35; // rax
  bool v36; // zf
  __int64 v37; // rax

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
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; i = v4 + 1 )
  {
    v3 = 0LL;
    if ( (_UNKNOWN *)KeNodeBlock[i] != (_UNKNOWN *)((char *)&KiNodeInit + 280 * i) )
      v3 = (_QWORD *)KeNodeBlock[i];
    ExpNodeInitialize(v3);
  }
  result = ExpPartitionInitialize((__int64)PspSystemPartition);
  if ( (int)result >= 0 )
  {
    result = ExpPartitionStart(*((_QWORD *)PspSystemPartition + 2));
    v6 = result;
    if ( (int)result >= 0 )
    {
      ExpLegacyWorkerInitialization();
      _mm_lfence();
      if ( !qword_140C4ED20 )
      {
        v20 = __rdtsc();
        v21 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v20) << 32) | (unsigned int)v20) >> 4)) ^ 0xBD6LL;
        if ( !v21 )
          v21 = 1LL;
        qword_140C4ED20 = v21;
        v22 = __rdtsc();
        qword_140C4ED28 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v22) << 32) | (unsigned int)v22) >> 4)) ^ 0x5EBLL;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        v24 = 0LL;
        v25 = KeGetCurrentThread();
        v26 = (__int64)ObpTypeObjectType + 184;
        _disable();
        AbEntrySummary = v25->AbEntrySummary;
        if ( v25->AbEntrySummary
          || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)ObpTypeObjectType + 184, (__int64)v25)) != 0 )
        {
          _BitScanForward((unsigned int *)&v28, AbEntrySummary);
          v25->AbEntrySummary = AbEntrySummary & ~(1 << v28);
          _enable();
          v24 = (__int64)(&v25[1].Process + 12 * v28);
          if ( (unsigned __int64)(v26 - qword_140C50630) >= 0x8000000000LL )
            SessionId = -1;
          else
            SessionId = MmGetSessionIdEx((__int64)v25->ApcState.Process);
          *(_DWORD *)(v24 + 8) = SessionId;
          *(_QWORD *)v24 = v26 & 0x7FFFFFFFFFFFFFFCLL;
        }
        if ( _interlockedbittestandset64((volatile signed __int32 *)v26, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v26, v24, v26);
        if ( v24 )
          *(_BYTE *)(v24 + 18) = 1;
        v12 = 0;
        v11 = 64;
        v13 = *((unsigned int *)ObpTypeObjectType + 11);
        qword_140C4ED38 = v13;
        v14 = (unsigned int)v13;
        if ( (_DWORD)v13 )
        {
          v15 = ObpObjectTypes;
          while ( *v15 )
          {
            if ( (*(_BYTE *)(*v15 + 66) & 0x40) != 0 )
              _bittestandset64(&qword_140C4ED40, v12);
            ++v12;
            ++v15;
            if ( v12 >= (unsigned int)v13 )
              goto LABEL_36;
          }
          v14 = v12;
          LODWORD(v13) = v12;
          qword_140C4ED38 = v12;
        }
LABEL_36:
        v16 = (ULONG_PTR)ObpTypeObjectType + 184;
        _m_prefetchw((char *)ObpTypeObjectType + 184);
        v17 = *(_QWORD *)v16;
        v18 = *(_QWORD *)v16 - 16LL;
        if ( (*(_QWORD *)v16 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v18 = 0LL;
        if ( (v17 & 2) != 0
          || (v19 = *(_QWORD *)v16, v19 != _InterlockedCompareExchange64((volatile signed __int64 *)v16, v18, v17)) )
        {
          ExfReleasePushLock((_QWORD *)v16);
        }
        v30 = KeGetCurrentThread();
        if ( v16 - qword_140C50630 >= 0x8000000000LL )
          v31 = -1;
        else
          v31 = MmGetSessionIdEx((__int64)v30->ApcState.Process);
        _disable();
        p_Process = (__int64)&v30[1].Process;
        v33 = 0;
        while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v16 & 0x7FFFFFFFFFFFFFFCLL)
             || !*(_BYTE *)(p_Process + 18)
             || (*(_DWORD *)p_Process & 1) != 0
             || *(_DWORD *)(p_Process + 8) != v31 )
        {
          ++v33;
          p_Process += 96LL;
          if ( v33 >= 6 )
            goto LABEL_65;
        }
        *(_BYTE *)(p_Process + 18) = 0;
        if ( p_Process )
        {
          if ( *(__int64 *)p_Process < 0 )
          {
            *(_BYTE *)p_Process |= 2u;
            _enable();
            KiAbEntryRemoveFromTree(p_Process);
            _disable();
          }
          v34 = *(_DWORD *)(p_Process + 88);
          *(_DWORD *)(p_Process + 88) = 0;
          *(_BYTE *)(p_Process + 17) = 0;
          *(_QWORD *)p_Process = 0LL;
          v30->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
          _enable();
          if ( v34 )
            KiAbThreadRemoveBoostsSlow((ULONG_PTR)v30, v16, v34);
          goto LABEL_68;
        }
LABEL_65:
        if ( (*((_DWORD *)&v30->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v30, v16, v31, 0LL);
        _enable();
LABEL_68:
        v35 = KeGetCurrentThread();
        v36 = v35->SpecialApcDisable++ == -1;
        if ( v36 && ($CEA84C04E3712D858E5667A507841A2A *)v35->ApcState.ApcListHead[0].Flink != &v35->152 )
          KiCheckForKernelApcDelivery();
        if ( (_DWORD)v13 )
        {
          qword_140C4ED60 = ObpObjectTypes[41929663 * (__rdtsc() >> 4) % v14];
          v7 = (_QWORD *)(qword_140C4ED60 + 112);
          v8 = (const char *)(qword_140C4ED60 + 112);
          if ( qword_140C4ED60 + 112 < (unsigned __int64)(qword_140C4ED60 + 176) )
          {
            do
            {
              _mm_prefetch(v8, 0);
              v8 += 64;
            }
            while ( (unsigned __int64)v8 < qword_140C4ED60 + 176 );
          }
          v9 = qword_140C4ED20;
          v10 = 8LL;
          do
          {
            v9 = __ROR8__(v9 - *v7++, qword_140C4ED28);
            v11 -= 8;
            --v10;
          }
          while ( v10 );
          for ( ; v11; --v11 )
          {
            v37 = *(unsigned __int8 *)v7;
            v7 = (_QWORD *)((char *)v7 + 1);
            v9 = __ROR8__(v9 - v37, qword_140C4ED28);
          }
          qword_140C4ED68 = v9;
          qword_140C4ED30 = KiQueryUnbiasedInterruptTime()
                          + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL
                          + 288000000000LL;
        }
        else
        {
          qword_140C4ED20 = 0LL;
        }
      }
      ExpDebuggerDpc.TargetInfoAsUlong = 275;
      ExpDebuggerDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)ExpDebuggerDpcRoutine;
      ExpDebuggerWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ExpDebuggerWorker;
      ExpDebuggerDpc.DeferredContext = 0LL;
      ExpDebuggerDpc.DpcData = 0LL;
      ExpDebuggerDpc.ProcessorHistory = 0LL;
      ExpDebuggerWorkItem.Parameter = 0LL;
      ExpDebuggerWorkItem.List.Flink = 0LL;
      ExpDebuggerWork = 1;
      ExQueueDebuggerWorker();
      return v6;
    }
  }
  return result;
}
