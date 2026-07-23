/*
 * XREFs of RtlCopySid @ 0x140715180
 * Callers:
 *     SeConvertStringSidToSid @ 0x14020BA20 (SeConvertStringSidToSid.c)
 *     SepCreateTokenEx @ 0x140229820 (SepCreateTokenEx.c)
 *     SepGetSidValuesDump @ 0x1405B90B8 (SepGetSidValuesDump.c)
 *     LocalGetAclForString @ 0x14069C8EC (LocalGetAclForString.c)
 *     SepDuplicateSid @ 0x140711224 (SepDuplicateSid.c)
 *     SepSetTokenPackage @ 0x140714F70 (SepSetTokenPackage.c)
 *     SeQueryUserSidToken @ 0x140715010 (SeQueryUserSidToken.c)
 *     RtlCopySidAndAttributesArray @ 0x1407150C0 (RtlCopySidAndAttributesArray.c)
 *     SeQueryInformationToken @ 0x1407198A0 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140730CC0 (NtQueryInformationToken.c)
 *     SepAdjustGroups @ 0x1407CAF6C (SepAdjustGroups.c)
 *     RtlAddMandatoryAce @ 0x1407F3140 (RtlAddMandatoryAce.c)
 *     SepGetLowBoxNumberEntry @ 0x1407F4B78 (SepGetLowBoxNumberEntry.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x1407F4D6C (SepAllocateAndInitializeCachedHandleEntry.c)
 *     PspAssignProcessQuotaBlock @ 0x1407F8738 (PspAssignProcessQuotaBlock.c)
 *     SeAuditProcessCreation @ 0x140840FC4 (SeAuditProcessCreation.c)
 *     SddlAddMandatoryAce @ 0x1408A6A82 (SddlAddMandatoryAce.c)
 *     RtlAddAccessFilterAce @ 0x1409BB0A0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1409BB3C0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409BB6F0 (RtlpAddKnownObjectAce.c)
 *     SepCreateSidValuesBlock @ 0x1409CF71C (SepCreateSidValuesBlock.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1409D19EC (SepInsertOrReferenceSharedSidEntries.c)
 *     SddlAddAccessFilterAce @ 0x1409D26E0 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1409D291C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1409D2A7C (SddlAddScopedPolicyIDAce.c)
 *     MiLoadHotPatchForUserSid @ 0x140A385A8 (MiLoadHotPatchForUserSid.c)
 *     MiQueryLoadedPatches @ 0x140A3B570 (MiQueryLoadedPatches.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
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
