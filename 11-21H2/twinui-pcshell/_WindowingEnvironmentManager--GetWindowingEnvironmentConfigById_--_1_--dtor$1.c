/*
 * XREFs of _WindowingEnvironmentManager::GetWindowingEnvironmentConfigById_::_1_::dtor$1 @ 0x18041B706
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowingEnvironmentManager::GetWindowingEnvironmentConfigById_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a2 + 104));
}
