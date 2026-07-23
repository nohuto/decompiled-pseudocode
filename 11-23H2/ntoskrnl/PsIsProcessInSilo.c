/*
 * XREFs of PsIsProcessInSilo @ 0x14028A27C
 * Callers:
 *     PsIsThreadInSilo @ 0x14031CB28 (PsIsThreadInSilo.c)
 *     PsLookupProcessByProcessId @ 0x1406FA580 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x1406FB120 (PsLookupThreadByThreadId.c)
 *     ExpGetProcessInformation @ 0x140742FB0 (ExpGetProcessInformation.c)
 *     NtGetNextProcess @ 0x1407D4930 (NtGetNextProcess.c)
 *     ExProcessCounterSetCallback @ 0x1409F6060 (ExProcessCounterSetCallback.c)
 * Callees:
 *     PspGetJobSilo @ 0x14031CAA4 (PspGetJobSilo.c)
 *     PspIsSiloInSilo @ 0x1407E56E0 (PspIsSiloInSilo.c)
 */

bool __fastcall PsIsProcessInSilo(struct _KPROCESS *a1, __int64 a2)
{
  __int64 JobSilo; // rax

  if ( !a2 || a1 == PsInitialSystemProcess || a1 == PsIdleProcess )
    return 1;
  JobSilo = PspGetJobSilo(a1[1].Affinity.StaticBitmap[16]);
  return (unsigned __int8)PspIsSiloInSilo(JobSilo) != 0;
}
