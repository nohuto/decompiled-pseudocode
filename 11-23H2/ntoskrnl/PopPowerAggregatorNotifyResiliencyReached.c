/*
 * XREFs of PopPowerAggregatorNotifyResiliencyReached @ 0x140993ED4
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x140599CA0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 */

void PopPowerAggregatorNotifyResiliencyReached()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140C3AA50 == 1 )
    BYTE9(xmmword_140C3AA60) = 0;
  PopReleaseRwLock(&PopPowerAggregatorLock);
}
