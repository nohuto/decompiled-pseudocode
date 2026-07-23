/*
 * XREFs of PspIsSiloInSilo @ 0x1407E56E0
 * Callers:
 *     PsIsProcessInSilo @ 0x14028A27C (PsIsProcessInSilo.c)
 *     PsIsThreadInSilo @ 0x14031CB28 (PsIsThreadInSilo.c)
 *     NtCreateUserProcess @ 0x1406B8310 (NtCreateUserProcess.c)
 *     NtSetInformationThread @ 0x1407337A0 (NtSetInformationThread.c)
 *     PsRootSiloInformation @ 0x1409AC990 (PsRootSiloInformation.c)
 * Callees:
 *     <none>
 */

char __fastcall PspIsSiloInSilo(__int64 a1, __int64 a2)
{
  if ( !a2 )
    return 1;
  while ( a1 )
  {
    if ( a1 == a2 )
      return 1;
    a1 = *(_QWORD *)(a1 + 1288);
  }
  return 0;
}
