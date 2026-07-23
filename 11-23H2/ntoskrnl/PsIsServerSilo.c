/*
 * XREFs of PsIsServerSilo @ 0x14020C020
 * Callers:
 *     PsGetEffectiveServerSilo @ 0x14020BFF0 (PsGetEffectiveServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x14028A220 (PsGetCurrentServerSilo.c)
 *     PspJobIsAppSilo @ 0x1405A3E48 (PspJobIsAppSilo.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x14069F78C (PspValidateJobAssignmentSiloPolicy.c)
 *     PspTerminateProcessesJobCallback @ 0x1406A0B50 (PspTerminateProcessesJobCallback.c)
 *     PspGetNextSilo @ 0x1406A31F4 (PspGetNextSilo.c)
 *     IopParseDevice @ 0x14072CF50 (IopParseDevice.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x140767B30 (IopAllocateFoExtensionsOnCreate.c)
 *     PsIsProcessInAppSilo @ 0x1409AC870 (PsIsProcessInAppSilo.c)
 *     PsTerminateServerSilo @ 0x1409ACAA0 (PsTerminateServerSilo.c)
 *     PspConvertSiloToServerSilo @ 0x1409ACDE4 (PspConvertSiloToServerSilo.c)
 *     PspDeleteSilo @ 0x1409AD25C (PspDeleteSilo.c)
 *     PspSetJobMemoryPartition @ 0x1409B2E24 (PspSetJobMemoryPartition.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsServerSilo(__int64 a1)
{
  return !a1 || *(_QWORD *)(a1 + 1488) != 0LL;
}
