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
