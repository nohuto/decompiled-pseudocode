/*
 * XREFs of RaidStorPoFxDeviceVersionAndSizeIsValid @ 0x1C0044B7C
 * Callers:
 *     StorpAdapterInitializePoFxPower @ 0x1C0047B28 (StorpAdapterInitializePoFxPower.c)
 *     StorpUnitInitializePoFxPower @ 0x1C004A0E0 (StorpUnitInitializePoFxPower.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidStorPoFxDeviceVersionAndSizeIsValid(int *a1)
{
  int v1; // eax

  v1 = *a1;
  if ( *a1 == 1 )
  {
    if ( (unsigned int)a1[1] < 0x10 )
      return 0;
  }
  else if ( v1 == 2 )
  {
    return (unsigned int)a1[1] >= 0x18;
  }
  if ( v1 != 3 )
    return (unsigned int)(v1 - 1) <= 2;
  return (unsigned int)a1[1] >= 0x18;
}
