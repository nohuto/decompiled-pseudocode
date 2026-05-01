/*
 * XREFs of _UwpWindowEventDispatcher::TryShowAsViewModeAsync_::_1_::dtor$9 @ 0x1803F2945
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UwpWindowEventDispatcher::TryShowAsViewModeAsync_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a2 + 136));
}
