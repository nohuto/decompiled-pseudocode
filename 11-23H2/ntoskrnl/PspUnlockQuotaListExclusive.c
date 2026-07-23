/*
 * XREFs of PspUnlockQuotaListExclusive @ 0x1403B5BEC
 * Callers:
 *     PspLookupProcessQuotaBlock @ 0x1407F8924 (PspLookupProcessQuotaBlock.c)
 *     PspRemoveQuotaBlock @ 0x1409AE28C (PspRemoveQuotaBlock.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 */

_QWORD *__fastcall PspUnlockQuotaListExclusive(__int64 a1, volatile signed __int64 *a2)
{
  char v4; // al

  v4 = _InterlockedExchangeAdd64(a2, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
    ExfTryToWakePushLock(a2);
  KeAbPostRelease((ULONG_PTR)a2);
  return KeLeaveCriticalRegionThread(a1);
}
