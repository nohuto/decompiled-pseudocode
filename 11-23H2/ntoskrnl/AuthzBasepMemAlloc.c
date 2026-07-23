/*
 * XREFs of AuthzBasepMemAlloc @ 0x14022599C
 * Callers:
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140225344 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepAllocateSecurityAttributeValue @ 0x14022595C (AuthzBasepAllocateSecurityAttributeValue.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x14036B12C (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x140A5A014 (AuthzBasepAllocateClaimCollectionNoLists.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall AuthzBasepMemAlloc(__int64 a1, __int64 a2, __int64 a3)
{
  return ExAllocatePool2(KeGetCurrentIrql() < 2u ? 256LL : 64LL, a1, a3);
}
