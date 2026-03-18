/*
 * XREFs of PopPowerAggregatorNotifyResiliencyReached @ 0x140993CD4
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1405997B0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 */

void PopPowerAggregatorNotifyResiliencyReached()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140C3AA70 == 1 )
    BYTE9(xmmword_140C3AA80) = 0;
  PopReleaseRwLock(&PopPowerAggregatorLock);
}
