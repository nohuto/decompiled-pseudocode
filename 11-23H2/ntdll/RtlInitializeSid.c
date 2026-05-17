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

__int64 __fastcall RtlInitializeSid(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  if ( a3 > 0xFu )
    return 3221225485LL;
  *(_BYTE *)(a1 + 1) = a3;
  *(_BYTE *)a1 = 1;
  *(_DWORD *)(a1 + 2) = *(_DWORD *)a2;
  *(_WORD *)(a1 + 6) = *(_WORD *)(a2 + 4);
  return 0LL;
}
