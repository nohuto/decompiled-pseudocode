/*
 * XREFs of RtlCheckTokenMembership @ 0x140370090
 * Callers:
 *     NtSetSystemInformation @ 0x14075EE30 (NtSetSystemInformation.c)
 *     PopIsRunningAsLocalSystem @ 0x1407EBA38 (PopIsRunningAsLocalSystem.c)
 *     ExpCheckIRTimerAccess @ 0x1407EBA64 (ExpCheckIRTimerAccess.c)
 *     PopValidateContextMembership @ 0x1407EBB1C (PopValidateContextMembership.c)
 *     RtlCapabilityCheck @ 0x1407ECD50 (RtlCapabilityCheck.c)
 *     PopPowerInformationInternal @ 0x1407ED06C (PopPowerInformationInternal.c)
 *     PopNetUpdateStandbyRequest @ 0x1409969AC (PopNetUpdateStandbyRequest.c)
 *     NtFilterBootOption @ 0x1409D04F0 (NtFilterBootOption.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x1409E4F7C (EtwpUserInAdminOrLogUsersGroup.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x14031D1F0 (RtlCheckTokenMembershipEx.c)
 */

__int64 __fastcall RtlCheckTokenMembership(void *a1, void *a2, _BYTE *a3)
{
  return RtlCheckTokenMembershipEx(a1, a2, 0, a3);
}
