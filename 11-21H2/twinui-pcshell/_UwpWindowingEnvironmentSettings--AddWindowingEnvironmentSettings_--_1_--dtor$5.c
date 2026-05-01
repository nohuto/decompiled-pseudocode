/*
 * XREFs of _UwpWindowingEnvironmentSettings::AddWindowingEnvironmentSettings_::_1_::dtor$5 @ 0x1803EBEF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UwpWindowingEnvironmentSettings::AddWindowingEnvironmentSettings_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a2 + 128));
}
