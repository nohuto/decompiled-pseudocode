/*
 * XREFs of PfpPrefetchSharedInitialize @ 0x14074BDD4
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1406846E8 (PfpPrefetchRequestPerform.c)
 *     PfSnAsyncPrefetchWorker @ 0x14074DCA0 (PfSnAsyncPrefetchWorker.c)
 *     PfpQueryFileExtentsRequest @ 0x14097E4F0 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402AF870 (KeInitializeEvent.c)
 *     memset @ 0x140435A00 (memset.c)
 */

void __fastcall PfpPrefetchSharedInitialize(__int64 a1)
{
  memset((void *)a1, 0, 0x90uLL);
  *(_QWORD *)(a1 + 48) = a1;
  *(_QWORD *)(a1 + 40) = PfpPrefetchSharedConflictNotifyStart;
  KeInitializeEvent((PRKEVENT)(a1 + 88), NotificationEvent, 0);
  *(_QWORD *)(a1 + 120) = 1LL;
}
