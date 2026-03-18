/*
 * XREFs of Feature_Servicing_Acpi_Fan_Dispatch_36967340__private_IsEnabled @ 0x1C002F2E4
 * Callers:
 *     ACPIFanDeviceControl @ 0x1C0003160 (ACPIFanDeviceControl.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C002F654 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1C002F7D4 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 */

__int64 Feature_Servicing_Acpi_Fan_Dispatch_36967340__private_IsEnabled()
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx
  int v2; // edx
  int v3; // ecx

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                &Feature_Servicing_Acpi_Fan_Dispatch_36967340__private_featureState,
                                &wil_details_featureDescriptors_a);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    v3,
    v2,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1);
  return v1;
}
