/*
 * XREFs of _StartupRegKeyNotification::CheckForNewStartupAppAdded_::_1_::dtor$0 @ 0x1806437E6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StartupRegKeyNotification::CheckForNewStartupAppAdded_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 512), a2);
}
