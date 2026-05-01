/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PinManager::CopyShortcut_::_1_::dtor$1 @ 0x1806A042D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::CopyShortcut_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 168), a2);
}
