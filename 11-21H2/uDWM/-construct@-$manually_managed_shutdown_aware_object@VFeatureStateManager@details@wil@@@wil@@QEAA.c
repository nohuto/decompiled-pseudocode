/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x1800141D4
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001040 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x18003F6B4 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  __int64 result; // rax

  word_180142DA0 = 0;
  qword_180142DA8 = 0LL;
  qword_180142D68 = (__int64)"WilStaging_02";
  wil::details::g_featureStateManager = 0;
  xmmword_180142D70 = 0LL;
  xmmword_180142D80 = 0LL;
  xmmword_180142D90 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_180142DB0);
  result = wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_180142DF8);
  qword_180142E60 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_180142E40 = 0LL;
  xmmword_180142E50 = 0LL;
  return result;
}
