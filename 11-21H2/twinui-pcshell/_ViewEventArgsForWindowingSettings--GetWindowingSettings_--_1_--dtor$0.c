/*
 * XREFs of _ViewEventArgsForWindowingSettings::GetWindowingSettings_::_1_::dtor$0 @ 0x1803E47AF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewEventArgsForWindowingSettings::GetWindowingSettings_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a2 + 64));
}
