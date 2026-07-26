/*
 * XREFs of ?Feature_Servicing_CompartmentMemoryLeak__private_IsEnabled@@YAHXZ @ 0x1C0035BDC
 * Callers:
 *     ?ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ @ 0x1C002C6F8 (-ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ.c)
 *     ndisIfCreateCompartmentBlock @ 0x1C002CBC0 (ndisIfCreateCompartmentBlock.c)
 *     ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1C002D278 (-ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ.c)
 *     ndisIfCreateCompartment @ 0x1C00B300C (ndisIfCreateCompartment.c)
 *     ndisIfDeleteCompartment @ 0x1C00B34A8 (ndisIfDeleteCompartment.c)
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x1C01535AC (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00328B4 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C0034774 (-wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@.c)
 */

__int64 Feature_Servicing_CompartmentMemoryLeak__private_IsEnabled(void)
{
  unsigned int exchange; // eax
  unsigned int v1; // ebx
  enum wil_ReportingKind v3; // [rsp+30h] [rbp-18h]

  exchange = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
               &Feature_Servicing_CompartmentMemoryLeak__private_featureState,
               &Feature_Servicing_CompartmentMemoryLeak__private_descriptor).exchange;
  v1 = (exchange >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    &Feature_Servicing_CompartmentMemoryLeak__private_reporting,
    0x2EAA437u,
    (exchange >> 8) & 1,
    (exchange >> 9) & 1,
    &Feature_3583068475_logged_traits,
    v1,
    v3);
  return v1;
}
