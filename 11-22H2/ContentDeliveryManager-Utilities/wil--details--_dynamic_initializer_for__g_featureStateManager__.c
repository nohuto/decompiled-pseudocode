/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180004260
 * Callers:
 *     <none>
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x18002B37C (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_180194950);
  qword_180194998 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_1801949A0);
  qword_180194A08 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_1801949E8 = 0LL;
  xmmword_1801949F8 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
