/*
 * XREFs of RtlSubAuthoritySid @ 0x140297D60
 * Callers:
 *     LookupSidInTable @ 0x1406C3690 (LookupSidInTable.c)
 *     SeQueryInformationToken @ 0x1407198A0 (SeQueryInformationToken.c)
 *     RtlIsElevatedRid @ 0x14071A1D0 (RtlIsElevatedRid.c)
 *     RtlpNewSecurityObject @ 0x14072A600 (RtlpNewSecurityObject.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1407C8DD8 (ObpVerifyCreatorAccessCheck.c)
 *     SeQueryMandatoryLabel @ 0x1407DD6B0 (SeQueryMandatoryLabel.c)
 *     RtlCapabilityCheck @ 0x1407ED020 (RtlCapabilityCheck.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x1407EF1F0 (RtlpCapabilityCheckSystemCapability.c)
 *     NtSetInformationToken @ 0x1407EF750 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x1407F2810 (NtCreateLowBoxToken.c)
 *     SepValidateReferencedCachedHandles @ 0x1407F4E30 (SepValidateReferencedCachedHandles.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140800BDC (PopCreateHiberFileSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14080BB58 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14080C3E0 (CmpHiveRootSecurityDescriptor.c)
 *     InitializeSidLookupTable @ 0x140823330 (InitializeSidLookupTable.c)
 *     NtSetUuidSeed @ 0x140850B10 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x140859FD8 (_PnpGetEnumSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14086F4C8 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140880FB4 (_PnpGetPropertiesSecurityDescriptor.c)
 *     PiAuCheckClientInteractive @ 0x14095B850 (PiAuCheckClientInteractive.c)
 *     RtlGetAppContainerParent @ 0x1409BC270 (RtlGetAppContainerParent.c)
 *     RtlIsParentOfChildAppContainer @ 0x1409BC498 (RtlIsParentOfChildAppContainer.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409BCDCC (RtlpGetTokenNamedObjectPath.c)
 *     SepCheckCapabilities @ 0x1409CF45C (SepCheckCapabilities.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1409DA34C (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1409FCA74 (ExpFirmwareAccessAppContainerCheck.c)
 *     CMFCreateSecurityDescriptor @ 0x140A01DDC (CMFCreateSecurityDescriptor.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A6A66C (_SysCtxRegOpenCurrentUserKey.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A6DCB4 (DrvDbGetSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

PULONG __stdcall RtlSubAuthoritySid(PSID Sid, ULONG SubAuthority)
{
  return (PULONG)((char *)Sid + 4 * SubAuthority + 8);
}
