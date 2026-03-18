/*
 * XREFs of Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage @ 0x140411374
 * Callers:
 *     PopCheckForIdleness @ 0x14032C620 (PopCheckForIdleness.c)
 *     PopResetIdleTime @ 0x1403B4A68 (PopResetIdleTime.c)
 *     PopHandleSystemIdleReset @ 0x1403B4A98 (PopHandleSystemIdleReset.c)
 *     PopSystemIdleWorker @ 0x1407A6DA0 (PopSystemIdleWorker.c)
 *     PopMonitorInvocation @ 0x1407A8F2C (PopMonitorInvocation.c)
 *     PopProcessSessionDisplayStateChange @ 0x1407A91D8 (PopProcessSessionDisplayStateChange.c)
 *     PopInitSIdle @ 0x140824914 (PopInitSIdle.c)
 *     PopUpdateSystemIdleContext @ 0x140824978 (PopUpdateSystemIdleContext.c)
 *     PopQueryRemainingSystemIdleTime @ 0x140878318 (PopQueryRemainingSystemIdleTime.c)
 *     PopPowerAggregatorForceSessionSwitch @ 0x140993844 (PopPowerAggregatorForceSessionSwitch.c)
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x1409939E0 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     PopPolicySystemIdle @ 0x14099BED0 (PopPolicySystemIdle.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14022FBC0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14040F878 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_PowerEventProcessorSystemIdle__private_featureState;
  if ( (Feature_PowerEventProcessorSystemIdle__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_PowerEventProcessorSystemIdle__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_PowerEventProcessorSystemIdle__private_descriptor,
      v0,
      3,
      1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_PowerEventProcessorSystemIdle__private_descriptor);
  }
}
