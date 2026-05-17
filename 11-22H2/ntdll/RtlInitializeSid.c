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
