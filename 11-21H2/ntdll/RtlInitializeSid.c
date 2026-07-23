/*
 * XREFs of RtlInitializeSid @ 0x1800128B0
 * Callers:
 *     RtlDefaultNpAcl @ 0x180001CB0 (RtlDefaultNpAcl.c)
 *     RtlCreateVirtualAccountSid @ 0x18000BD90 (RtlCreateVirtualAccountSid.c)
 *     RtlpSetSecurityObject @ 0x18000E648 (RtlpSetSecurityObject.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x18000EC7C (RtlpCapabilityCheckSystemCapability.c)
 *     RtlCreateServiceSid @ 0x18000F3F0 (RtlCreateServiceSid.c)
 *     RtlpOwnerAcesPresent @ 0x1800121E8 (RtlpOwnerAcesPresent.c)
 *     RtlpCompareKnownAces @ 0x180012450 (RtlpCompareKnownAces.c)
 *     RtlCapabilityCheck @ 0x180012560 (RtlCapabilityCheck.c)
 *     RtlInitializeSidEx @ 0x180012850 (RtlInitializeSidEx.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18004A1A0 (RtlDeriveCapabilitySidsFromName.c)
 *     WerpAllocateAndInitializeSid @ 0x1800E8CEC (WerpAllocateAndInitializeSid.c)
 *     RtlGetAppContainerParent @ 0x1800F1370 (RtlGetAppContainerParent.c)
 *     RtlpCompareKnownObjectAces @ 0x1800F21E0 (RtlpCompareKnownObjectAces.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800F2438 (RtlpConvertAclToAutoInherit.c)
 *     RtlpValidLabelSubjectContext @ 0x1800F3758 (RtlpValidLabelSubjectContext.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlInitializeSid(PSID Sid, PSID_IDENTIFIER_AUTHORITY IdentifierAuthority, UCHAR SubAuthorityCount)
{
  if ( SubAuthorityCount > 0xFu )
    return -1073741811;
  *((_BYTE *)Sid + 1) = SubAuthorityCount;
  *(_BYTE *)Sid = 1;
  *(_SID_IDENTIFIER_AUTHORITY *)((char *)Sid + 2) = *IdentifierAuthority;
  return 0;
}
