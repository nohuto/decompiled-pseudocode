/*
 * XREFs of _UwpWindowEventDispatcher::OnShellHookMessage_::_1_::dtor$5 @ 0x1803EF3A7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UwpWindowEventDispatcher::OnShellHookMessage_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a2 + 200));
}
