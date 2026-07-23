/*
 * XREFs of RtlSubAuthorityCountSid @ 0x1402EF420
 * Callers:
 *     sub_1406775C8 @ 0x1406775C8 (sub_1406775C8.c)
 *     RtlGetAppContainerSidType @ 0x140696D90 (RtlGetAppContainerSidType.c)
 *     sub_1406C1188 @ 0x1406C1188 (sub_1406C1188.c)
 *     sub_1406C9990 @ 0x1406C9990 (sub_1406C9990.c)
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     RtlIsElevatedRid @ 0x14079FAF0 (RtlIsElevatedRid.c)
 *     RtlReplaceSidInSd @ 0x1409B92B0 (RtlReplaceSidInSd.c)
 *     sub_1409CC77C @ 0x1409CC77C (sub_1409CC77C.c)
 * Callees:
 *     <none>
 */

PUCHAR __stdcall RtlSubAuthorityCountSid(PSID Sid)
{
  return (PUCHAR)Sid + 1;
}
