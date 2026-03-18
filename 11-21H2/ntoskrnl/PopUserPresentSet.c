/*
 * XREFs of PopUserPresentSet @ 0x140368ED4
 * Callers:
 *     PopSetSystemState @ 0x140368E90 (PopSetSystemState.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     PopResetIdleTime @ 0x140368F70 (PopResetIdleTime.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14080B5F0 (DbgkWerCaptureLiveKernelDump.c)
 */

void __fastcall PopUserPresentSet(int a1)
{
  void *v1; // rsi
  __int32 v2; // edi

  v1 = (void *)a1;
  if ( (PopSimulate & 0x40000) != 0 )
    DbgkWerCaptureLiveKernelDump(L"UserPresenceSet", PopFullWake, 0LL, 0LL, 0LL, 0);
  if ( byte_140C227C1 == 3 )
  {
    _InterlockedOr(&PopPendingUserPresenceDuringSystemSleep, 1u);
    _InterlockedExchange(&PopPendingUserPresenceMonitorOnReason, (__int32)v1);
  }
  else
  {
    v2 = _InterlockedExchange(&PopUserPresentSetStatus, 1);
    if ( _InterlockedCompareExchange(&dword_140C232D4, 0, 0) )
    {
      if ( !v2 )
      {
        _InterlockedExchange(&PopUserPresentSetStatus, 0);
        KeSetEvent(&PopUserPresentCompletedEvent, 0, 0);
      }
    }
    else
    {
      PopResetIdleTime(2LL);
      if ( !v2 )
      {
        PopUserPresentWorkItem.Parameter = v1;
        PopUserPresentWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopUserPresentSetWorker;
        PopUserPresentWorkItem.List.Flink = 0LL;
        ExQueueWorkItem(&PopUserPresentWorkItem, DelayedWorkQueue);
      }
    }
  }
}
