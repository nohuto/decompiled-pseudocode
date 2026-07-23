/*
 * XREFs of RtlValidSid @ 0x140737590
 * Callers:
 *     AdtpPackageParameters @ 0x1403997E4 (AdtpPackageParameters.c)
 *     SepValidateCAPIDs @ 0x1405B9F4C (SepValidateCAPIDs.c)
 *     SeCaptureSid @ 0x1406BB2FC (SeCaptureSid.c)
 *     SeCaptureSidAndAttributesArray @ 0x1406BCC80 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureSecurityDescriptor @ 0x140736D40 (SeCaptureSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x1407B4FF0 (RtlValidSecurityDescriptor.c)
 *     RtlpValidateSidBuffer @ 0x1407C93D8 (RtlpValidateSidBuffer.c)
 *     NtManageHotPatch @ 0x1407D41C0 (NtManageHotPatch.c)
 *     RtlAddMandatoryAce @ 0x1407F3140 (RtlAddMandatoryAce.c)
 *     RtlLengthSidAsUnicodeString @ 0x1407FAEA8 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x1407FB010 (RtlConvertSidToUnicodeString.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x140859FD8 (_PnpGetEnumSecurityDescriptor.c)
 *     ExpInitFullProcessSecurityInfo @ 0x14085F9C0 (ExpInitFullProcessSecurityInfo.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14086F4C8 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140880FB4 (_PnpGetPropertiesSecurityDescriptor.c)
 *     SddlAddMandatoryAce @ 0x1408A6A82 (SddlAddMandatoryAce.c)
 *     IopCheckGetQuotaBufferValidity @ 0x140944750 (IopCheckGetQuotaBufferValidity.c)
 *     IoCheckQuotaBufferValidity @ 0x1409470E0 (IoCheckQuotaBufferValidity.c)
 *     NtQueryQuotaInformationFile @ 0x14094B470 (NtQueryQuotaInformationFile.c)
 *     PiAuCheckClientInteractive @ 0x14095B850 (PiAuCheckClientInteractive.c)
 *     RtlAddAccessFilterAce @ 0x1409BB0A0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1409BB3C0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409BB6F0 (RtlpAddKnownObjectAce.c)
 *     SepReadSingleCap @ 0x1409D2268 (SepReadSingleCap.c)
 *     SddlAddAccessFilterAce @ 0x1409D26E0 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1409D291C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1409D2A7C (SddlAddScopedPolicyIDAce.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A6DCB4 (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateUserSids @ 0x140B4049C (PiAuCreateUserSids.c)
 *     PiAuCreateStandardSecurityObject @ 0x140B406C0 (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlValidSid(PSID Sid)
{
  return (unsigned __int64)Sid > 0x7FFFFFFF0000LL && (*(_BYTE *)Sid & 0xF) == 1 && *((_BYTE *)Sid + 1) <= 0xFu;
}
