/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x140027474
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x1400020F0 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x140080240 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  __int64 result; // rax

  word_1400CF598 = 0;
  qword_1400CF560 = (__int64)"WilStaging_02";
  wil::details::g_featureStateManager = 0;
  xmmword_1400CF568 = 0LL;
  *(_OWORD *)&SRWLock.Ptr = 0LL;
  xmmword_1400CF588 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_1400CF5A0);
  qword_1400CF5E8 = 0LL;
  result = wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_1400CF5F0);
  qword_1400CF658 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_1400CF638 = 0LL;
  xmmword_1400CF648 = 0LL;
  return result;
}
