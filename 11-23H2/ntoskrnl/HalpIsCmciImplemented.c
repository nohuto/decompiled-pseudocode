/*
 * XREFs of HalpIsCmciImplemented @ 0x140A91D68
 * Callers:
 *     HalpInitializeCmc @ 0x140A8AD2C (HalpInitializeCmc.c)
 *     HalpCorrectMachineCheckErrSrc @ 0x140A91C84 (HalpCorrectMachineCheckErrSrc.c)
 *     HalpMcaSetFeatureFlags @ 0x140A91CE0 (HalpMcaSetFeatureFlags.c)
 *     HalpMcaResumeProcessorConfig @ 0x140A9507C (HalpMcaResumeProcessorConfig.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x140380794 (HalpGetCpuVendor.c)
 *     HalpInterruptIsCmciSupported @ 0x1403AEF90 (HalpInterruptIsCmciSupported.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x140505604 (HalpInterruptIsDeferredErrorSupported.c)
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
