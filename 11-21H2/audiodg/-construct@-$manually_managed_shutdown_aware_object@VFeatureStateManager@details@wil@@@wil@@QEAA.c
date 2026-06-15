/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x14002CE28
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x140001470 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x14002CEB8 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  __int64 result; // rax

  word_1400C1460 = 0;
  qword_1400C1468 = 0LL;
  qword_1400C1428 = (__int64)"WilStaging_02";
  wil::details::g_featureStateManager = 0;
  xmmword_1400C1430 = 0LL;
  xmmword_1400C1440 = 0LL;
  xmmword_1400C1450 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_1400C1470);
  result = wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_1400C14B8);
  qword_1400C1520 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_1400C1500 = 0LL;
  xmmword_1400C1510 = 0LL;
  return result;
}
