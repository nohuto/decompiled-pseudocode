/*
 * XREFs of _XamlSnapAssistViewHost::Show_::_1_::dtor$8 @ 0x180603C3A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall XamlSnapAssistViewHost::Show_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a2 + 96));
}
