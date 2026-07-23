/*
 * XREFs of HalpInterruptSetProblemEx @ 0x14051AF58
 * Callers:
 *     HalDisableInterrupt @ 0x14031FB80 (HalDisableInterrupt.c)
 *     HalpInterruptSetDestination @ 0x14031FBE0 (HalpInterruptSetDestination.c)
 *     HalpInterruptSetRemappedDestination @ 0x14031FD98 (HalpInterruptSetRemappedDestination.c)
 *     HalpInterruptFindControllerAndLineState @ 0x140320078 (HalpInterruptFindControllerAndLineState.c)
 *     HalGetMessageRoutingInfo @ 0x1403204B0 (HalGetMessageRoutingInfo.c)
 *     HalEnableInterrupt @ 0x1403209C0 (HalEnableInterrupt.c)
 *     HalpInterruptParseMadt @ 0x140379968 (HalpInterruptParseMadt.c)
 *     HalpInterruptParseAcpiTables @ 0x140379F1C (HalpInterruptParseAcpiTables.c)
 *     HalpInterruptEnableNmi @ 0x14037B754 (HalpInterruptEnableNmi.c)
 *     HalpInterruptInitializeLocalUnit @ 0x14037BBF0 (HalpInterruptInitializeLocalUnit.c)
 *     HalpConnectThermalInterrupt @ 0x14037C060 (HalpConnectThermalInterrupt.c)
 *     HalpInterruptRemap @ 0x14037C278 (HalpInterruptRemap.c)
 *     HalpInterruptFindBestRouting @ 0x14037C6C4 (HalpInterruptFindBestRouting.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x14037C748 (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpInterruptSetLineState @ 0x14037C8AC (HalpInterruptSetLineState.c)
 *     HalpUnmaskInterrupt @ 0x14037CB00 (HalpUnmaskInterrupt.c)
 *     HalpInterruptSetLineStateInternal @ 0x14037CBD0 (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptGenerateMessage @ 0x14037CEC4 (HalpInterruptGenerateMessage.c)
 *     HalpAllocateKInterrupt @ 0x14037D4F8 (HalpAllocateKInterrupt.c)
 *     HalpInterruptInitializeController @ 0x14037E78C (HalpInterruptInitializeController.c)
 *     HalQueryMaximumProcessorCount @ 0x14037FA40 (HalQueryMaximumProcessorCount.c)
 *     HalGetInterruptTargetInformation @ 0x140380980 (HalGetInterruptTargetInformation.c)
 *     HalpInterruptRemapFixedLines @ 0x1403AF524 (HalpInterruptRemapFixedLines.c)
 *     HalpMaskInterrupt @ 0x1403B2860 (HalpMaskInterrupt.c)
 *     HalpInterruptSelectController @ 0x1403B4568 (HalpInterruptSelectController.c)
 *     HalpInterruptGetHighestPriorityInterrupt @ 0x1403D02D0 (HalpInterruptGetHighestPriorityInterrupt.c)
 *     HalpInterruptSetDestinationInternal @ 0x14050490C (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x140504B0C (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptSetRemappedLineState @ 0x140504CB0 (HalpInterruptSetRemappedLineState.c)
 *     HalpInterruptResetThisProcessor @ 0x140505390 (HalpInterruptResetThisProcessor.c)
 *     HalpInterruptRequestInterrupt @ 0x1405056C0 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptRestoreClock @ 0x140505838 (HalpInterruptRestoreClock.c)
 *     HalpInterruptDpReplaceBegin @ 0x140520E8C (HalpInterruptDpReplaceBegin.c)
 *     HalpInterruptUnmap @ 0x1409335F8 (HalpInterruptUnmap.c)
 *     HalpInterruptStartProcessor @ 0x140A88D4C (HalpInterruptStartProcessor.c)
 *     HalpInterruptMaskAcpi @ 0x140A951F8 (HalpInterruptMaskAcpi.c)
 *     HalpDpReplayInterrupts @ 0x140A97980 (HalpDpReplayInterrupts.c)
 *     HalpInterruptSaveReplayState @ 0x140A97B6C (HalpInterruptSaveReplayState.c)
 *     HalpInterruptUpdateLocalUnitIdentifier @ 0x140A97EF0 (HalpInterruptUpdateLocalUnitIdentifier.c)
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
