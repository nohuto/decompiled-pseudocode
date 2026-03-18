/*
 * XREFs of RtlSubAuthoritySid @ 0x140297AD0
 * Callers:
 *     LookupSidInTable @ 0x1406C3660 (LookupSidInTable.c)
 *     SeQueryInformationToken @ 0x1407196A0 (SeQueryInformationToken.c)
 *     RtlIsElevatedRid @ 0x140719FD0 (RtlIsElevatedRid.c)
 *     RtlpNewSecurityObject @ 0x14072A400 (RtlpNewSecurityObject.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1407C8B08 (ObpVerifyCreatorAccessCheck.c)
 *     SeQueryMandatoryLabel @ 0x1407DD3E0 (SeQueryMandatoryLabel.c)
 *     RtlCapabilityCheck @ 0x1407ECD50 (RtlCapabilityCheck.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x1407EEF20 (RtlpCapabilityCheckSystemCapability.c)
 *     NtSetInformationToken @ 0x1407EF480 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x1407F2540 (NtCreateLowBoxToken.c)
 *     SepValidateReferencedCachedHandles @ 0x1407F4B60 (SepValidateReferencedCachedHandles.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14080090C (PopCreateHiberFileSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14080B888 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14080C110 (CmpHiveRootSecurityDescriptor.c)
 *     InitializeSidLookupTable @ 0x140823030 (InitializeSidLookupTable.c)
 *     NtSetUuidSeed @ 0x140850810 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x140859D98 (_PnpGetEnumSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14086F288 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140880D74 (_PnpGetPropertiesSecurityDescriptor.c)
 *     PiAuCheckClientInteractive @ 0x14095B650 (PiAuCheckClientInteractive.c)
 *     RtlGetAppContainerParent @ 0x1409BC070 (RtlGetAppContainerParent.c)
 *     RtlIsParentOfChildAppContainer @ 0x1409BC298 (RtlIsParentOfChildAppContainer.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409BCBCC (RtlpGetTokenNamedObjectPath.c)
 *     SepCheckCapabilities @ 0x1409CF25C (SepCheckCapabilities.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1409DA14C (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1409FC7E4 (ExpFirmwareAccessAppContainerCheck.c)
 *     CMFCreateSecurityDescriptor @ 0x140A01B4C (CMFCreateSecurityDescriptor.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A6A3BC (_SysCtxRegOpenCurrentUserKey.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A6DA04 (DrvDbGetSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

PULONG __stdcall RtlSubAuthoritySid(PSID Sid, ULONG SubAuthority)
{
  return (PULONG)((char *)Sid + 4 * SubAuthority + 8);
}
