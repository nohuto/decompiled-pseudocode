/*
 * XREFs of RtlValidSid @ 0x1407378A0
 * Callers:
 *     AdtpPackageParameters @ 0x140399314 (AdtpPackageParameters.c)
 *     SepValidateCAPIDs @ 0x1405B9A6C (SepValidateCAPIDs.c)
 *     SeCaptureSid @ 0x1406BB2CC (SeCaptureSid.c)
 *     SeCaptureSidAndAttributesArray @ 0x1406BCC50 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureSecurityDescriptor @ 0x140737050 (SeCaptureSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x1407B52C0 (RtlValidSecurityDescriptor.c)
 *     RtlpValidateSidBuffer @ 0x1407C9698 (RtlpValidateSidBuffer.c)
 *     NtManageHotPatch @ 0x1407D4470 (NtManageHotPatch.c)
 *     RtlAddMandatoryAce @ 0x1407F33F0 (RtlAddMandatoryAce.c)
 *     RtlLengthSidAsUnicodeString @ 0x1407FB288 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x1407FB3F0 (RtlConvertSidToUnicodeString.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14085A568 (_PnpGetEnumSecurityDescriptor.c)
 *     ExpInitFullProcessSecurityInfo @ 0x14085F8E0 (ExpInitFullProcessSecurityInfo.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14086F758 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140881244 (_PnpGetPropertiesSecurityDescriptor.c)
 *     SddlAddMandatoryAce @ 0x1408A6D12 (SddlAddMandatoryAce.c)
 *     IopCheckGetQuotaBufferValidity @ 0x140944600 (IopCheckGetQuotaBufferValidity.c)
 *     IoCheckQuotaBufferValidity @ 0x140946F90 (IoCheckQuotaBufferValidity.c)
 *     NtQueryQuotaInformationFile @ 0x14094B320 (NtQueryQuotaInformationFile.c)
 *     PiAuCheckClientInteractive @ 0x14095B700 (PiAuCheckClientInteractive.c)
 *     RtlAddAccessFilterAce @ 0x1409BAF50 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1409BB270 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409BB5A0 (RtlpAddKnownObjectAce.c)
 *     SepReadSingleCap @ 0x1409D2118 (SepReadSingleCap.c)
 *     SddlAddAccessFilterAce @ 0x1409D2590 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1409D27CC (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1409D292C (SddlAddScopedPolicyIDAce.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A6DA74 (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateUserSids @ 0x140B43B9C (PiAuCreateUserSids.c)
 *     PiAuCreateStandardSecurityObject @ 0x140B43DC0 (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlValidSid(PSID Sid)
{
  return (unsigned __int64)Sid > 0x7FFFFFFF0000LL && (*(_BYTE *)Sid & 0xF) == 1 && *((_BYTE *)Sid + 1) <= 0xFu;
}
