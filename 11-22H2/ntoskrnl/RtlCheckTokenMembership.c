/*
 * XREFs of RtlCheckTokenMembership @ 0x14036FA40
 * Callers:
 *     NtSetSystemInformation @ 0x14075F340 (NtSetSystemInformation.c)
 *     PopIsRunningAsLocalSystem @ 0x1407EBFB8 (PopIsRunningAsLocalSystem.c)
 *     ExpCheckIRTimerAccess @ 0x1407EBFE4 (ExpCheckIRTimerAccess.c)
 *     PopValidateContextMembership @ 0x1407EC09C (PopValidateContextMembership.c)
 *     RtlCapabilityCheck @ 0x1407ED2D0 (RtlCapabilityCheck.c)
 *     PopPowerInformationInternal @ 0x1407ED5EC (PopPowerInformationInternal.c)
 *     PopNetUpdateStandbyRequest @ 0x140996A5C (PopNetUpdateStandbyRequest.c)
 *     NtFilterBootOption @ 0x1409D05A0 (NtFilterBootOption.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x1409E502C (EtwpUserInAdminOrLogUsersGroup.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x14031D010 (RtlCheckTokenMembershipEx.c)
 */

NTSTATUS __cdecl RtlCheckTokenMembership(HANDLE TokenHandle, PSID SidToCheck, PBOOLEAN IsMember)
{
  return RtlCheckTokenMembershipEx(TokenHandle, SidToCheck, 0, IsMember);
}
