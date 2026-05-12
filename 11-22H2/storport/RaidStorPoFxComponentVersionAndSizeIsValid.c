/*
 * XREFs of RaidStorPoFxComponentVersionAndSizeIsValid @ 0x1C0044B4C
 * Callers:
 *     StorpAdapterInitializePoFxPower @ 0x1C0047B28 (StorpAdapterInitializePoFxPower.c)
 *     StorpUnitInitializePoFxPower @ 0x1C004A0E0 (StorpUnitInitializePoFxPower.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidStorPoFxComponentVersionAndSizeIsValid(int *a1)
{
  int v1; // eax

  v1 = *a1;
  if ( *a1 == 1 )
  {
    if ( (unsigned int)a1[1] >= 0x20 )
      return (unsigned int)(v1 - 1) <= 1;
  }
  else
  {
    if ( v1 != 2 )
      return (unsigned int)(v1 - 1) <= 1;
    if ( (unsigned int)a1[1] >= 0x28 )
      return 1;
  }
  return 0;
}
