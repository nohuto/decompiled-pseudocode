/*
 * XREFs of _local_unwind @ 0x180094A30
 * Callers:
 *     EvtIntReportEventWorker @ 0x180005D70 (EvtIntReportEventWorker.c)
 *     LdrAddDllDirectory @ 0x180060070 (LdrAddDllDirectory.c)
 * Callees:
 *     RtlUnwind @ 0x180034F10 (RtlUnwind.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  RtlUnwind(a1, a2, 0LL, 0LL);
}
