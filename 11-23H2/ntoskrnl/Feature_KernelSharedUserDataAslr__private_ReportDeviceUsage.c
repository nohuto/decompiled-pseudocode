/*
 * XREFs of Feature_KernelSharedUserDataAslr__private_ReportDeviceUsage @ 0x14041A408
 * Callers:
 *     MiProtectSharedUserPage @ 0x140B6F3F8 (MiProtectSharedUserPage.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14022FCB0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14040FA58 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_KernelSharedUserDataAslr__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_KernelSharedUserDataAslr__private_featureState;
  if ( (Feature_KernelSharedUserDataAslr__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_KernelSharedUserDataAslr__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_KernelSharedUserDataAslr__private_descriptor,
      v0,
      3,
      1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_KernelSharedUserDataAslr__private_descriptor);
  }
}
