/*
 * XREFs of RtlCheckTokenMembership @ 0x140370230
 * Callers:
 *     NtSetSystemInformation @ 0x14075F020 (NtSetSystemInformation.c)
 *     PopIsRunningAsLocalSystem @ 0x1407EBD08 (PopIsRunningAsLocalSystem.c)
 *     ExpCheckIRTimerAccess @ 0x1407EBD34 (ExpCheckIRTimerAccess.c)
 *     PopValidateContextMembership @ 0x1407EBDEC (PopValidateContextMembership.c)
 *     RtlCapabilityCheck @ 0x1407ED020 (RtlCapabilityCheck.c)
 *     PopPowerInformationInternal @ 0x1407ED33C (PopPowerInformationInternal.c)
 *     PopNetUpdateStandbyRequest @ 0x140996BAC (PopNetUpdateStandbyRequest.c)
 *     NtFilterBootOption @ 0x1409D06F0 (NtFilterBootOption.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x1409E520C (EtwpUserInAdminOrLogUsersGroup.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x14031D480 (RtlCheckTokenMembershipEx.c)
 */

NTSTATUS __cdecl RtlCheckTokenMembership(HANDLE TokenHandle, PSID SidToCheck, PBOOLEAN IsMember)
{
  return RtlCheckTokenMembershipEx(TokenHandle, SidToCheck, 0, IsMember);
}
