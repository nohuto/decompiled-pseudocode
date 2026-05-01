/*
 * XREFs of _StartupAppMonitor::StartupToastNotifier_::_1_::dtor$32 @ 0x180640715
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StartupAppMonitor::StartupToastNotifier_::_1_::dtor_32(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 528), a2);
}
