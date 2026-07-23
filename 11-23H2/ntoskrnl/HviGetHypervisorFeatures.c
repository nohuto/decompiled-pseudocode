/*
 * XREFs of HviGetHypervisorFeatures @ 0x140382EE0
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x14038249C (KiDetectHardwareSpecControlFeatures.c)
 *     HvlpTryConfigureInterface @ 0x140383890 (HvlpTryConfigureInterface.c)
 *     HvlGetSystemPasidCapabilities @ 0x140544B10 (HvlGetSystemPasidCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x140549624 (HvlpDetermineEnlightenments.c)
 *     KiIsHyperVCr3RspErrataPresent @ 0x140579778 (KiIsHyperVCr3RspErrataPresent.c)
 *     HvipApertureDetectParameters @ 0x1405B6280 (HvipApertureDetectParameters.c)
 *     HviGetIptFeatures @ 0x140615A3C (HviGetIptFeatures.c)
 *     HvlQueryDetailInfo @ 0x140941058 (HvlQueryDetailInfo.c)
 *     KiInitializeKernel @ 0x140A8BF10 (KiInitializeKernel.c)
 *     HalpLbrInitialize @ 0x140A9138C (HalpLbrInitialize.c)
 *     EtwpTraceSystemInitialization @ 0x140B4C830 (EtwpTraceSystemInitialization.c)
 *     KiComputeDispatchInterruptCost @ 0x140B4CBF4 (KiComputeDispatchInterruptCost.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x14038296C (HviIsHypervisorMicrosoftCompatible.c)
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
