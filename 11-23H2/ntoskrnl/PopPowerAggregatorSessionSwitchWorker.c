/*
 * XREFs of PopPowerAggregatorSessionSwitchWorker @ 0x140994120
 * Callers:
 *     <none>
 * Callees:
 *     KeSetTimer2 @ 0x140250220 (KeSetTimer2.c)
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PdcTaskClientRequest @ 0x140682428 (PdcTaskClientRequest.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140875D30 (PopPowerAggregatorScheduleWorker.c)
 */

void PopPowerAggregatorSessionSwitchWorker()
{
  char v0; // di
  char v1; // bl
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  v0 = 0;
  v1 = 0;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  if ( byte_140C3AA99 )
  {
    unk_140C3AA98 = 0;
    v0 = 1;
    PopPowerAggregatorScheduleWorker((__int64)&PopPowerAggregatorContext);
  }
  else
  {
    byte_140C3AA99 = 1;
    v1 = 1;
  }
  PopReleaseRwLock(&PopPowerAggregatorLock);
  if ( v0 )
  {
    PdcTaskClientRequest(PopSleepStudyTaskClientActivator, 0);
  }
  else if ( v1 )
  {
    PdcTaskClientRequest(PopSleepStudyTaskClientActivator, 1);
    v2[0] = 0LL;
    v2[1] = -1LL;
    KeSetTimer2((__int64)&unk_140C3AAC0, -50000000LL, 0LL, (__int64)v2);
  }
}
