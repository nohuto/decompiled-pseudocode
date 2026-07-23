/*
 * XREFs of HalpGetCpuInfo @ 0x1403807D0
 * Callers:
 *     HalpIommuGetPageTableType @ 0x14037FFF0 (HalpIommuGetPageTableType.c)
 *     HalpProcGetFeatureBits @ 0x140380154 (HalpProcGetFeatureBits.c)
 *     HalpGetCpuVendor @ 0x140380794 (HalpGetCpuVendor.c)
 *     HalpInterruptIsMsiSupported @ 0x140380ABC (HalpInterruptIsMsiSupported.c)
 *     HalpTscCheckAdjustMsrCapability @ 0x1403B2040 (HalpTscCheckAdjustMsrCapability.c)
 *     HalpTimerConfigureQpcBypass @ 0x1403B32E4 (HalpTimerConfigureQpcBypass.c)
 *     HalpAcpiShouldIgnoreSdevTable @ 0x14040F79C (HalpAcpiShouldIgnoreSdevTable.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x140505604 (HalpInterruptIsDeferredErrorSupported.c)
 *     HalpSetSystemInformation @ 0x14085EEF0 (HalpSetSystemInformation.c)
 *     HalpErrataApplyPerProcessor @ 0x140A8A8C8 (HalpErrataApplyPerProcessor.c)
 *     HalpPiix4Detect @ 0x140A8F1A4 (HalpPiix4Detect.c)
 *     HalpLbrInitialize @ 0x140A9138C (HalpLbrInitialize.c)
 *     HalpDpPostReplaceInitialization @ 0x140A97464 (HalpDpPostReplaceInitialization.c)
 * Callees:
 *     <none>
 */

char __fastcall HalpGetCpuInfo(char *a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 *a4)
{
  struct _KPRCB *CurrentPrcb; // r10

  CurrentPrcb = KeGetCurrentPrcb();
  if ( !CurrentPrcb->CpuID )
    return 0;
  if ( a1 )
    *a1 = CurrentPrcb->CpuType;
  if ( a2 )
    *a2 = CurrentPrcb->CpuStepping;
  if ( a3 )
    *a3 = CurrentPrcb->CpuModel;
  if ( a4 )
    *a4 = CurrentPrcb->CpuVendor;
  return 1;
}
