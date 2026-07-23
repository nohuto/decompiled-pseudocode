/*
 * XREFs of PsGetCurrentProcess @ 0x140317A00
 * Callers:
 *     KiLockExtendedServiceTable @ 0x1403E3A58 (KiLockExtendedServiceTable.c)
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 *     PopPowerRequestStatsGetIdForRequest @ 0x1407A7F20 (PopPowerRequestStatsGetIdForRequest.c)
 *     PopPowerRequestStatsIsDetailedRequestReason @ 0x1407A8140 (PopPowerRequestStatsIsDetailedRequestReason.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentProcess()
{
  return KeGetCurrentThread()->ApcState.Process;
}
