/*
 * XREFs of KiSearchForNewThreadsForRescheduleContext @ 0x140242670
 * Callers:
 *     KiRescheduleThreadAfterAffinityChange @ 0x140203570 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KiSearchForNewThread @ 0x140240420 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140240D60 (KiSearchForNewThreadOnProcessor.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KeYieldExecution @ 0x140246AC0 (KeYieldExecution.c)
 *     KiEnterLongDpcProcessing @ 0x140247AD0 (KiEnterLongDpcProcessing.c)
 *     KiQuantumEnd @ 0x1402487C0 (KiQuantumEnd.c)
 *     KiSetPriorityThread @ 0x1402B0860 (KiSetPriorityThread.c)
 *     KiDirectSwitchThread @ 0x1402B1B30 (KiDirectSwitchThread.c)
 *     KiRemoveBoostThread @ 0x1402BB4E0 (KiRemoveBoostThread.c)
 *     KiExitThreadWait @ 0x1402BBF20 (KiExitThreadWait.c)
 *     KiSetSystemAffinityThread @ 0x1403073EC (KiSetSystemAffinityThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x140307814 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1403081E4 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140308538 (KiGroupSchedulingGenerationEnd.c)
 *     KiHandleDeferredPreemption @ 0x140309458 (KiHandleDeferredPreemption.c)
 *     KeWaitForMultipleObjects @ 0x140311430 (KeWaitForMultipleObjects.c)
 *     KiApplyForegroundBoostThread @ 0x140350678 (KiApplyForegroundBoostThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14039E0CC (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x1404112D8 (KiSoftParkElectionUnparkProcessor.c)
 *     KiParkCurrentProcessor @ 0x14057E38C (KiParkCurrentProcessor.c)
 * Callees:
 *     KiAdvanceReadyQueueEnumeratorToNextList @ 0x140206900 (KiAdvanceReadyQueueEnumeratorToNextList.c)
 *     KiStartReadyQueueEnumeratorForRescheduleContext @ 0x140242980 (KiStartReadyQueueEnumeratorForRescheduleContext.c)
 *     KiReadyQueueEnumeratorStartNormalQueuesPhase @ 0x140242C70 (KiReadyQueueEnumeratorStartNormalQueuesPhase.c)
 *     KiReadyQueueEnumeratorStartScbQueuesPhase @ 0x140242DB0 (KiReadyQueueEnumeratorStartScbQueuesPhase.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiCheckThreadAffinity @ 0x140243660 (KiCheckThreadAffinity.c)
 *     KiRemoveCurrentlyEnumeratedThreadFromReadyQueue @ 0x140243690 (KiRemoveCurrentlyEnumeratedThreadFromReadyQueue.c)
 *     KiCanLocalReadyThreadBeScheduledToRescheduleContext @ 0x140243810 (KiCanLocalReadyThreadBeScheduledToRescheduleContext.c)
 *     KiScheduleThreadToRescheduleContext @ 0x140243B10 (KiScheduleThreadToRescheduleContext.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402B34D0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiInsertDeferredReadyList @ 0x1402B9EE4 (KiInsertDeferredReadyList.c)
 *     KiAddThreadToScbQueue @ 0x140305CB0 (KiAddThreadToScbQueue.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

volatile signed __int64 *__fastcall KiSearchForNewThreadsForRescheduleContext(_BYTE *a1, __int64 a2)
{
  volatile signed __int32 *i; // r8
  volatile signed __int32 *v5; // rdi
  volatile signed __int32 **v6; // rcx
  __int64 v7; // rdx
  char v8; // di
  int ready; // eax
  __int64 v10; // rdx
  volatile signed __int64 *j; // r8
  volatile signed __int64 *result; // rax
  volatile signed __int64 **v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // r15
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rsi
  __int64 v22; // rsi
  __int64 CanLocalReadyThreadBeScheduledToRescheduleContext; // rsi
  _DWORD v24[4]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v25[54]; // [rsp+40h] [rbp-C0h] BYREF

  for ( i = 0LL; ; i = v5 )
  {
    v5 = 0LL;
    if ( !*a1 )
      break;
    v6 = (volatile signed __int32 **)(a1 + 24);
    v7 = (unsigned __int8)*a1;
    do
    {
      if ( *v6 > i && (!v5 || *v6 < v5) )
        v5 = *v6;
      v6 += 5;
      --v7;
    }
    while ( v7 );
    if ( !v5 )
      break;
    v24[0] = 0;
    while ( _interlockedbittestandset64(v5, 0LL) )
    {
      do
        KeYieldProcessorEx(v24);
      while ( *(_QWORD *)v5 );
    }
  }
LABEL_9:
  memset(v25, 0, sizeof(v25));
  KiStartReadyQueueEnumeratorForRescheduleContext(v25, a1);
LABEL_10:
  if ( BYTE5(v25[1]) != 4 )
  {
    if ( BYTE5(v25[1]) )
      goto LABEL_36;
    v8 = 1;
    while ( 1 )
    {
      if ( v8 == 1 )
      {
        v10 = 0LL;
        goto LABEL_17;
      }
      if ( v8 == 2 )
        break;
      if ( v8 == 3 )
      {
        v10 = 1LL;
LABEL_17:
        ready = KiReadyQueueEnumeratorStartNormalQueuesPhase(v25, v10);
LABEL_18:
        if ( ready >= 0 )
          goto LABEL_20;
      }
      if ( (unsigned __int8)++v8 >= 4u )
      {
LABEL_20:
        BYTE5(v25[1]) = v8;
        if ( v8 == 4 )
          goto LABEL_21;
LABEL_36:
        v25[5] = *(_QWORD *)v25[5];
        if ( v25[5] == v25[4] )
        {
          while ( (int)KiAdvanceReadyQueueEnumeratorToNextList((__int64)v25) >= 0 )
          {
            v25[5] = *(_QWORD *)v25[5];
            if ( v25[5] != v25[4] )
              goto LABEL_37;
          }
          goto LABEL_21;
        }
LABEL_37:
        v15 = v25[5] - 216LL;
        v16 = v25[6 * BYTE2(v25[1]) + 6];
        if ( BYTE5(v25[1]) == 2 )
        {
          v17 = 0LL;
        }
        else if ( BYTE4(v25[1]) == 1 )
        {
          v17 = v25[6 * BYTE2(v25[1]) + 7];
        }
        else
        {
          v17 = 0LL;
        }
        if ( (unsigned int)KiCheckThreadAffinity(v25[5] - 216LL) )
        {
          if ( !v18
            && (v21 = *(_QWORD *)(v15 + 104)) != 0
            && (v22 = *(unsigned int *)(v16 + 216) + v21) != 0
            && (LOBYTE(v20) = 1, (unsigned int)KiGetThreadEffectiveRankNonZero(v19, v22, v20, 0LL)) )
          {
            KiRemoveCurrentlyEnumeratedThreadFromReadyQueue(v25, v15);
            *(_DWORD *)(v15 + 536) = *(_DWORD *)(v16 + 36);
            KiAddThreadToScbQueue(v16, v22, v15, 0LL);
          }
          else
          {
            CanLocalReadyThreadBeScheduledToRescheduleContext = KiCanLocalReadyThreadBeScheduledToRescheduleContext(
                                                                  a1,
                                                                  v15,
                                                                  v16,
                                                                  v17);
            if ( CanLocalReadyThreadBeScheduledToRescheduleContext )
            {
              KiRemoveCurrentlyEnumeratedThreadFromReadyQueue(v25, v15);
              if ( !v15 )
                goto LABEL_21;
              KiScheduleThreadToRescheduleContext(
                (_DWORD)a1,
                v15,
                CanLocalReadyThreadBeScheduledToRescheduleContext,
                0,
                a2);
              goto LABEL_9;
            }
          }
        }
        else
        {
          KiRemoveCurrentlyEnumeratedThreadFromReadyQueue(v25, v15);
          KiInsertDeferredReadyList(a2, v15);
        }
        goto LABEL_10;
      }
    }
    ready = KiReadyQueueEnumeratorStartScbQueuesPhase(v25);
    goto LABEL_18;
  }
LABEL_21:
  for ( j = 0LL; ; j = result )
  {
    result = 0LL;
    if ( !*a1 )
      break;
    v13 = (volatile signed __int64 **)(a1 + 24);
    v14 = (unsigned __int8)*a1;
    do
    {
      if ( *v13 > j && (!result || *v13 < result) )
        result = *v13;
      v13 += 5;
      --v14;
    }
    while ( v14 );
    if ( !result )
      break;
    _InterlockedAnd64(result, 0LL);
  }
  return result;
}
