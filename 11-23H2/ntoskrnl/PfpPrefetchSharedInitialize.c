/*
 * XREFs of PfpPrefetchSharedInitialize @ 0x14074BFC4
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1406846E8 (PfpPrefetchRequestPerform.c)
 *     PfSnAsyncPrefetchWorker @ 0x14074DE90 (PfSnAsyncPrefetchWorker.c)
 *     PfpQueryFileExtentsRequest @ 0x14097E6F0 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall PfpPrefetchSharedInitialize(__int64 a1)
{
  memset((void *)a1, 0, 0x90uLL);
  *(_QWORD *)(a1 + 48) = a1;
  *(_QWORD *)(a1 + 40) = PfpPrefetchSharedConflictNotifyStart;
  KeInitializeEvent((PRKEVENT)(a1 + 88), NotificationEvent, 0);
  *(_QWORD *)(a1 + 120) = 1LL;
}
