/*
 * XREFs of TtmiReleaseSession @ 0x1409A4D48
 * Callers:
 *     TtmpScheduledEvaluationWorker @ 0x1409A3B80 (TtmpScheduledEvaluationWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 */

void __fastcall TtmiReleaseSession(_QWORD *a1)
{
  *a1 = 0LL;
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegion();
}
