/*
 * XREFs of RtlCopySid @ 0x180069210
 * Callers:
 *     RtlAddProcessTrustLabelAce @ 0x180068600 (RtlAddProcessTrustLabelAce.c)
 *     RtlCreateAndSetSD @ 0x180068790 (RtlCreateAndSetSD.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x180068E18 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlAddMandatoryAce @ 0x180069090 (RtlAddMandatoryAce.c)
 *     RtlCopySidAndAttributesArray @ 0x1800F0E90 (RtlCopySidAndAttributesArray.c)
 *     RtlAddAccessFilterAce @ 0x1800F3DF0 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800F4070 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800F41E0 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800F4530 (RtlAddScopedPolicyIDAce.c)
 *     RtlpAddKnownObjectAce @ 0x1800F47F0 (RtlpAddKnownObjectAce.c)
 * Callees:
 *     memmove @ 0x1800A5980 (memmove.c)
 */

__int64 __fastcall RtlCopySid(unsigned int a1, void *a2, unsigned __int8 *a3)
{
  unsigned int v3; // eax

  v3 = 4 * a3[1] + 8;
  if ( v3 > a1 )
    return 3221225507LL;
  memmove(a2, a3, v3);
  return 0LL;
}
