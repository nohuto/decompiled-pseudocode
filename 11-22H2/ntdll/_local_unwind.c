/*
 * XREFs of _local_unwind @ 0x18008F9F0
 * Callers:
 *     EvtIntReportEventWorker @ 0x180053330 (EvtIntReportEventWorker.c)
 *     LdrAddDllDirectory @ 0x180078440 (LdrAddDllDirectory.c)
 * Callees:
 *     RtlUnwind @ 0x1800547E0 (RtlUnwind.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  RtlUnwind(a1, a2, 0LL, 0LL);
}
