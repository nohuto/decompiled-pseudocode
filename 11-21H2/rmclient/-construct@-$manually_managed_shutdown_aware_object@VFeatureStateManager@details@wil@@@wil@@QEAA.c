/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18000A894
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001460 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x18000CBA4 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  __int64 result; // rax

  word_1800329B0 = 0;
  qword_1800329B8 = 0LL;
  qword_180032978 = (__int64)"WilStaging_02";
  wil::details::g_featureStateManager = 0;
  xmmword_180032980 = 0LL;
  xmmword_180032990 = 0LL;
  xmmword_1800329A0 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_1800329C0);
  result = wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_180032A08);
  qword_180032A70 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_180032A50 = 0LL;
  xmmword_180032A60 = 0LL;
  return result;
}
