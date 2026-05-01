/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::RegisterTaskbarGlom_::_1_::dtor$0 @ 0x18057C033
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::RegisterTaskbarGlom_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a2 + 64));
}
