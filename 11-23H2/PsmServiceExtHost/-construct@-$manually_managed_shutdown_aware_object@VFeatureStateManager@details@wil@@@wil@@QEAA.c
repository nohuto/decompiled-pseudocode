/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180042250
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001D30 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x180042214 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  struct _RTL_CRITICAL_SECTION *result; // rax

  word_1800DC390 = 0;
  qword_1800DC358 = (__int64)"WilStaging_02";
  wil::details::g_featureStateManager = 0;
  xmmword_1800DC360 = 0LL;
  *(_OWORD *)&stru_1800DC370.Ptr = 0LL;
  xmmword_1800DC380 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList(&CriticalSection);
  qword_1800DC3E0 = 0LL;
  result = wil::details_abi::SubscriptionList::SubscriptionList(&stru_1800DC3E8);
  qword_1800DC450 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_1800DC430 = 0LL;
  xmmword_1800DC440 = 0LL;
  return result;
}
