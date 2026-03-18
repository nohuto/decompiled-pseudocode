/*
 * XREFs of PsIsProcessInSilo @ 0x140289FEC
 * Callers:
 *     PsIsThreadInSilo @ 0x14031C898 (PsIsThreadInSilo.c)
 *     PsLookupProcessByProcessId @ 0x1406FA370 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x1406FAF10 (PsLookupThreadByThreadId.c)
 *     ExpGetProcessInformation @ 0x140742DC0 (ExpGetProcessInformation.c)
 *     NtGetNextProcess @ 0x1407D4660 (NtGetNextProcess.c)
 *     ExProcessCounterSetCallback @ 0x1409F5DD0 (ExProcessCounterSetCallback.c)
 * Callees:
 *     PspGetJobSilo @ 0x14031C814 (PspGetJobSilo.c)
 *     PspIsSiloInSilo @ 0x1407E5410 (PspIsSiloInSilo.c)
 */

bool __fastcall PsIsProcessInSilo(struct _KPROCESS *a1, __int64 a2)
{
  __int64 JobSilo; // rax

  if ( !a2 || a1 == PsInitialSystemProcess || a1 == PsIdleProcess )
    return 1;
  JobSilo = PspGetJobSilo(a1[1].Affinity.StaticBitmap[16]);
  return (unsigned __int8)PspIsSiloInSilo(JobSilo) != 0;
}
