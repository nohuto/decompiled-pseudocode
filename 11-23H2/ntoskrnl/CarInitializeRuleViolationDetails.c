/*
 * XREFs of CarInitializeRuleViolationDetails @ 0x1405D42D0
 * Callers:
 *     CarCreateRuleViolationDetails @ 0x1405D3F40 (CarCreateRuleViolationDetails.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACD2A4 (VerifierBugCheckIfAppropriate.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall CarInitializeRuleViolationDetails(void *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( a1 )
    memset(a1, 0, 0x48uLL);
  else
    return (unsigned int)-1073741811;
  return v1;
}
