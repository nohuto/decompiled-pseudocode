/*
 * XREFs of HalpInterruptModel @ 0x14031FD6C
 * Callers:
 *     HalpInterruptSetDestination @ 0x14031FBE0 (HalpInterruptSetDestination.c)
 *     HalEnumerateProcessors @ 0x140376230 (HalEnumerateProcessors.c)
 *     HalStartNextProcessor @ 0x140376C50 (HalStartNextProcessor.c)
 *     HalpTimerInitSystem @ 0x14037ABD0 (HalpTimerInitSystem.c)
 *     HalpInterruptRemap @ 0x14037C278 (HalpInterruptRemap.c)
 *     HalpMmReservePageTablePages @ 0x14037E70C (HalpMmReservePageTablePages.c)
 *     HalQueryMaximumProcessorCount @ 0x14037FA40 (HalQueryMaximumProcessorCount.c)
 *     HalpInitializeInterruptsBspLate @ 0x1403AF4DC (HalpInitializeInterruptsBspLate.c)
 *     HalpInterruptRegisterDynamicProcessor @ 0x14050522C (HalpInterruptRegisterDynamicProcessor.c)
 *     HalpPrepareForBugcheck @ 0x14050BE00 (HalpPrepareForBugcheck.c)
 *     HalpSaveAndDisableEnlightenment @ 0x14050CB90 (HalpSaveAndDisableEnlightenment.c)
 *     HalpQueryAcpiResourceRequirements @ 0x14081E8B0 (HalpQueryAcpiResourceRequirements.c)
 *     HaliAcpiMachineStateInit @ 0x14085E290 (HaliAcpiMachineStateInit.c)
 *     HalpInterruptQueryControllerInfo @ 0x140863EA4 (HalpInterruptQueryControllerInfo.c)
 *     HalpGetAcpiStaticNumaTopology @ 0x140864848 (HalpGetAcpiStaticNumaTopology.c)
 *     HalpInterruptUnmap @ 0x1409335F8 (HalpInterruptUnmap.c)
 *     HalpInterruptInitSystem @ 0x140A89A80 (HalpInterruptInitSystem.c)
 *     HalpPiix4Detect @ 0x140A8F1A4 (HalpPiix4Detect.c)
 *     HalpWheaInitSystem @ 0x140A902A0 (HalpWheaInitSystem.c)
 *     HalpDpInitSystem @ 0x140A915E0 (HalpDpInitSystem.c)
 *     HalpMiscGetParameters @ 0x140B6A208 (HalpMiscGetParameters.c)
 *     HalpAcpiIBMExaMatch @ 0x140B92AF0 (HalpAcpiIBMExaMatch.c)
 *     HalpAcpiIBMVigilMatch @ 0x140B92B30 (HalpAcpiIBMVigilMatch.c)
 * Callees:
 *     <none>
 */

__int64 HalpInterruptModel()
{
  __int64 result; // rax

  if ( !HalpInterruptController )
    return 1LL;
  result = 2LL;
  if ( *(_DWORD *)(HalpInterruptController + 240) == 2 )
    return 1LL;
  if ( *(_DWORD *)(HalpInterruptController + 240) != 3 )
  {
    if ( *(_DWORD *)(HalpInterruptController + 240) == 4 )
    {
      return 3LL;
    }
    else if ( *(_DWORD *)(HalpInterruptController + 240) == 6 )
    {
      return 4LL;
    }
    else
    {
      return 4096LL;
    }
  }
  return result;
}
