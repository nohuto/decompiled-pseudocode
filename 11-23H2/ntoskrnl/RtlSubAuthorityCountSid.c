/*
 * XREFs of RtlSubAuthorityCountSid @ 0x140297AC0
 * Callers:
 *     LookupSidInTable @ 0x1406C3660 (LookupSidInTable.c)
 *     SeQueryInformationToken @ 0x1407196A0 (SeQueryInformationToken.c)
 *     RtlIsElevatedRid @ 0x140719FD0 (RtlIsElevatedRid.c)
 *     RtlpValidateSidBuffer @ 0x1407C9108 (RtlpValidateSidBuffer.c)
 *     SeQueryMandatoryLabel @ 0x1407DD3E0 (SeQueryMandatoryLabel.c)
 *     NtSetInformationToken @ 0x1407EF480 (NtSetInformationToken.c)
 *     RtlGetAppContainerSidType @ 0x1407F43A0 (RtlGetAppContainerSidType.c)
 *     RtlReplaceSidInSd @ 0x1409BC330 (RtlReplaceSidInSd.c)
 *     SepCheckCapabilities @ 0x1409CF25C (SepCheckCapabilities.c)
 * Callees:
 *     <none>
 */

PUCHAR __stdcall RtlSubAuthorityCountSid(PSID Sid)
{
  return (PUCHAR)Sid + 1;
}
