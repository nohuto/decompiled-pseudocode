/*
 * XREFs of _WindowWrapper::WindowWrapper_::_1_::dtor$2 @ 0x180219E97
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowWrapper::WindowWrapper_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 128) + 632LL));
}
