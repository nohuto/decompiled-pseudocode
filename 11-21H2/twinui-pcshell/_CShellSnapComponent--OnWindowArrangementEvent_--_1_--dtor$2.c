/*
 * XREFs of _CShellSnapComponent::OnWindowArrangementEvent_::_1_::dtor$2 @ 0x1805955D8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CShellSnapComponent::OnWindowArrangementEvent_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a2 + 112));
}
