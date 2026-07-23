/*
 * XREFs of PpmCheckPeriodicStart @ 0x14032C2B0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     PpmCheckStart @ 0x14032C354 (PpmCheckStart.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x140373D18 (PpmEventTraceFailedPerfCheckStart.c)
 */

void __fastcall PpmCheckPeriodicStart(__int64 a1, __int64 a2, void *a3)
{
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-18h] BYREF

  Timeout.QuadPart = 0LL;
  if ( KeWaitForSingleObject(&word_140C3D5A8, Executive, 0, 0, &Timeout) )
  {
    PpmEventTraceFailedPerfCheckStart(PpmCheckLastEffectiveExecutionTime);
    _m_prefetchw(&PpmCheckDelayedStartWorkerQueued);
    if ( !_InterlockedOr8(&PpmCheckDelayedStartWorkerQueued, 1u) )
    {
      PpmCheckDelayedStartWorkItem.List.Flink = 0LL;
      PpmCheckDelayedStartWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PpmCheckDelayedPeriodicStart;
      PpmCheckDelayedStartWorkItem.Parameter = a3;
      ExQueueWorkItem(&PpmCheckDelayedStartWorkItem, CriticalWorkQueue);
    }
  }
  else
  {
    PpmCheckMakeupCount = (int)a3;
    PpmCheckStart(0LL);
  }
}
