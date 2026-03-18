/*
 * XREFs of AuthzBasepMemAlloc @ 0x14022588C
 * Callers:
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14022523C (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepAllocateSecurityAttributeValue @ 0x14022584C (AuthzBasepAllocateSecurityAttributeValue.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x14036AF8C (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x140A59D64 (AuthzBasepAllocateClaimCollectionNoLists.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall AuthzBasepMemAlloc(__int64 a1, __int64 a2, __int64 a3)
{
  return ExAllocatePool2(KeGetCurrentIrql() < 2u ? 256LL : 64LL, a1, a3);
}
