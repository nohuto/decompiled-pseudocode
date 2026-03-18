/*
 * XREFs of HviGetHypervisorFeatures @ 0x140382D40
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x1403822FC (KiDetectHardwareSpecControlFeatures.c)
 *     HvlpTryConfigureInterface @ 0x1403836B0 (HvlpTryConfigureInterface.c)
 *     HvlGetSystemPasidCapabilities @ 0x140544450 (HvlGetSystemPasidCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x140548F64 (HvlpDetermineEnlightenments.c)
 *     KiIsHyperVCr3RspErrataPresent @ 0x140579288 (KiIsHyperVCr3RspErrataPresent.c)
 *     HvipApertureDetectParameters @ 0x1405B5D10 (HvipApertureDetectParameters.c)
 *     HviGetIptFeatures @ 0x1406154EC (HviGetIptFeatures.c)
 *     HvlQueryDetailInfo @ 0x140940E58 (HvlQueryDetailInfo.c)
 *     KiInitializeKernel @ 0x140A8BF10 (KiInitializeKernel.c)
 *     HalpLbrInitialize @ 0x140A9150C (HalpLbrInitialize.c)
 *     EtwpTraceSystemInitialization @ 0x140B4C830 (EtwpTraceSystemInitialization.c)
 *     KiComputeDispatchInterruptCost @ 0x140B4CBF4 (KiComputeDispatchInterruptCost.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x1403827CC (HviIsHypervisorMicrosoftCompatible.c)
 */

char __fastcall HviGetHypervisorFeatures(_DWORD *a1)
{
  LOBYTE(_RAX) = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)_RAX )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    *a1 = _RAX;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return _RAX;
}
