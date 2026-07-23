/*
 * XREFs of HalpInterruptGsiToLine @ 0x1403201A0
 * Callers:
 *     HalpInterruptSetDestination @ 0x14031FBE0 (HalpInterruptSetDestination.c)
 *     HalpInterruptFindControllerAndLineState @ 0x140320078 (HalpInterruptFindControllerAndLineState.c)
 *     HalEnableInterrupt @ 0x1403209C0 (HalEnableInterrupt.c)
 *     HalpInterruptParseMadt @ 0x140379968 (HalpInterruptParseMadt.c)
 *     HalpInterruptEnableNmi @ 0x14037B754 (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x14037BEF8 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptRemap @ 0x14037C278 (HalpInterruptRemap.c)
 *     HalpTimerConfigureInterrupt @ 0x14037D134 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403B68E0 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptConnect @ 0x140504710 (HalpInterruptConnect.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x140504B0C (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x14050594C (HalpInterruptSetLineSpecificOverride.c)
 *     ExtEnvSetVpptTarget @ 0x140509078 (ExtEnvSetVpptTarget.c)
 *     HalpTimerUnmapInterrupt @ 0x140509E70 (HalpTimerUnmapInterrupt.c)
 *     HalpTimerEnableHypervisorTimer @ 0x14050B0FC (HalpTimerEnableHypervisorTimer.c)
 *     HalpInterruptIsGsiValid @ 0x1409335B0 (HalpInterruptIsGsiValid.c)
 *     HalpInterruptUnmap @ 0x1409335F8 (HalpInterruptUnmap.c)
 * Callees:
 *     HalpInterruptFindLinesForGsiRange @ 0x1403201EC (HalpInterruptFindLinesForGsiRange.c)
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
