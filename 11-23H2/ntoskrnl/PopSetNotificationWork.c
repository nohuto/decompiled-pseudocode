/*
 * XREFs of PopSetNotificationWork @ 0x14032CB30
 * Callers:
 *     PopInitilizeAcDcSettings @ 0x140384854 (PopInitilizeAcDcSettings.c)
 *     PopUserPresentSetWorker @ 0x14058E1B0 (PopUserPresentSetWorker.c)
 *     PopSetPowerSettingValue @ 0x1407829F8 (PopSetPowerSettingValue.c)
 *     PopGetSettingNotificationName @ 0x140783080 (PopGetSettingNotificationName.c)
 *     PoRegisterPowerSettingCallback @ 0x1407A7060 (PoRegisterPowerSettingCallback.c)
 *     PopApplyPolicy @ 0x1408241DC (PopApplyPolicy.c)
 *     PopBatteryApplyCompositeState @ 0x140870480 (PopBatteryApplyCompositeState.c)
 *     PopExecutePowerAction @ 0x1409897F4 (PopExecutePowerAction.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x14032CB64 (PopGetPolicyWorker.c)
 *     PopCheckForWork @ 0x14032CBB8 (PopCheckForWork.c)
 */

__int64 __fastcall PopSetNotificationWork(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = a1 & PopNotifyEvents;
  if ( (_DWORD)result != a1 )
  {
    _InterlockedOr(&PopNotifyEvents, a1);
    PopGetPolicyWorker(4LL, a2, a3, a4);
    return PopCheckForWork();
  }
  return result;
}
