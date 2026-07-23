/*
 * XREFs of PsGetEffectiveServerSilo @ 0x14020BFF0
 * Callers:
 *     EtwpTraceFileIo @ 0x14020BEC0 (EtwpTraceFileIo.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x14022D4E0 (UpcaseUnicodeToSingleByteNHelper.c)
 *     PsGetThreadServerSilo @ 0x14028C420 (PsGetThreadServerSilo.c)
 *     PsGetJobServerSilo @ 0x14036EFA0 (PsGetJobServerSilo.c)
 *     EtwTraceContextSwap @ 0x14038A500 (EtwTraceContextSwap.c)
 *     PspIsSiloInServerSilo @ 0x1405A3E2C (PspIsSiloInServerSilo.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x14069F78C (PspValidateJobAssignmentSiloPolicy.c)
 *     PspEstimateNewProcessServerSilo @ 0x1406B9050 (PspEstimateNewProcessServerSilo.c)
 *     NtQueryInformationProcess @ 0x1406FCCA0 (NtQueryInformationProcess.c)
 *     NtSetInformationThread @ 0x1407337A0 (NtSetInformationThread.c)
 *     PspImplicitAssignProcessToJob @ 0x1407E628C (PspImplicitAssignProcessToJob.c)
 *     PspGetMemoryPartitionImplicit @ 0x1407E71B4 (PspGetMemoryPartitionImplicit.c)
 *     ObpSetSiloDeviceMap @ 0x140858AE4 (ObpSetSiloDeviceMap.c)
 * Callees:
 *     PsIsServerSilo @ 0x14020C020 (PsIsServerSilo.c)
 */

__int64 __fastcall PsGetEffectiveServerSilo(__int64 a1)
{
  __int64 v2; // rcx

  if ( !a1 )
    return 0LL;
  while ( !(unsigned __int8)PsIsServerSilo() )
    ;
  return v2;
}
