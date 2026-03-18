/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x1400033A0
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x140001160 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x140003364 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  struct _RTL_CRITICAL_SECTION *result; // rax

  word_1400169F8 = 0;
  qword_1400169C0 = (__int64)"WilStaging_02";
  wil::details::g_featureStateManager = 0;
  xmmword_1400169C8 = 0LL;
  xmmword_1400169D8 = 0LL;
  xmmword_1400169E8 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList(&stru_140016A00);
  qword_140016A48 = 0LL;
  result = wil::details_abi::SubscriptionList::SubscriptionList(&stru_140016A50);
  qword_140016AB8 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_140016A98 = 0LL;
  xmmword_140016AA8 = 0LL;
  return result;
}
