/*
 * XREFs of Feature_KsrDisplay__private_ReportDeviceUsage @ 0x1C0026EA8
 * Callers:
 *     DpiFdoHandleSystemPower @ 0x1C01F0DA4 (DpiFdoHandleSystemPower.c)
 *     DpiInitializeEx @ 0x1C021DD08 (DpiInitializeEx.c)
 *     DpiKsrCallback @ 0x1C03A5F20 (DpiKsrCallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C00245B0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C0024828 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_KsrDisplay__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_KsrDisplay__private_featureState;
  if ( (Feature_KsrDisplay__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_KsrDisplay__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService((__int64)&Feature_KsrDisplay__private_descriptor, v0, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v0, 3, (__int64)&Feature_KsrDisplay__private_descriptor);
  }
}
