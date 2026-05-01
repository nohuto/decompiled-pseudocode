/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18017FE30
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180002A30 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x18017FDF4 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  struct _RTL_CRITICAL_SECTION *result; // rax

  word_18098D7A0 = 0;
  qword_18098D768 = (__int64)"WilStaging_02";
  wil::details::g_featureStateManager = 0;
  xmmword_18098D770 = 0LL;
  xmmword_18098D780 = 0LL;
  unk_18098D790 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList(&stru_18098D7A8);
  qword_18098D7F0 = 0LL;
  result = wil::details_abi::SubscriptionList::SubscriptionList(&stru_18098D7F8);
  qword_18098D860 = 0LL;
  wil::details::g_featureStateManager = 1;
  unk_18098D840 = 0LL;
  *(_OWORD *)&Destination = 0LL;
  return result;
}
