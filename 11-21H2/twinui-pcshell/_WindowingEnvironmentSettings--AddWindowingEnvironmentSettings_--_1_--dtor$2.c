/*
 * XREFs of _WindowingEnvironmentSettings::AddWindowingEnvironmentSettings_::_1_::dtor$2 @ 0x1803E06C4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowingEnvironmentSettings::AddWindowingEnvironmentSettings_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a2 + 96));
}
