/*
 * XREFs of Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage @ 0x140411580
 * Callers:
 *     PopCheckForIdleness @ 0x14032C8B0 (PopCheckForIdleness.c)
 *     PopResetIdleTime @ 0x1403B4C48 (PopResetIdleTime.c)
 *     PopHandleSystemIdleReset @ 0x1403B4C78 (PopHandleSystemIdleReset.c)
 *     PopSystemIdleWorker @ 0x1407A6F90 (PopSystemIdleWorker.c)
 *     PopMonitorInvocation @ 0x1407A911C (PopMonitorInvocation.c)
 *     PopProcessSessionDisplayStateChange @ 0x1407A93C8 (PopProcessSessionDisplayStateChange.c)
 *     PopInitSIdle @ 0x140824C14 (PopInitSIdle.c)
 *     PopUpdateSystemIdleContext @ 0x140824C78 (PopUpdateSystemIdleContext.c)
 *     PopQueryRemainingSystemIdleTime @ 0x140878558 (PopQueryRemainingSystemIdleTime.c)
 *     PopPowerAggregatorForceSessionSwitch @ 0x140993A44 (PopPowerAggregatorForceSessionSwitch.c)
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x140993BE0 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     PopPolicySystemIdle @ 0x14099C0D0 (PopPolicySystemIdle.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14022FCB0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14040FA58 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
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
