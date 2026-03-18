/*
 * XREFs of PopPowerAggregatorNotifyDisplayPoweredOn @ 0x140808A40
 * Callers:
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140809508 (PopPowerAggregatorScheduleWorker.c)
 */

void PopPowerAggregatorNotifyDisplayPoweredOn()
{
  if ( qword_140C5ADE8 )
    qword_140C5ADE8();
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140C20BF8 == 2 )
  {
    LOBYTE(xmmword_140C20C08) = 1;
    PopPowerAggregatorScheduleWorker(&PopPowerAggregatorContext);
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
