/*
 * XREFs of RtlValidSid @ 0x18001B130
 * Callers:
 *     RtlpAddKnownAce @ 0x18001AA04 (RtlpAddKnownAce.c)
 *     RtlLengthSidAsUnicodeString @ 0x18001AD10 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x18001AD70 (RtlConvertSidToUnicodeString.c)
 *     EvtIntReportEventWorker @ 0x1800531D0 (EvtIntReportEventWorker.c)
 *     RtlAddProcessTrustLabelAce @ 0x1800685E0 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddMandatoryAce @ 0x180069070 (RtlAddMandatoryAce.c)
 *     RtlValidSecurityDescriptor @ 0x180071880 (RtlValidSecurityDescriptor.c)
 *     RtlpSetSecurityObject @ 0x18007A4E8 (RtlpSetSecurityObject.c)
 *     RtlpValidateSidBuffer @ 0x180083260 (RtlpValidateSidBuffer.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x180084160 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlAddAccessFilterAce @ 0x1800F5200 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800F5480 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800F55F0 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800F5940 (RtlAddScopedPolicyIDAce.c)
 *     RtlpAddKnownObjectAce @ 0x1800F5C00 (RtlpAddKnownObjectAce.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlValidSid(PSID Sid)
{
  return Sid && (*(_BYTE *)Sid & 0xF) == 1 && *((_BYTE *)Sid + 1) <= 0xFu;
}
