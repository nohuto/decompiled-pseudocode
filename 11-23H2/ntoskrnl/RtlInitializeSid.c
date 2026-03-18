/*
 * XREFs of RtlInitializeSid @ 0x140782050
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x14031D070 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlInitializeSidEx @ 0x140368850 (RtlInitializeSidEx.c)
 *     WdipAccessCheck @ 0x1405FB808 (WdipAccessCheck.c)
 *     RtlpSetSecurityObject @ 0x14072BD70 (RtlpSetSecurityObject.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1407C8B08 (ObpVerifyCreatorAccessCheck.c)
 *     RtlCapabilityCheck @ 0x1407ECD50 (RtlCapabilityCheck.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x1407EEF20 (RtlpCapabilityCheckSystemCapability.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14080090C (PopCreateHiberFileSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14080B888 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14080C110 (CmpHiveRootSecurityDescriptor.c)
 *     PiAuAllocateAndInitializeSid @ 0x1408134B0 (PiAuAllocateAndInitializeSid.c)
 *     InitializeSidLookupTable @ 0x140823030 (InitializeSidLookupTable.c)
 *     NtSetUuidSeed @ 0x140850810 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x140859D98 (_PnpGetEnumSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14086F288 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140880D74 (_PnpGetPropertiesSecurityDescriptor.c)
 *     PiAuCheckClientInteractive @ 0x14095B650 (PiAuCheckClientInteractive.c)
 *     RtlGetAppContainerParent @ 0x1409BC070 (RtlGetAppContainerParent.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1409DA14C (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1409FC7E4 (ExpFirmwareAccessAppContainerCheck.c)
 *     CMFCreateSecurityDescriptor @ 0x140A01B4C (CMFCreateSecurityDescriptor.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A6A3BC (_SysCtxRegOpenCurrentUserKey.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A6DA04 (DrvDbGetSecurityDescriptor.c)
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
  *(struct _SID_IDENTIFIER_AUTHORITY *)((char *)Sid + 2) = *IdentifierAuthority;
  return 0;
}
