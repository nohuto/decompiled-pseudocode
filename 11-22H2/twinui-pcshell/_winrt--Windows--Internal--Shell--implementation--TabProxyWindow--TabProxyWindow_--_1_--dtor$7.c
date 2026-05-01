/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TabProxyWindow_::_1_::dtor$7 @ 0x1802BE6F7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TabProxyWindow_::_1_::dtor_7(
        __int64 a1,
        __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 128) + 112LL));
}
