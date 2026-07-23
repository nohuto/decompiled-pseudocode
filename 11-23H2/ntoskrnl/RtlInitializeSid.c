/*
 * XREFs of RtlInitializeSid @ 0x140782240
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x14031D300 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlInitializeSidEx @ 0x1403689F0 (RtlInitializeSidEx.c)
 *     WdipAccessCheck @ 0x1405FBD78 (WdipAccessCheck.c)
 *     RtlpSetSecurityObject @ 0x14072BF70 (RtlpSetSecurityObject.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1407C8DD8 (ObpVerifyCreatorAccessCheck.c)
 *     RtlCapabilityCheck @ 0x1407ED020 (RtlCapabilityCheck.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x1407EF1F0 (RtlpCapabilityCheckSystemCapability.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140800BDC (PopCreateHiberFileSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14080BB58 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14080C3E0 (CmpHiveRootSecurityDescriptor.c)
 *     PiAuAllocateAndInitializeSid @ 0x140813780 (PiAuAllocateAndInitializeSid.c)
 *     InitializeSidLookupTable @ 0x140823330 (InitializeSidLookupTable.c)
 *     NtSetUuidSeed @ 0x140850B10 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x140859FD8 (_PnpGetEnumSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14086F4C8 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140880FB4 (_PnpGetPropertiesSecurityDescriptor.c)
 *     PiAuCheckClientInteractive @ 0x14095B850 (PiAuCheckClientInteractive.c)
 *     RtlGetAppContainerParent @ 0x1409BC270 (RtlGetAppContainerParent.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1409DA34C (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1409FCA74 (ExpFirmwareAccessAppContainerCheck.c)
 *     CMFCreateSecurityDescriptor @ 0x140A01DDC (CMFCreateSecurityDescriptor.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A6A66C (_SysCtxRegOpenCurrentUserKey.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A6DCB4 (DrvDbGetSecurityDescriptor.c)
 *     PopCreateTimebrokerServiceSid @ 0x140B4EE5C (PopCreateTimebrokerServiceSid.c)
 *     PopNetInitialize @ 0x140B51D9C (PopNetInitialize.c)
 *     SepVariableInitialization @ 0x140B62268 (SepVariableInitialization.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140B6B05C (PspInitializeCpuPartitionsDefaultSd.c)
 *     IopCreateUmdfDirectory @ 0x140B6CB68 (IopCreateUmdfDirectory.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140B726F4 (CmpInitializeTrustedInstallerSid.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlInitializeSid(PSID Sid, PSID_IDENTIFIER_AUTHORITY IdentifierAuthority, UCHAR SubAuthorityCount)
{
  if ( SubAuthorityCount > 0xFu )
    return -1073741811;
  *((_BYTE *)Sid + 1) = SubAuthorityCount;
  *(_BYTE *)Sid = 1;
  *(_SID_IDENTIFIER_AUTHORITY *)((char *)Sid + 2) = *IdentifierAuthority;
  return 0;
}
