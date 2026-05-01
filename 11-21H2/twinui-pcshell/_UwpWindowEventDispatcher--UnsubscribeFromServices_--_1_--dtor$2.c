/*
 * XREFs of _UwpWindowEventDispatcher::UnsubscribeFromServices_::_1_::dtor$2 @ 0x1803F2E92
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UwpWindowEventDispatcher::UnsubscribeFromServices_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a2 + 80));
}
