/*
 * XREFs of VfRandomGetNumber @ 0x140AC3358
 * Callers:
 *     VfPendingShouldForce @ 0x140AD2A8C (VfPendingShouldForce.c)
 *     VfFaultsInjectResourceFailure @ 0x140AD6FAC (VfFaultsInjectResourceFailure.c)
 *     DifpLwSPProcessPrePoolAlloc @ 0x140AE8BEC (DifpLwSPProcessPrePoolAlloc.c)
 *     ViInitPickRandomTargets @ 0x140B6ABE0 (ViInitPickRandomTargets.c)
 * Callees:
 *     RtlRandomEx @ 0x140292480 (RtlRandomEx.c)
 */

ULONG __fastcall VfRandomGetNumber(unsigned int a1, unsigned int a2)
{
  ULONG result; // eax

  result = RtlRandomEx(&ViRandomSeed);
  if ( a2 >= a1 )
    return a1 + result % (a2 - a1 + 1);
  return result;
}
