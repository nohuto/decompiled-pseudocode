/*
 * XREFs of _StartupAppMonitor::StartupToastNotifier_::_1_::dtor$11 @ 0x180640769
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StartupAppMonitor::StartupToastNotifier_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 432), a2);
}
