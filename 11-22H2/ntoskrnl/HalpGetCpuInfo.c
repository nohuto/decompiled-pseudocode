/*
 * XREFs of HalpGetCpuInfo @ 0x140380C80
 * Callers:
 *     HalpIommuGetPageTableType @ 0x1403804A0 (HalpIommuGetPageTableType.c)
 *     HalpProcGetFeatureBits @ 0x140380604 (HalpProcGetFeatureBits.c)
 *     HalpGetCpuVendor @ 0x140380C44 (HalpGetCpuVendor.c)
 *     HalpInterruptIsMsiSupported @ 0x140380F6C (HalpInterruptIsMsiSupported.c)
 *     HalpTscCheckAdjustMsrCapability @ 0x1403B17D0 (HalpTscCheckAdjustMsrCapability.c)
 *     HalpTimerConfigureQpcBypass @ 0x1403B2A74 (HalpTimerConfigureQpcBypass.c)
 *     HalpAcpiShouldIgnoreSdevTable @ 0x14040EF5C (HalpAcpiShouldIgnoreSdevTable.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x1405051C4 (HalpInterruptIsDeferredErrorSupported.c)
 *     HalpSetSystemInformation @ 0x14085EE10 (HalpSetSystemInformation.c)
 *     HalpErrataApplyPerProcessor @ 0x140A8B128 (HalpErrataApplyPerProcessor.c)
 *     HalpPiix4Detect @ 0x140A8F324 (HalpPiix4Detect.c)
 *     HalpLbrInitialize @ 0x140A9150C (HalpLbrInitialize.c)
 *     HalpDpPostReplaceInitialization @ 0x140A976B4 (HalpDpPostReplaceInitialization.c)
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
