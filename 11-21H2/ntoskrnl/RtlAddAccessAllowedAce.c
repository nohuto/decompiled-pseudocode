/*
 * XREFs of RtlAddAccessAllowedAce @ 0x14078ED30
 * Callers:
 *     RtlCheckTokenCapability @ 0x140201400 (RtlCheckTokenCapability.c)
 *     sub_140257C7C @ 0x140257C7C (sub_140257C7C.c)
 *     RtlCheckTokenMembershipEx @ 0x1402E0CA0 (RtlCheckTokenMembershipEx.c)
 *     sub_1403CE4A4 @ 0x1403CE4A4 (sub_1403CE4A4.c)
 *     sub_14062C598 @ 0x14062C598 (sub_14062C598.c)
 *     sub_14063BB90 @ 0x14063BB90 (sub_14063BB90.c)
 *     sub_14084AA8C @ 0x14084AA8C (sub_14084AA8C.c)
 *     sub_140A820BC @ 0x140A820BC (sub_140A820BC.c)
 *     sub_140B1E75C @ 0x140B1E75C (sub_140B1E75C.c)
 *     sub_140B1ED10 @ 0x140B1ED10 (sub_140B1ED10.c)
 *     sub_140B1EFA0 @ 0x140B1EFA0 (sub_140B1EFA0.c)
 *     sub_140B2114C @ 0x140B2114C (sub_140B2114C.c)
 *     sub_140B22DD4 @ 0x140B22DD4 (sub_140B22DD4.c)
 *     sub_140B28514 @ 0x140B28514 (sub_140B28514.c)
 *     sub_140B2940C @ 0x140B2940C (sub_140B2940C.c)
 *     sub_140B2984C @ 0x140B2984C (sub_140B2984C.c)
 *     sub_140B2A324 @ 0x140B2A324 (sub_140B2A324.c)
 *     sub_140B2B9FC @ 0x140B2B9FC (sub_140B2B9FC.c)
 *     sub_140B4F514 @ 0x140B4F514 (sub_140B4F514.c)
 * Callees:
 *     sub_1407B4900 @ 0x1407B4900 (sub_1407B4900.c)
 */

NTSTATUS __stdcall RtlAddAccessAllowedAce(PACL Acl, ULONG AceRevision, ACCESS_MASK AccessMask, PSID Sid)
{
  return sub_1407B4900((int)Acl, AceRevision, 0, AccessMask, Sid, 0);
}
