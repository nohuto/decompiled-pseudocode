/*
 * XREFs of RtlValidSid @ 0x1407373A0
 * Callers:
 *     AdtpPackageParameters @ 0x140399604 (AdtpPackageParameters.c)
 *     SepValidateCAPIDs @ 0x1405B99DC (SepValidateCAPIDs.c)
 *     SeCaptureSid @ 0x1406BB2CC (SeCaptureSid.c)
 *     SeCaptureSidAndAttributesArray @ 0x1406BCC50 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureSecurityDescriptor @ 0x140736B50 (SeCaptureSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x1407B4D10 (RtlValidSecurityDescriptor.c)
 *     RtlpValidateSidBuffer @ 0x1407C9108 (RtlpValidateSidBuffer.c)
 *     NtManageHotPatch @ 0x1407D3EF0 (NtManageHotPatch.c)
 *     RtlAddMandatoryAce @ 0x1407F2E70 (RtlAddMandatoryAce.c)
 *     RtlLengthSidAsUnicodeString @ 0x1407FABD8 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x1407FAD40 (RtlConvertSidToUnicodeString.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x140859D98 (_PnpGetEnumSecurityDescriptor.c)
 *     ExpInitFullProcessSecurityInfo @ 0x14085F780 (ExpInitFullProcessSecurityInfo.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14086F288 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140880D74 (_PnpGetPropertiesSecurityDescriptor.c)
 *     SddlAddMandatoryAce @ 0x1408A6832 (SddlAddMandatoryAce.c)
 *     IopCheckGetQuotaBufferValidity @ 0x140944550 (IopCheckGetQuotaBufferValidity.c)
 *     IoCheckQuotaBufferValidity @ 0x140946EE0 (IoCheckQuotaBufferValidity.c)
 *     NtQueryQuotaInformationFile @ 0x14094B270 (NtQueryQuotaInformationFile.c)
 *     PiAuCheckClientInteractive @ 0x14095B650 (PiAuCheckClientInteractive.c)
 *     RtlAddAccessFilterAce @ 0x1409BAEA0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1409BB1C0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409BB4F0 (RtlpAddKnownObjectAce.c)
 *     SepReadSingleCap @ 0x1409D2068 (SepReadSingleCap.c)
 *     SddlAddAccessFilterAce @ 0x1409D24E0 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1409D271C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1409D287C (SddlAddScopedPolicyIDAce.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A6DA04 (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateUserSids @ 0x140B4049C (PiAuCreateUserSids.c)
 *     PiAuCreateStandardSecurityObject @ 0x140B406C0 (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlValidSid(PSID Sid)
{
  return (unsigned __int64)Sid > 0x7FFFFFFF0000LL && (*(_BYTE *)Sid & 0xF) == 1 && *((_BYTE *)Sid + 1) <= 0xFu;
}
