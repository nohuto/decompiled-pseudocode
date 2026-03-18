/*
 * XREFs of AuthzBasepAllocateClaimCollectionNoLists @ 0x140A1A61C
 * Callers:
 *     SepCreateClaimAttributes @ 0x14066B830 (SepCreateClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x1409CE94C (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x1402199B0 (AuthzBasepMemAlloc.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall AuthzBasepAllocateClaimCollectionNoLists(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *result; // rax
  void *v5; // rbx

  result = (void *)AuthzBasepMemAlloc(608LL, a2, 1950442835LL, a4);
  v5 = result;
  if ( result )
  {
    memset(result, 0, 0x260uLL);
    return v5;
  }
  return result;
}
