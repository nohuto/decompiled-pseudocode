/*
 * XREFs of _StartupNotification::GetFileDescription_::_1_::dtor$1 @ 0x1806445F2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StartupNotification::GetFileDescription_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 160), a2);
}
