/*
 * XREFs of RtlInitializeSid @ 0x180013050
 * Callers:
 *     RtlDefaultNpAcl @ 0x1800019A0 (RtlDefaultNpAcl.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x18000B7E8 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlCreateServiceSid @ 0x1800102D0 (RtlCreateServiceSid.c)
 *     RtlpOwnerAcesPresent @ 0x18001070C (RtlpOwnerAcesPresent.c)
 *     RtlpCompareKnownAces @ 0x18001096C (RtlpCompareKnownAces.c)
 *     RtlCapabilityCheck @ 0x180011970 (RtlCapabilityCheck.c)
 *     RtlInitializeSidEx @ 0x180012FF0 (RtlInitializeSidEx.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18002AEB0 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlpSetSecurityObject @ 0x180079E78 (RtlpSetSecurityObject.c)
 *     RtlCreateVirtualAccountSid @ 0x180085B70 (RtlCreateVirtualAccountSid.c)
 *     WerpAllocateAndInitializeSid @ 0x1800E7B7C (WerpAllocateAndInitializeSid.c)
 *     RtlGetAppContainerParent @ 0x1800F0F70 (RtlGetAppContainerParent.c)
 *     RtlpCompareKnownObjectAces @ 0x1800F1C30 (RtlpCompareKnownObjectAces.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800F1E80 (RtlpConvertAclToAutoInherit.c)
 *     RtlpValidLabelSubjectContext @ 0x1800F347C (RtlpValidLabelSubjectContext.c)
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
