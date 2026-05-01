/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PinManager::CopyShortcut_::_1_::dtor$2 @ 0x1806A0439
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::CopyShortcut_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 144));
}
