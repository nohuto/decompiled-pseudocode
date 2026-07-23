/*
 * XREFs of RtlInitializeSid @ 0x180012E40
 * Callers:
 *     RtlDefaultNpAcl @ 0x1800019D0 (RtlDefaultNpAcl.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x18000B5C8 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlCreateServiceSid @ 0x1800100C0 (RtlCreateServiceSid.c)
 *     RtlpOwnerAcesPresent @ 0x1800104FC (RtlpOwnerAcesPresent.c)
 *     RtlpCompareKnownAces @ 0x18001075C (RtlpCompareKnownAces.c)
 *     RtlCapabilityCheck @ 0x180011760 (RtlCapabilityCheck.c)
 *     RtlInitializeSidEx @ 0x180012DE0 (RtlInitializeSidEx.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18002ACE0 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlpSetSecurityObject @ 0x18007A4E8 (RtlpSetSecurityObject.c)
 *     RtlCreateVirtualAccountSid @ 0x180086370 (RtlCreateVirtualAccountSid.c)
 *     WerpAllocateAndInitializeSid @ 0x1800E8EAC (WerpAllocateAndInitializeSid.c)
 *     RtlGetAppContainerParent @ 0x1800F2380 (RtlGetAppContainerParent.c)
 *     RtlpCompareKnownObjectAces @ 0x1800F3040 (RtlpCompareKnownObjectAces.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800F3290 (RtlpConvertAclToAutoInherit.c)
 *     RtlpValidLabelSubjectContext @ 0x1800F488C (RtlpValidLabelSubjectContext.c)
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
