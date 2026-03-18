/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x140003CE4
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x140001040 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x140003CA8 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  struct _RTL_CRITICAL_SECTION *result; // rax

  word_140017A08 = 0;
  qword_1400179D0 = (__int64)"WilStaging_02";
  wil::details::g_featureStateManager = 0;
  xmmword_1400179D8 = 0LL;
  xmmword_1400179E8 = 0LL;
  xmmword_1400179F8 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList(&stru_140017A10);
  qword_140017A58 = 0LL;
  result = wil::details_abi::SubscriptionList::SubscriptionList(&stru_140017A60);
  qword_140017AC8 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_140017AA8 = 0LL;
  xmmword_140017AB8 = 0LL;
  return result;
}
