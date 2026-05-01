/*
 * XREFs of _UwpWindowWrapperBase::CachePersistingStateName_::_1_::dtor$4 @ 0x1804143F2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UwpWindowWrapperBase::CachePersistingStateName_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a2 + 120));
}
