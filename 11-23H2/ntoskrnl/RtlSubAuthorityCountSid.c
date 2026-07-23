/*
 * XREFs of RtlSubAuthorityCountSid @ 0x140297D50
 * Callers:
 *     LookupSidInTable @ 0x1406C3690 (LookupSidInTable.c)
 *     SeQueryInformationToken @ 0x1407198A0 (SeQueryInformationToken.c)
 *     RtlIsElevatedRid @ 0x14071A1D0 (RtlIsElevatedRid.c)
 *     RtlpValidateSidBuffer @ 0x1407C93D8 (RtlpValidateSidBuffer.c)
 *     SeQueryMandatoryLabel @ 0x1407DD6B0 (SeQueryMandatoryLabel.c)
 *     NtSetInformationToken @ 0x1407EF750 (NtSetInformationToken.c)
 *     RtlGetAppContainerSidType @ 0x1407F4670 (RtlGetAppContainerSidType.c)
 *     RtlReplaceSidInSd @ 0x1409BC530 (RtlReplaceSidInSd.c)
 *     SepCheckCapabilities @ 0x1409CF45C (SepCheckCapabilities.c)
 * Callees:
 *     <none>
 */

PUCHAR __stdcall RtlSubAuthorityCountSid(PSID Sid)
{
  return (PUCHAR)Sid + 1;
}
