/*
 * XREFs of _CShellSnapComponent::ToggleSnapFlyout_::_1_::dtor$0 @ 0x1805977F2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CShellSnapComponent::ToggleSnapFlyout_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a2 + 56));
}
