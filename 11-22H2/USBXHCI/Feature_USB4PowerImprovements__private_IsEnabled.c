/*
 * XREFs of Feature_USB4PowerImprovements__private_IsEnabled @ 0x1C001F694
 * Callers:
 *     UsbDevice_UpdateUsbDevice @ 0x1C001D48C (UsbDevice_UpdateUsbDevice.c)
 *     RootHub_IsDeviceNative @ 0x1C001F6FC (RootHub_IsDeviceNative.c)
 *     RootHub_PrepareHardware @ 0x1C0070700 (RootHub_PrepareHardware.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C001F214 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1C001F398 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 */

__int64 Feature_USB4PowerImprovements__private_IsEnabled()
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx
  int v3; // [rsp+30h] [rbp-18h]

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                (unsigned int *)&Feature_USB4PowerImprovements__private_featureState,
                                (__int64)&Feature_USB4PowerImprovements__private_descriptor);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_USB4PowerImprovements__private_reporting,
    0x295B56Du,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1,
    (__int64)&Feature_USB4PowerImprovements_logged_traits,
    v1,
    v3);
  return v1;
}
