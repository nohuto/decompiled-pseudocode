/*
 * XREFs of _StartupRegKeyNotification::CheckForNewStartupAppAdded_::_1_::dtor$1 @ 0x1806437F2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StartupRegKeyNotification::CheckForNewStartupAppAdded_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 576), a2);
}
