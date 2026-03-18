/*
 * XREFs of Feature_Backport_PowerWatchdogTimeoutUserCritFix__private_IsEnabledDeviceUsage @ 0x1C00D0C30
 * Callers:
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C013230C (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 * Callees:
 *     Feature_Backport_PowerWatchdogTimeoutUserCritFix__private_IsEnabledFallback @ 0x1C00D0C68 (Feature_Backport_PowerWatchdogTimeoutUserCritFix__private_IsEnabledFallback.c)
 */

__int64 Feature_Backport_PowerWatchdogTimeoutUserCritFix__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Backport_PowerWatchdogTimeoutUserCritFix__private_featureState & 0x10) != 0 )
    return Feature_Backport_PowerWatchdogTimeoutUserCritFix__private_featureState & 1;
  else
    return Feature_Backport_PowerWatchdogTimeoutUserCritFix__private_IsEnabledFallback(
             (unsigned int)Feature_Backport_PowerWatchdogTimeoutUserCritFix__private_featureState,
             3LL);
}
