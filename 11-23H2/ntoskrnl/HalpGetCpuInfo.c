/*
 * XREFs of HalpGetCpuInfo @ 0x140380630
 * Callers:
 *     HalpIommuGetPageTableType @ 0x14037FE50 (HalpIommuGetPageTableType.c)
 *     HalpProcGetFeatureBits @ 0x14037FFB4 (HalpProcGetFeatureBits.c)
 *     HalpGetCpuVendor @ 0x1403805F4 (HalpGetCpuVendor.c)
 *     HalpInterruptIsMsiSupported @ 0x14038091C (HalpInterruptIsMsiSupported.c)
 *     HalpTscCheckAdjustMsrCapability @ 0x1403B1E60 (HalpTscCheckAdjustMsrCapability.c)
 *     HalpTimerConfigureQpcBypass @ 0x1403B3104 (HalpTimerConfigureQpcBypass.c)
 *     HalpAcpiShouldIgnoreSdevTable @ 0x14040F5BC (HalpAcpiShouldIgnoreSdevTable.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x1405050B4 (HalpInterruptIsDeferredErrorSupported.c)
 *     HalpSetSystemInformation @ 0x14085ECB0 (HalpSetSystemInformation.c)
 *     HalpErrataApplyPerProcessor @ 0x140A8A8C8 (HalpErrataApplyPerProcessor.c)
 *     HalpPiix4Detect @ 0x140A8F324 (HalpPiix4Detect.c)
 *     HalpLbrInitialize @ 0x140A9150C (HalpLbrInitialize.c)
 *     HalpDpPostReplaceInitialization @ 0x140A975F4 (HalpDpPostReplaceInitialization.c)
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
