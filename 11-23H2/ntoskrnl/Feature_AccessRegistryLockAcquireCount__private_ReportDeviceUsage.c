/*
 * XREFs of Feature_AccessRegistryLockAcquireCount__private_ReportDeviceUsage @ 0x140419B08
 * Callers:
 *     CmpRecordRegistryLockRelease @ 0x14022FBE0 (CmpRecordRegistryLockRelease.c)
 *     CmpRecordRegistryLockAcquire @ 0x14022FC20 (CmpRecordRegistryLockAcquire.c)
 *     CmpIsRegistryLockAcquired @ 0x14022FC60 (CmpIsRegistryLockAcquired.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14022FCB0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14040FA58 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_AccessRegistryLockAcquireCount__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_AccessRegistryLockAcquireCount__private_featureState;
  if ( (Feature_AccessRegistryLockAcquireCount__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_AccessRegistryLockAcquireCount__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_AccessRegistryLockAcquireCount__private_descriptor,
      v0,
      3,
      1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_AccessRegistryLockAcquireCount__private_descriptor);
  }
}
