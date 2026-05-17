/*
 * XREFs of _local_unwind @ 0x1800901F0
 * Callers:
 *     EvtIntReportEventWorker @ 0x1800531D0 (EvtIntReportEventWorker.c)
 *     LdrAddDllDirectory @ 0x180078AB0 (LdrAddDllDirectory.c)
 * Callees:
 *     RtlUnwind @ 0x180054680 (RtlUnwind.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  RtlUnwind(a1, a2, 0LL, 0LL);
}
