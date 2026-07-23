/*
 * XREFs of PopPowerAggregatorWorker @ 0x140874BC0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x1407A9B30 (PopPowerAggregatorDiagTraceEvent.c)
 *     PopPowerAggregatorInvokeStateMachine @ 0x140874C48 (PopPowerAggregatorInvokeStateMachine.c)
 */

void PopPowerAggregatorWorker()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_WORKER_START, 0, 0LL);
  qword_140C3BB90 = (__int64)KeGetCurrentThread();
  while ( (dword_140C3AA48 & 2) != 0 )
  {
    dword_140C3AA48 &= ~2u;
    PopPowerAggregatorInvokeStateMachine();
  }
  qword_140C3BB90 = 0LL;
  dword_140C3AA48 &= ~1u;
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_WORKER_END, 0, 0LL);
  PopReleaseRwLock(&PopPowerAggregatorLock);
}
