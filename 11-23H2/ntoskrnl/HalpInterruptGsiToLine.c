/*
 * XREFs of HalpInterruptGsiToLine @ 0x14031FF10
 * Callers:
 *     HalpInterruptSetDestination @ 0x14031F950 (HalpInterruptSetDestination.c)
 *     HalpInterruptFindControllerAndLineState @ 0x14031FDE8 (HalpInterruptFindControllerAndLineState.c)
 *     HalEnableInterrupt @ 0x140320730 (HalEnableInterrupt.c)
 *     HalpInterruptParseMadt @ 0x1403797C8 (HalpInterruptParseMadt.c)
 *     HalpInterruptEnableNmi @ 0x14037B5B4 (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x14037BD58 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptRemap @ 0x14037C0D8 (HalpInterruptRemap.c)
 *     HalpTimerConfigureInterrupt @ 0x14037CF94 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403B6700 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptConnect @ 0x1405041C0 (HalpInterruptConnect.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1405045BC (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x1405053FC (HalpInterruptSetLineSpecificOverride.c)
 *     ExtEnvSetVpptTarget @ 0x140508B28 (ExtEnvSetVpptTarget.c)
 *     HalpTimerUnmapInterrupt @ 0x140509920 (HalpTimerUnmapInterrupt.c)
 *     HalpTimerEnableHypervisorTimer @ 0x14050ABAC (HalpTimerEnableHypervisorTimer.c)
 *     HalpInterruptIsGsiValid @ 0x1409333B0 (HalpInterruptIsGsiValid.c)
 *     HalpInterruptUnmap @ 0x1409333F8 (HalpInterruptUnmap.c)
 * Callees:
 *     HalpInterruptFindLinesForGsiRange @ 0x14031FF5C (HalpInterruptFindLinesForGsiRange.c)
 */

__int64 __fastcall HalpInterruptGsiToLine(__int64 a1, _DWORD *a2)
{
  int v3; // ebx
  _DWORD *LinesForGsiRange; // rax

  v3 = a1;
  LinesForGsiRange = (_DWORD *)HalpInterruptFindLinesForGsiRange(a1, (unsigned int)(a1 + 1));
  if ( !LinesForGsiRange )
    return 3221226021LL;
  *a2 = LinesForGsiRange[4];
  a2[1] = v3 + LinesForGsiRange[5] - LinesForGsiRange[7];
  return 0LL;
}
