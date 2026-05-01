/*
 * XREFs of _AppViewEventHelpers::details::ShellHookRegistration::OnShellHookMessage_::_1_::dtor$0 @ 0x180454F3B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AppViewEventHelpers::details::ShellHookRegistration::OnShellHookMessage_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a2 + 64));
}
