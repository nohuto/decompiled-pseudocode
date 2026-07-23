/*
 * XREFs of SddlpAlloc @ 0x14069DF28
 * Callers:
 *     SeConvertStringSidToSid @ 0x14020BA20 (SeConvertStringSidToSid.c)
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x14020BC70 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     LocalpConvertStringSidToSid @ 0x14069A428 (LocalpConvertStringSidToSid.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x14069BA60 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x14069C8EC (LocalGetAclForString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14069CE68 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForSid @ 0x14069D410 (LocalGetStringForSid.c)
 *     LocalConvertAclToString @ 0x14069D4D0 (LocalConvertAclToString.c)
 *     LocalGetStringForControl @ 0x14069DF74 (LocalGetStringForControl.c)
 *     LookupSidInTable @ 0x1406C3690 (LookupSidInTable.c)
 *     LocalConvertSidToStringSidW @ 0x140836144 (LocalConvertSidToStringSidW.c)
 *     AppendCondition @ 0x1409D2E34 (AppendCondition.c)
 *     DecodeAttributeName @ 0x1409D2F0C (DecodeAttributeName.c)
 *     EncloseSubCondition @ 0x1409D30CC (EncloseSubCondition.c)
 *     EncodeAttributeName @ 0x1409D318C (EncodeAttributeName.c)
 *     GetAttributeName @ 0x1409D32F4 (GetAttributeName.c)
 *     GetOperandValue @ 0x1409D37CC (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x1409D3DB8 (GetOperatorIndexByName.c)
 *     GetPrintableAttributeName @ 0x1409D3F64 (GetPrintableAttributeName.c)
 *     GetPrintableOperandValue @ 0x1409D416C (GetPrintableOperandValue.c)
 *     GetStringOperandValue @ 0x1409D4828 (GetStringOperandValue.c)
 *     LocalGetConditionForString @ 0x1409D4B14 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1409D5204 (LocalGetRelativeAttributeForString.c)
 *     LocalGetStringForRelativeAttribute @ 0x1409D5E1C (LocalGetStringForRelativeAttribute.c)
 *     LocalpGetStringForCondition @ 0x1409D6674 (LocalpGetStringForCondition.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140AAEC80 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SddlpAlloc(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x64536553u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, Size);
  return v3;
}
