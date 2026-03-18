/*
 * XREFs of PoUserShutdownInitiated @ 0x1407EC000
 * Callers:
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 * Callees:
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     KiSetTimerEx @ 0x1402E2D20 (KiSetTimerEx.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 *     PpmBeginHighPerfRequest @ 0x1403690D0 (PpmBeginHighPerfRequest.c)
 *     PopQueueWorkItem @ 0x14036AAC4 (PopQueueWorkItem.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PopTransitionCheckpoint @ 0x1407EBF04 (PopTransitionCheckpoint.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

char PoUserShutdownInitiated()
{
  char result; // al
  int v1; // ecx
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v4; // bl

  result = PsIsCurrentThreadInServerSilo();
  if ( !result )
  {
    PopTransitionCheckpoint(7, 0);
    result = PopQueueWorkItem((__int64)&PopSetUserShutdownMarkerWorkItem, DelayedWorkQueue);
    if ( qword_140C5AD48 )
    {
      PopAcquirePolicyLock(v1);
      if ( PopUserShutdownInProgress )
      {
        return PopReleasePolicyLock(v3, v2);
      }
      else
      {
        PopUserShutdownInProgress = 1;
        if ( !byte_140C235C4 )
        {
          PopUserShutdownDelayWorker.Parameter = 0LL;
          PopUserShutdownDelayWorker.List.Flink = 0LL;
          PopUserShutdownDelayWorker.WorkerRoutine = (void (__fastcall *)(void *))PopUserShutdownDelayWorkerCallback;
          KeInitializeTimerEx(&PopUserShutdownDelayTimer, NotificationTimer);
          KeInitializeDpc(&PopUserShutdownDelayDpc, (PKDEFERRED_ROUTINE)PopUserShutdownDelayDpcCallback, 0LL);
          byte_140C235C4 = 1;
        }
        PopBsdShutdownInProgress = 1;
        PopReleasePolicyLock(v3, v2);
        v4 = ((__int64 (*)(void))qword_140C5AD48)();
        result = KiSetTimerEx(
                   (unsigned __int64)&PopUserShutdownDelayTimer,
                   -900000000LL,
                   0,
                   0,
                   (__int64)&PopUserShutdownDelayDpc);
        if ( v4 )
          return PpmBeginHighPerfRequest();
      }
    }
  }
  return result;
}
