/*
 * XREFs of _WindowRelativePositioning::GetAdjacentPosition_::_1_::dtor$7 @ 0x1804FE836
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowRelativePositioning::GetAdjacentPosition_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a2 + 104));
}
