/*
 * XREFs of _UwpWindowWrapper::v_TryBack_::_1_::dtor$1 @ 0x18040773B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UwpWindowWrapper::v_TryBack_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a2 + 64));
}
