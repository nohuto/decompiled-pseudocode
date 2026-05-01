/*
 * XREFs of _AppViewDataSourceAdapterBase::TryGetSelectedTabForView_::_1_::dtor$0 @ 0x18045570A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AppViewDataSourceAdapterBase::TryGetSelectedTabForView_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a2 + 48));
}
