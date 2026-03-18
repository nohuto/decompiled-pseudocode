/*
 * XREFs of PsGetCurrentProcess @ 0x140317770
 * Callers:
 *     KiLockExtendedServiceTable @ 0x1403E3878 (KiLockExtendedServiceTable.c)
 *     NtSetInformationProcess @ 0x140774540 (NtSetInformationProcess.c)
 *     PopPowerRequestStatsGetIdForRequest @ 0x1407A7D30 (PopPowerRequestStatsGetIdForRequest.c)
 *     PopPowerRequestStatsIsDetailedRequestReason @ 0x1407A7F50 (PopPowerRequestStatsIsDetailedRequestReason.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentProcess()
{
  return KeGetCurrentThread()->ApcState.Process;
}
