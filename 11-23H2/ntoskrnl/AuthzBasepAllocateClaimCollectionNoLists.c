/*
 * XREFs of AuthzBasepAllocateClaimCollectionNoLists @ 0x140A5A014
 * Callers:
 *     SepCreateClaimAttributes @ 0x1407CF704 (SepCreateClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x1409D1644 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x14022599C (AuthzBasepMemAlloc.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall AuthzBasepAllocateClaimCollectionNoLists(__int64 a1, __int64 a2)
{
  void *result; // rax
  void *v3; // rbx

  result = (void *)AuthzBasepMemAlloc(608LL, a2, 1950442835LL);
  v3 = result;
  if ( result )
  {
    memset(result, 0, 0x260uLL);
    return v3;
  }
  return result;
}
