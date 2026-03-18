/*
 * XREFs of PopPowerAggregatorNotifyDisplayPoweredOn @ 0x140993BB0
 * Callers:
 *     NtPowerInformation @ 0x140783F20 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1407ED06C (PopPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140875AF0 (PopPowerAggregatorScheduleWorker.c)
 */

void PopPowerAggregatorNotifyDisplayPoweredOn()
{
  if ( qword_140C6AFB8 )
    qword_140C6AFB8();
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140C3AA98 == 2 )
  {
    LOBYTE(xmmword_140C3AAA8) = 1;
    PopPowerAggregatorScheduleWorker((__int64)&PopPowerAggregatorContext);
  }
  PopReleaseRwLock(&PopPowerAggregatorLock);
}
