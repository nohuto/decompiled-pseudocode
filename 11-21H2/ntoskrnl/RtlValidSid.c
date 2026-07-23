/*
 * XREFs of RtlValidSid @ 0x1407B4660
 * Callers:
 *     sub_1403CC5E8 @ 0x1403CC5E8 (sub_1403CC5E8.c)
 *     sub_1405F5E3C @ 0x1405F5E3C (sub_1405F5E3C.c)
 *     sub_14066846C @ 0x14066846C (sub_14066846C.c)
 *     RtlConvertSidToUnicodeString @ 0x140669DD0 (RtlConvertSidToUnicodeString.c)
 *     sub_14066B6D8 @ 0x14066B6D8 (sub_14066B6D8.c)
 *     sub_1406C1188 @ 0x1406C1188 (sub_1406C1188.c)
 *     sub_1406C9390 @ 0x1406C9390 (sub_1406C9390.c)
 *     RtlAddMandatoryAce @ 0x1406CCC10 (RtlAddMandatoryAce.c)
 *     RtlValidSecurityDescriptor @ 0x140726610 (RtlValidSecurityDescriptor.c)
 *     sub_140726700 @ 0x140726700 (sub_140726700.c)
 *     sub_1407438D8 @ 0x1407438D8 (sub_1407438D8.c)
 *     sub_140743C8C @ 0x140743C8C (sub_140743C8C.c)
 *     sub_140799DB0 @ 0x140799DB0 (sub_140799DB0.c)
 *     SeCaptureSecurityDescriptor @ 0x1407B3DD0 (SeCaptureSecurityDescriptor.c)
 *     RtlAddProcessTrustLabelAce @ 0x140848A40 (RtlAddProcessTrustLabelAce.c)
 *     sub_14085C290 @ 0x14085C290 (sub_14085C290.c)
 *     sub_14085F700 @ 0x14085F700 (sub_14085F700.c)
 *     sub_140882C7A @ 0x140882C7A (sub_140882C7A.c)
 *     sub_140933E58 @ 0x140933E58 (sub_140933E58.c)
 *     IoCheckQuotaBufferValidity @ 0x1409360F0 (IoCheckQuotaBufferValidity.c)
 *     NtQueryQuotaInformationFile @ 0x140939960 (NtQueryQuotaInformationFile.c)
 *     sub_140949890 @ 0x140949890 (sub_140949890.c)
 *     RtlAddAccessFilterAce @ 0x1409B7E50 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1409B8170 (RtlAddResourceAttributeAce.c)
 *     sub_1409B84A4 @ 0x1409B84A4 (sub_1409B84A4.c)
 *     sub_1409CF5C8 @ 0x1409CF5C8 (sub_1409CF5C8.c)
 *     sub_1409CF980 @ 0x1409CF980 (sub_1409CF980.c)
 *     sub_1409CFB98 @ 0x1409CFB98 (sub_1409CFB98.c)
 *     sub_1409CFCF8 @ 0x1409CFCF8 (sub_1409CFCF8.c)
 *     sub_140A305C4 @ 0x140A305C4 (sub_140A305C4.c)
 *     sub_140B223B4 @ 0x140B223B4 (sub_140B223B4.c)
 *     sub_140B225D8 @ 0x140B225D8 (sub_140B225D8.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlValidSid(PSID Sid)
{
  BOOLEAN result; // al

  if ( (unsigned __int64)Sid <= 0x7FFFFFFF0000LL )
    return 0;
  result = *(_BYTE *)Sid & 0xF;
  if ( result != 1 || *((_BYTE *)Sid + 1) > 0xFu )
    return 0;
  return result;
}
