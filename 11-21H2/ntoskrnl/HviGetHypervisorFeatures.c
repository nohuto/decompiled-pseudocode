/*
 * XREFs of HviGetHypervisorFeatures @ 0x1403BF8B0
 * Callers:
 *     HvlpTryConfigureInterface @ 0x1403BF6EC (HvlpTryConfigureInterface.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1403BFE70 (KiDetectHardwareSpecControlFeatures.c)
 *     KiIsHyperVCr3RspErrataPresent @ 0x14041900C (KiIsHyperVCr3RspErrataPresent.c)
 *     HvlSvmGetSystemCapabilities @ 0x140548D80 (HvlSvmGetSystemCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x14054C1A4 (HvlpDetermineEnlightenments.c)
 *     HvipApertureDetectParameters @ 0x1405F2D28 (HvipApertureDetectParameters.c)
 *     HviGetIptFeatures @ 0x140647C4C (HviGetIptFeatures.c)
 *     HvlQueryDetailInfo @ 0x140930DA8 (HvlQueryDetailInfo.c)
 *     HalpLbrInitialize @ 0x140A550E0 (HalpLbrInitialize.c)
 *     KiInitializeKernel @ 0x140A580F0 (KiInitializeKernel.c)
 *     EtwpTraceSystemInitialization @ 0x140AFAD4C (EtwpTraceSystemInitialization.c)
 *     KiComputeDispatchInterruptCost @ 0x140B24E48 (KiComputeDispatchInterruptCost.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x1403C0314 (HviIsHypervisorMicrosoftCompatible.c)
 */

__int64 __fastcall HviGetHypervisorFeatures(_DWORD *a1)
{
  __int64 result; // rax

  result = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)result )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    *a1 = result;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return result;
}
