/*
 * XREFs of _UwpWindowEventDispatcher::UwpWindowVisibilityChanged_::_1_::dtor$3 @ 0x1803F7FD7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UwpWindowEventDispatcher::UwpWindowVisibilityChanged_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a2 + 56));
}
