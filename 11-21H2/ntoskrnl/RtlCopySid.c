/*
 * XREFs of RtlCopySid @ 0x14066A4E0
 * Callers:
 *     sub_1402022FC @ 0x1402022FC (sub_1402022FC.c)
 *     SeConvertStringSidToSid @ 0x1403CBD40 (SeConvertStringSidToSid.c)
 *     sub_1405F4B60 @ 0x1405F4B60 (sub_1405F4B60.c)
 *     sub_140662AC8 @ 0x140662AC8 (sub_140662AC8.c)
 *     sub_14066A17C @ 0x14066A17C (sub_14066A17C.c)
 *     sub_14066A374 @ 0x14066A374 (sub_14066A374.c)
 *     RtlCopySidAndAttributesArray @ 0x14066A420 (RtlCopySidAndAttributesArray.c)
 *     sub_14066B730 @ 0x14066B730 (sub_14066B730.c)
 *     sub_140675DA8 @ 0x140675DA8 (sub_140675DA8.c)
 *     sub_140696750 @ 0x140696750 (sub_140696750.c)
 *     sub_140696E04 @ 0x140696E04 (sub_140696E04.c)
 *     sub_1406C86A0 @ 0x1406C86A0 (sub_1406C86A0.c)
 *     RtlAddMandatoryAce @ 0x1406CCC10 (RtlAddMandatoryAce.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x1407B13E0 (NtQueryInformationToken.c)
 *     sub_140847BB4 @ 0x140847BB4 (sub_140847BB4.c)
 *     RtlAddProcessTrustLabelAce @ 0x140848A40 (RtlAddProcessTrustLabelAce.c)
 *     sub_140882C7A @ 0x140882C7A (sub_140882C7A.c)
 *     sub_1409743A4 @ 0x1409743A4 (sub_1409743A4.c)
 *     sub_140976F90 @ 0x140976F90 (sub_140976F90.c)
 *     RtlAddAccessFilterAce @ 0x1409B7E50 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1409B8170 (RtlAddResourceAttributeAce.c)
 *     sub_1409B84A4 @ 0x1409B84A4 (sub_1409B84A4.c)
 *     sub_1409CCA34 @ 0x1409CCA34 (sub_1409CCA34.c)
 *     sub_1409CED4C @ 0x1409CED4C (sub_1409CED4C.c)
 *     sub_1409CF980 @ 0x1409CF980 (sub_1409CF980.c)
 *     sub_1409CFB98 @ 0x1409CFB98 (sub_1409CFB98.c)
 *     sub_1409CFCF8 @ 0x1409CFCF8 (sub_1409CFCF8.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

NTSTATUS __stdcall RtlCopySid(ULONG DestinationSidLength, PSID DestinationSid, PSID SourceSid)
{
  ULONG v3; // eax

  v3 = 4 * *((unsigned __int8 *)SourceSid + 1) + 8;
  if ( v3 > DestinationSidLength )
    return -1073741789;
  memmove(DestinationSid, SourceSid, v3);
  return 0;
}
