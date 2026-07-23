/*
 * XREFs of RtlCopySid @ 0x1800691F0
 * Callers:
 *     RtlAddProcessTrustLabelAce @ 0x1800685E0 (RtlAddProcessTrustLabelAce.c)
 *     RtlCreateAndSetSD @ 0x180068770 (RtlCreateAndSetSD.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x180068DF8 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlAddMandatoryAce @ 0x180069070 (RtlAddMandatoryAce.c)
 *     RtlCopySidAndAttributesArray @ 0x1800F22A0 (RtlCopySidAndAttributesArray.c)
 *     RtlAddAccessFilterAce @ 0x1800F5200 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800F5480 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800F55F0 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800F5940 (RtlAddScopedPolicyIDAce.c)
 *     RtlpAddKnownObjectAce @ 0x1800F5C00 (RtlpAddKnownObjectAce.c)
 * Callees:
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

NTSTATUS __cdecl RtlCopySid(ULONG DestinationSidLength, PSID DestinationSid, PSID SourceSid)
{
  ULONG v3; // eax

  v3 = 4 * *((unsigned __int8 *)SourceSid + 1) + 8;
  if ( v3 > DestinationSidLength )
    return -1073741789;
  memmove(DestinationSid, SourceSid, v3);
  return 0;
}
