/*
 * XREFs of PopSetNotificationWork @ 0x14032CDC0
 * Callers:
 *     PopInitilizeAcDcSettings @ 0x140384A34 (PopInitilizeAcDcSettings.c)
 *     PopUserPresentSetWorker @ 0x14058E6A0 (PopUserPresentSetWorker.c)
 *     PopSetPowerSettingValue @ 0x140782BE8 (PopSetPowerSettingValue.c)
 *     PopGetSettingNotificationName @ 0x140783270 (PopGetSettingNotificationName.c)
 *     PoRegisterPowerSettingCallback @ 0x1407A7250 (PoRegisterPowerSettingCallback.c)
 *     PopApplyPolicy @ 0x1408244DC (PopApplyPolicy.c)
 *     PopBatteryApplyCompositeState @ 0x1408706C0 (PopBatteryApplyCompositeState.c)
 *     PopExecutePowerAction @ 0x1409899F4 (PopExecutePowerAction.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x14032CDF4 (PopGetPolicyWorker.c)
 *     PopCheckForWork @ 0x14032CE48 (PopCheckForWork.c)
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
