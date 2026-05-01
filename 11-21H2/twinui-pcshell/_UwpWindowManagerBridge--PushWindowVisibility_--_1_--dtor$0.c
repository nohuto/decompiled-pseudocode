/*
 * XREFs of _UwpWindowManagerBridge::PushWindowVisibility_::_1_::dtor$0 @ 0x180402AD7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UwpWindowManagerBridge::PushWindowVisibility_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a2 + 88));
}
