/*
 * XREFs of HalpInterruptGsiToLine @ 0x14031FD30
 * Callers:
 *     HalpInterruptSetDestination @ 0x14031F770 (HalpInterruptSetDestination.c)
 *     HalpInterruptFindControllerAndLineState @ 0x14031FC08 (HalpInterruptFindControllerAndLineState.c)
 *     HalEnableInterrupt @ 0x140320550 (HalEnableInterrupt.c)
 *     HalpInterruptParseMadt @ 0x140379E18 (HalpInterruptParseMadt.c)
 *     HalpInterruptEnableNmi @ 0x14037BC04 (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x14037C3A8 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptRemap @ 0x14037C728 (HalpInterruptRemap.c)
 *     HalpTimerConfigureInterrupt @ 0x14037D5E4 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403B6070 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptConnect @ 0x1405042D0 (HalpInterruptConnect.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1405046CC (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x14050550C (HalpInterruptSetLineSpecificOverride.c)
 *     ExtEnvSetVpptTarget @ 0x1405087B8 (ExtEnvSetVpptTarget.c)
 *     HalpTimerUnmapInterrupt @ 0x1405095B0 (HalpTimerUnmapInterrupt.c)
 *     HalpTimerEnableHypervisorTimer @ 0x14050A818 (HalpTimerEnableHypervisorTimer.c)
 *     HalpInterruptIsGsiValid @ 0x140933460 (HalpInterruptIsGsiValid.c)
 *     HalpInterruptUnmap @ 0x1409334A8 (HalpInterruptUnmap.c)
 * Callees:
 *     HalpInterruptFindLinesForGsiRange @ 0x14031FD7C (HalpInterruptFindLinesForGsiRange.c)
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
