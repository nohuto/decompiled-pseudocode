/*
 * XREFs of _TaskViewFrame::DismissAnimated_::_1_::dtor$10 @ 0x18021340F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TaskViewFrame::DismissAnimated_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(*(__int64 **)(a2 + 32));
}
