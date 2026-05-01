/*
 * XREFs of _WindowEventDispatcher::TryShowAsViewModeAsync_::_1_::dtor$10 @ 0x1803E7013
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowEventDispatcher::TryShowAsViewModeAsync_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a2 + 152));
}
