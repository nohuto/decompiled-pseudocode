/*
 * XREFs of PopInitSIdle @ 0x140824C14
 * Callers:
 *     PopUserPresentSetWorker @ 0x14058E6A0 (PopUserPresentSetWorker.c)
 *     PopSleepPowerSettingCallback @ 0x140823C90 (PopSleepPowerSettingCallback.c)
 *     PopApplyPolicy @ 0x1408244DC (PopApplyPolicy.c)
 *     PopBatteryApplyCompositeState @ 0x1408706C0 (PopBatteryApplyCompositeState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage @ 0x140411580 (Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopUpdateSystemIdleContext @ 0x140824C78 (PopUpdateSystemIdleContext.c)
 */

__int64 __fastcall PopInitSIdle(unsigned int a1)
{
  _BYTE v3[96]; // [rsp+20h] [rbp-78h] BYREF

  memset(v3, 0, sizeof(v3));
  if ( !PopPlatformAoAc )
    Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage();
  return PopUpdateSystemIdleContext(a1);
}
