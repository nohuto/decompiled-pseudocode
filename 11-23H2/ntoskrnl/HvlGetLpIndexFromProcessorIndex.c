/*
 * XREFs of HvlGetLpIndexFromProcessorIndex @ 0x14045F850
 * Callers:
 *     PpmScaleIdleStateValues @ 0x14034F4BC (PpmScaleIdleStateValues.c)
 *     HvlEnlightenProcessor @ 0x140382A70 (HvlEnlightenProcessor.c)
 *     HvlSharedIsr @ 0x14045F760 (HvlSharedIsr.c)
 *     HvlSetPlatformIdleState @ 0x1405475B8 (HvlSetPlatformIdleState.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x14099DC10 (PpmPerfRegisterHvPerfStateCounters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlGetLpIndexFromProcessorIndex(unsigned int a1)
{
  unsigned int v1; // eax
  int *v4; // rcx

  v1 = 0;
  if ( byte_140C0D0C8 )
    return a1;
  v4 = HvlpLogicalProcessorRegions;
  if ( !(_DWORD)HvlpLogicalProcessorCount )
    return 0xFFFFFFFFLL;
  while ( v4[6] != a1 )
  {
    ++v1;
    v4 += 30;
    if ( v1 >= (unsigned int)HvlpLogicalProcessorCount )
      return 0xFFFFFFFFLL;
  }
  return (unsigned int)v4[1];
}
