/*
 * XREFs of _UwpWindowWrapper::v_PushBoundsToAppView_::_1_::dtor$11 @ 0x1804073EE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UwpWindowWrapper::v_PushBoundsToAppView_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a2 + 96));
}
