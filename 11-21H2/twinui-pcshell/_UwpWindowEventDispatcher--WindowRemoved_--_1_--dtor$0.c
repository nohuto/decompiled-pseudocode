/*
 * XREFs of _UwpWindowEventDispatcher::WindowRemoved_::_1_::dtor$0 @ 0x1803F81E2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UwpWindowEventDispatcher::WindowRemoved_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a2 + 104));
}
