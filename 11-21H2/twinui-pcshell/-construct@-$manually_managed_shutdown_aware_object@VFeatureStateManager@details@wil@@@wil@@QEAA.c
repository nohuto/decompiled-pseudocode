/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180147440
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180002260 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x1801474D0 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  __int64 result; // rax

  word_1807B3AD0 = 0;
  qword_1807B3AD8 = 0LL;
  qword_1807B3A98 = (__int64)"WilStaging_02";
  wil::details::g_featureStateManager = 0;
  xmmword_1807B3AA0 = 0LL;
  xmmword_1807B3AB0 = 0LL;
  xmmword_1807B3AC0 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_1807B3AE0);
  result = wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_1807B3B28);
  qword_1807B3B90 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_1807B3B70 = 0LL;
  xmmword_1807B3B80 = 0LL;
  return result;
}
