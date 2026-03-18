/*
 * XREFs of PsGetEffectiveServerSilo @ 0x14020BFF0
 * Callers:
 *     EtwpTraceFileIo @ 0x14020BEC0 (EtwpTraceFileIo.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x14022D3D0 (UpcaseUnicodeToSingleByteNHelper.c)
 *     PsGetThreadServerSilo @ 0x14028C190 (PsGetThreadServerSilo.c)
 *     PsGetJobServerSilo @ 0x14036EE00 (PsGetJobServerSilo.c)
 *     EtwTraceContextSwap @ 0x14038A320 (EtwTraceContextSwap.c)
 *     PspIsSiloInServerSilo @ 0x1405A393C (PspIsSiloInServerSilo.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x14069F78C (PspValidateJobAssignmentSiloPolicy.c)
 *     PspEstimateNewProcessServerSilo @ 0x1406B9020 (PspEstimateNewProcessServerSilo.c)
 *     NtQueryInformationProcess @ 0x1406FCA90 (NtQueryInformationProcess.c)
 *     NtSetInformationThread @ 0x1407335B0 (NtSetInformationThread.c)
 *     PspImplicitAssignProcessToJob @ 0x1407E5FBC (PspImplicitAssignProcessToJob.c)
 *     PspGetMemoryPartitionImplicit @ 0x1407E6EE4 (PspGetMemoryPartitionImplicit.c)
 *     ObpSetSiloDeviceMap @ 0x1408588A4 (ObpSetSiloDeviceMap.c)
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
