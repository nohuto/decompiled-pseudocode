/*
 * XREFs of _XamlSnapAssistViewController::DismissViewAnimated_::_1_::dtor$2 @ 0x1806112A9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall XamlSnapAssistViewController::DismissViewAnimated_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a2 + 48));
}
