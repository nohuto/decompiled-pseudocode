/*
 * XREFs of RtlCopySid @ 0x140714F70
 * Callers:
 *     SeConvertStringSidToSid @ 0x14020BA20 (SeConvertStringSidToSid.c)
 *     SepCreateTokenEx @ 0x140229710 (SepCreateTokenEx.c)
 *     SepGetSidValuesDump @ 0x1405B8B48 (SepGetSidValuesDump.c)
 *     LocalGetAclForString @ 0x14069C8EC (LocalGetAclForString.c)
 *     SepDuplicateSid @ 0x140711014 (SepDuplicateSid.c)
 *     SepSetTokenPackage @ 0x140714D60 (SepSetTokenPackage.c)
 *     SeQueryUserSidToken @ 0x140714E00 (SeQueryUserSidToken.c)
 *     RtlCopySidAndAttributesArray @ 0x140714EB0 (RtlCopySidAndAttributesArray.c)
 *     SeQueryInformationToken @ 0x1407196A0 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140730AD0 (NtQueryInformationToken.c)
 *     SepAdjustGroups @ 0x1407CAC9C (SepAdjustGroups.c)
 *     RtlAddMandatoryAce @ 0x1407F2E70 (RtlAddMandatoryAce.c)
 *     SepGetLowBoxNumberEntry @ 0x1407F48A8 (SepGetLowBoxNumberEntry.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x1407F4A9C (SepAllocateAndInitializeCachedHandleEntry.c)
 *     PspAssignProcessQuotaBlock @ 0x1407F8468 (PspAssignProcessQuotaBlock.c)
 *     SeAuditProcessCreation @ 0x140840CC4 (SeAuditProcessCreation.c)
 *     SddlAddMandatoryAce @ 0x1408A6832 (SddlAddMandatoryAce.c)
 *     RtlAddAccessFilterAce @ 0x1409BAEA0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1409BB1C0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409BB4F0 (RtlpAddKnownObjectAce.c)
 *     SepCreateSidValuesBlock @ 0x1409CF51C (SepCreateSidValuesBlock.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1409D17EC (SepInsertOrReferenceSharedSidEntries.c)
 *     SddlAddAccessFilterAce @ 0x1409D24E0 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1409D271C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1409D287C (SddlAddScopedPolicyIDAce.c)
 *     MiLoadHotPatchForUserSid @ 0x140A382F8 (MiLoadHotPatchForUserSid.c)
 *     MiQueryLoadedPatches @ 0x140A3B2C0 (MiQueryLoadedPatches.c)
 * Callees:
 *     memmove @ 0x140435700 (memmove.c)
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
