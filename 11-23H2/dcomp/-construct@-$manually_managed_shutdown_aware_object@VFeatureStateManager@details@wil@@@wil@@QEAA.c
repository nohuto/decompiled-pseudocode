/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180085DF0
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x1800014C0 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x180085DB4 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  struct _RTL_CRITICAL_SECTION *result; // rax

  word_18021CD30 = 0;
  qword_18021CCF8 = (__int64)"WilStaging_02";
  wil::details::g_featureStateManager = 0;
  xmmword_18021CD00 = 0LL;
  xmmword_18021CD10 = 0LL;
  xmmword_18021CD20 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList(&stru_18021CD38);
  qword_18021CD80 = 0LL;
  result = wil::details_abi::SubscriptionList::SubscriptionList(&stru_18021CD88);
  qword_18021CDF0 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_18021CDD0 = 0LL;
  xmmword_18021CDE0 = 0LL;
  return result;
}
