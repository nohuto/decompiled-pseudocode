/*
 * XREFs of HalpIsCmciImplemented @ 0x140A91EE8
 * Callers:
 *     HalpInitializeCmc @ 0x140A8AD2C (HalpInitializeCmc.c)
 *     HalpCorrectMachineCheckErrSrc @ 0x140A91E04 (HalpCorrectMachineCheckErrSrc.c)
 *     HalpMcaSetFeatureFlags @ 0x140A91E60 (HalpMcaSetFeatureFlags.c)
 *     HalpMcaResumeProcessorConfig @ 0x140A9520C (HalpMcaResumeProcessorConfig.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x1403805F4 (HalpGetCpuVendor.c)
 *     HalpInterruptIsCmciSupported @ 0x1403AEDB0 (HalpInterruptIsCmciSupported.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x1405050B4 (HalpInterruptIsDeferredErrorSupported.c)
 */

char HalpIsCmciImplemented()
{
  char CpuVendor; // al
  bool IsCmciSupported; // bl
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( !HalpCmciImplementationChecked )
  {
    CpuVendor = HalpGetCpuVendor();
    if ( CpuVendor == 2 )
    {
      IsCmciSupported = HalpInterruptIsCmciSupported();
    }
    else if ( CpuVendor == 1 )
    {
      IsCmciSupported = HalpInterruptIsCmciSupported();
      if ( IsCmciSupported )
        HalpDeferredErrorInterruptPresent = HalpInterruptIsDeferredErrorSupported();
    }
    else
    {
      IsCmciSupported = 0;
    }
    HalpCmciImplementationPresent = IsCmciSupported;
    _InterlockedOr(v3, 0);
    HalpCmciImplementationChecked = 1;
  }
  return HalpCmciImplementationPresent;
}
