/*
 * XREFs of sub_14027E110 @ 0x14027E110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall sub_14027E110(unsigned int *a1)
{
  if ( (dword_140C31E20 & 3) == 0 )
    return 0;
  if ( a1 )
    *a1 = (unsigned int)dword_140C31E20 >> 4;
  return 1;
}
