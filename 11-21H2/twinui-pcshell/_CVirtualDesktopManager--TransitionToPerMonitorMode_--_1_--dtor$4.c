/*
 * XREFs of _CVirtualDesktopManager::TransitionToPerMonitorMode_::_1_::dtor$4 @ 0x18054BC21
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualDesktopManager::TransitionToPerMonitorMode_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a2 + 304));
}
