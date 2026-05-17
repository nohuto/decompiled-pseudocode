/*
 * XREFs of RtlCopySid @ 0x18000F120
 * Callers:
 *     RtlCreateAndSetSD @ 0x18000B740 (RtlCreateAndSetSD.c)
 *     RtlAddMandatoryAce @ 0x18000EFA0 (RtlAddMandatoryAce.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x180011714 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlAddProcessTrustLabelAce @ 0x18008DE70 (RtlAddProcessTrustLabelAce.c)
 *     RtlCopySidAndAttributesArray @ 0x1800F1290 (RtlCopySidAndAttributesArray.c)
 *     RtlAddAccessFilterAce @ 0x1800F40B0 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800F4330 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800F44A0 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800F47F0 (RtlAddScopedPolicyIDAce.c)
 *     RtlpAddKnownObjectAce @ 0x1800F4AB0 (RtlpAddKnownObjectAce.c)
 * Callees:
 *     memmove @ 0x1800AAB40 (memmove.c)
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
