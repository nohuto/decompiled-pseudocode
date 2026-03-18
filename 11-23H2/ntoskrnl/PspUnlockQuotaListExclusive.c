/*
 * XREFs of PspUnlockQuotaListExclusive @ 0x1403B5A0C
 * Callers:
 *     PspLookupProcessQuotaBlock @ 0x1407F8654 (PspLookupProcessQuotaBlock.c)
 *     PspRemoveQuotaBlock @ 0x1409AE08C (PspRemoveQuotaBlock.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
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
