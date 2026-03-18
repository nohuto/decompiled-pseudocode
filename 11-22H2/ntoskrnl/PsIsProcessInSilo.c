/*
 * XREFs of PsIsProcessInSilo @ 0x140289ECC
 * Callers:
 *     PsIsThreadInSilo @ 0x14031C6B8 (PsIsThreadInSilo.c)
 *     PsLookupProcessByProcessId @ 0x1406FA420 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x1406FAFC0 (PsLookupThreadByThreadId.c)
 *     ExpGetProcessInformation @ 0x1407432D0 (ExpGetProcessInformation.c)
 *     NtGetNextProcess @ 0x1407D4BE0 (NtGetNextProcess.c)
 *     ExProcessCounterSetCallback @ 0x1409F5E80 (ExProcessCounterSetCallback.c)
 * Callees:
 *     PspGetJobSilo @ 0x14031C634 (PspGetJobSilo.c)
 *     PspIsSiloInSilo @ 0x1407E5990 (PspIsSiloInSilo.c)
 */

bool __fastcall PsIsProcessInSilo(struct _KPROCESS *a1, __int64 a2)
{
  __int64 JobSilo; // rax

  if ( !a2 || a1 == PsInitialSystemProcess || a1 == PsIdleProcess )
    return 1;
  JobSilo = PspGetJobSilo(a1[1].Affinity.StaticBitmap[16]);
  return (unsigned __int8)PspIsSiloInSilo(JobSilo) != 0;
}
