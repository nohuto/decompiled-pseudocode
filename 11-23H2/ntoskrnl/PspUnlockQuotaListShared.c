/*
 * XREFs of PspUnlockQuotaListShared @ 0x1403716D4
 * Callers:
 *     PspAssignProcessQuotaBlock @ 0x1407F8468 (PspAssignProcessQuotaBlock.c)
 *     PspLookupProcessQuotaBlock @ 0x1407F8654 (PspLookupProcessQuotaBlock.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BD860 (ExfReleasePushLockShared.c)
 */

_QWORD *__fastcall PspUnlockQuotaListShared(__int64 a1, signed __int64 *a2)
{
  if ( _InterlockedCompareExchange64(a2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2);
  KeAbPostRelease((ULONG_PTR)a2);
  return KeLeaveCriticalRegionThread(a1);
}
