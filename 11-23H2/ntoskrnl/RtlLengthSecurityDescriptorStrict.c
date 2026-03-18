/*
 * XREFs of RtlLengthSecurityDescriptorStrict @ 0x140297514
 * Callers:
 *     CmpGetSecurityDescriptorNodeEx @ 0x14067F1B8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14070CF18 (CmpSetSecurityDescriptorInfo.c)
 *     CmpFindMatchingDescriptorCell @ 0x14070D8EC (CmpFindMatchingDescriptorCell.c)
 *     CmpTraceSecurityChanging @ 0x14070DCAC (CmpTraceSecurityChanging.c)
 * Callees:
 *     SepSecurityDescriptorStrictLength @ 0x14070D9BC (SepSecurityDescriptorStrictLength.c)
 */

__int64 RtlLengthSecurityDescriptorStrict()
{
  return SepSecurityDescriptorStrictLength();
}
