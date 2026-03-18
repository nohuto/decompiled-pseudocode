/*
 * XREFs of VfRandomGetNumber @ 0x140AC2388
 * Callers:
 *     VfPendingShouldForce @ 0x140AD1ABC (VfPendingShouldForce.c)
 *     VfFaultsInjectResourceFailure @ 0x140AD5FDC (VfFaultsInjectResourceFailure.c)
 *     DifpLwSPProcessPrePoolAlloc @ 0x140AE7C1C (DifpLwSPProcessPrePoolAlloc.c)
 *     ViInitPickRandomTargets @ 0x140B69C84 (ViInitPickRandomTargets.c)
 * Callees:
 *     RtlRandomEx @ 0x1402925A0 (RtlRandomEx.c)
 */

ULONG __fastcall VfRandomGetNumber(unsigned int a1, unsigned int a2)
{
  ULONG result; // eax

  result = RtlRandomEx(&ViRandomSeed);
  if ( a2 >= a1 )
    return a1 + result % (a2 - a1 + 1);
  return result;
}
