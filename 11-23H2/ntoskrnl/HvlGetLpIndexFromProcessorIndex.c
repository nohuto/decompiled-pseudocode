/*
 * XREFs of HvlGetLpIndexFromProcessorIndex @ 0x14045F450
 * Callers:
 *     PpmScaleIdleStateValues @ 0x14034F31C (PpmScaleIdleStateValues.c)
 *     HvlEnlightenProcessor @ 0x1403828D0 (HvlEnlightenProcessor.c)
 *     HvlSharedIsr @ 0x14045F360 (HvlSharedIsr.c)
 *     HvlSetPlatformIdleState @ 0x140546EF8 (HvlSetPlatformIdleState.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x14099DA10 (PpmPerfRegisterHvPerfStateCounters.c)
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
