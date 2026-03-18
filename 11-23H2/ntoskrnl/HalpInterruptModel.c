/*
 * XREFs of HalpInterruptModel @ 0x14031FADC
 * Callers:
 *     HalpInterruptSetDestination @ 0x14031F950 (HalpInterruptSetDestination.c)
 *     HalEnumerateProcessors @ 0x140376090 (HalEnumerateProcessors.c)
 *     HalStartNextProcessor @ 0x140376AB0 (HalStartNextProcessor.c)
 *     HalpTimerInitSystem @ 0x14037AA30 (HalpTimerInitSystem.c)
 *     HalpInterruptRemap @ 0x14037C0D8 (HalpInterruptRemap.c)
 *     HalpMmReservePageTablePages @ 0x14037E56C (HalpMmReservePageTablePages.c)
 *     HalQueryMaximumProcessorCount @ 0x14037F8A0 (HalQueryMaximumProcessorCount.c)
 *     HalpInitializeInterruptsBspLate @ 0x1403AF2FC (HalpInitializeInterruptsBspLate.c)
 *     HalpInterruptRegisterDynamicProcessor @ 0x140504CDC (HalpInterruptRegisterDynamicProcessor.c)
 *     HalpPrepareForBugcheck @ 0x14050B8B0 (HalpPrepareForBugcheck.c)
 *     HalpSaveAndDisableEnlightenment @ 0x14050C640 (HalpSaveAndDisableEnlightenment.c)
 *     HalpQueryAcpiResourceRequirements @ 0x14081E5E0 (HalpQueryAcpiResourceRequirements.c)
 *     HaliAcpiMachineStateInit @ 0x14085E050 (HaliAcpiMachineStateInit.c)
 *     HalpInterruptQueryControllerInfo @ 0x140863C64 (HalpInterruptQueryControllerInfo.c)
 *     HalpGetAcpiStaticNumaTopology @ 0x140864608 (HalpGetAcpiStaticNumaTopology.c)
 *     HalpInterruptUnmap @ 0x1409333F8 (HalpInterruptUnmap.c)
 *     HalpInterruptInitSystem @ 0x140A89A80 (HalpInterruptInitSystem.c)
 *     HalpPiix4Detect @ 0x140A8F324 (HalpPiix4Detect.c)
 *     HalpWheaInitSystem @ 0x140A90420 (HalpWheaInitSystem.c)
 *     HalpDpInitSystem @ 0x140A91760 (HalpDpInitSystem.c)
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
