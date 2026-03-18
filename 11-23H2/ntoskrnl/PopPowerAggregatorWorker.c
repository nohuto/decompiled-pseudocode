/*
 * XREFs of PopPowerAggregatorWorker @ 0x140874980
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x1407A9940 (PopPowerAggregatorDiagTraceEvent.c)
 *     PopPowerAggregatorInvokeStateMachine @ 0x140874A08 (PopPowerAggregatorInvokeStateMachine.c)
 */

void PopPowerAggregatorWorker()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_WORKER_START, 0, 0LL);
  qword_140C3BBB0 = (__int64)KeGetCurrentThread();
  while ( (dword_140C3AA68 & 2) != 0 )
  {
    dword_140C3AA68 &= ~2u;
    PopPowerAggregatorInvokeStateMachine();
  }
  qword_140C3BBB0 = 0LL;
  dword_140C3AA68 &= ~1u;
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_WORKER_END, 0, 0LL);
  PopReleaseRwLock(&PopPowerAggregatorLock);
}
