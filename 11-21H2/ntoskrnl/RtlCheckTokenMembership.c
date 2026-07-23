/*
 * XREFs of RtlCheckTokenMembership @ 0x1402E0C80
 * Callers:
 *     RtlCapabilityCheck @ 0x140660AF0 (RtlCapabilityCheck.c)
 *     sub_1406EB3FC @ 0x1406EB3FC (sub_1406EB3FC.c)
 *     sub_1406EBAD8 @ 0x1406EBAD8 (sub_1406EBAD8.c)
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 *     sub_1407F40A8 @ 0x1407F40A8 (sub_1407F40A8.c)
 *     sub_1409988BC @ 0x1409988BC (sub_1409988BC.c)
 *     sub_1409CD880 @ 0x1409CD880 (sub_1409CD880.c)
 *     sub_1409E1E64 @ 0x1409E1E64 (sub_1409E1E64.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x1402E0CA0 (RtlCheckTokenMembershipEx.c)
 */

NTSTATUS __cdecl RtlCheckTokenMembership(HANDLE TokenHandle, PSID SidToCheck, PBOOLEAN IsMember)
{
  return RtlCheckTokenMembershipEx(TokenHandle, SidToCheck, 0, IsMember);
}
