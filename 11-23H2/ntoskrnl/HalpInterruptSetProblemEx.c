/*
 * XREFs of HalpInterruptSetProblemEx @ 0x14051AA08
 * Callers:
 *     HalDisableInterrupt @ 0x14031F8F0 (HalDisableInterrupt.c)
 *     HalpInterruptSetDestination @ 0x14031F950 (HalpInterruptSetDestination.c)
 *     HalpInterruptSetRemappedDestination @ 0x14031FB08 (HalpInterruptSetRemappedDestination.c)
 *     HalpInterruptFindControllerAndLineState @ 0x14031FDE8 (HalpInterruptFindControllerAndLineState.c)
 *     HalGetMessageRoutingInfo @ 0x140320220 (HalGetMessageRoutingInfo.c)
 *     HalEnableInterrupt @ 0x140320730 (HalEnableInterrupt.c)
 *     HalpInterruptParseMadt @ 0x1403797C8 (HalpInterruptParseMadt.c)
 *     HalpInterruptParseAcpiTables @ 0x140379D7C (HalpInterruptParseAcpiTables.c)
 *     HalpInterruptEnableNmi @ 0x14037B5B4 (HalpInterruptEnableNmi.c)
 *     HalpInterruptInitializeLocalUnit @ 0x14037BA50 (HalpInterruptInitializeLocalUnit.c)
 *     HalpConnectThermalInterrupt @ 0x14037BEC0 (HalpConnectThermalInterrupt.c)
 *     HalpInterruptRemap @ 0x14037C0D8 (HalpInterruptRemap.c)
 *     HalpInterruptFindBestRouting @ 0x14037C524 (HalpInterruptFindBestRouting.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x14037C5A8 (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpInterruptSetLineState @ 0x14037C70C (HalpInterruptSetLineState.c)
 *     HalpUnmaskInterrupt @ 0x14037C960 (HalpUnmaskInterrupt.c)
 *     HalpInterruptSetLineStateInternal @ 0x14037CA30 (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptGenerateMessage @ 0x14037CD24 (HalpInterruptGenerateMessage.c)
 *     HalpAllocateKInterrupt @ 0x14037D358 (HalpAllocateKInterrupt.c)
 *     HalpInterruptInitializeController @ 0x14037E5EC (HalpInterruptInitializeController.c)
 *     HalQueryMaximumProcessorCount @ 0x14037F8A0 (HalQueryMaximumProcessorCount.c)
 *     HalGetInterruptTargetInformation @ 0x1403807E0 (HalGetInterruptTargetInformation.c)
 *     HalpInterruptRemapFixedLines @ 0x1403AF344 (HalpInterruptRemapFixedLines.c)
 *     HalpMaskInterrupt @ 0x1403B2680 (HalpMaskInterrupt.c)
 *     HalpInterruptSelectController @ 0x1403B4388 (HalpInterruptSelectController.c)
 *     HalpInterruptGetHighestPriorityInterrupt @ 0x1403D00F0 (HalpInterruptGetHighestPriorityInterrupt.c)
 *     HalpInterruptSetDestinationInternal @ 0x1405043BC (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1405045BC (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptSetRemappedLineState @ 0x140504760 (HalpInterruptSetRemappedLineState.c)
 *     HalpInterruptResetThisProcessor @ 0x140504E40 (HalpInterruptResetThisProcessor.c)
 *     HalpInterruptRequestInterrupt @ 0x140505170 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptRestoreClock @ 0x1405052E8 (HalpInterruptRestoreClock.c)
 *     HalpInterruptDpReplaceBegin @ 0x14052093C (HalpInterruptDpReplaceBegin.c)
 *     HalpInterruptUnmap @ 0x1409333F8 (HalpInterruptUnmap.c)
 *     HalpInterruptStartProcessor @ 0x140A88D4C (HalpInterruptStartProcessor.c)
 *     HalpInterruptMaskAcpi @ 0x140A95388 (HalpInterruptMaskAcpi.c)
 *     HalpDpReplayInterrupts @ 0x140A97B10 (HalpDpReplayInterrupts.c)
 *     HalpInterruptSaveReplayState @ 0x140A97CFC (HalpInterruptSaveReplayState.c)
 *     HalpInterruptUpdateLocalUnitIdentifier @ 0x140A98080 (HalpInterruptUpdateLocalUnitIdentifier.c)
 *     HalpInitializeInterrupts @ 0x140B48390 (HalpInitializeInterrupts.c)
 *     HalpPreAllocateKInterrupts @ 0x140B757EC (HalpPreAllocateKInterrupts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInterruptSetProblemEx(__int64 a1, int a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  result = a5;
  HalpInterruptLastProblemLine = a5;
  HalpInterruptLastProblemController = a1;
  HalpInterruptLastProblem = a2;
  HalpInterruptLastProblemStatus = a3;
  HalpInterruptLastProblemFile = a4;
  if ( a1 )
  {
    *(_DWORD *)(a1 + 316) = a2;
    *(_DWORD *)(a1 + 320) = a3;
    *(_QWORD *)(a1 + 328) = a4;
    *(_DWORD *)(a1 + 336) = a5;
  }
  return result;
}
