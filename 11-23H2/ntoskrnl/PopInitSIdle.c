/*
 * XREFs of PopInitSIdle @ 0x140824914
 * Callers:
 *     PopUserPresentSetWorker @ 0x14058E1B0 (PopUserPresentSetWorker.c)
 *     PopSleepPowerSettingCallback @ 0x140823990 (PopSleepPowerSettingCallback.c)
 *     PopApplyPolicy @ 0x1408241DC (PopApplyPolicy.c)
 *     PopBatteryApplyCompositeState @ 0x140870480 (PopBatteryApplyCompositeState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage @ 0x140411374 (Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage.c)
 *     memset @ 0x140435A00 (memset.c)
 *     PopUpdateSystemIdleContext @ 0x140824978 (PopUpdateSystemIdleContext.c)
 */

__int64 __fastcall PopInitSIdle(unsigned int a1)
{
  _BYTE v3[96]; // [rsp+20h] [rbp-78h] BYREF

  memset(v3, 0, sizeof(v3));
  if ( !PopPlatformAoAc )
    Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage();
  return PopUpdateSystemIdleContext(a1);
}
