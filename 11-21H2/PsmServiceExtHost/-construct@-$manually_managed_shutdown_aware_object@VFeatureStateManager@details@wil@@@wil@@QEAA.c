/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18004280C
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001060 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x1800428F0 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  __int64 result; // rax

  word_1800DD300 = 0;
  qword_1800DD308 = 0LL;
  qword_1800DD2C8 = (__int64)"WilStaging_02";
  wil::details::g_featureStateManager = 0;
  xmmword_1800DD2D0 = 0LL;
  xmmword_1800DD2E0 = 0LL;
  xmmword_1800DD2F0 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_1800DD310);
  result = wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_1800DD358);
  qword_1800DD3C0 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_1800DD3A0 = 0LL;
  xmmword_1800DD3B0 = 0LL;
  return result;
}
