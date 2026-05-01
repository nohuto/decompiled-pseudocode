/*
 * XREFs of _ApplicationContainerActivationPolicy::OnCreated_::_1_::dtor$1 @ 0x18057363D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ApplicationContainerActivationPolicy::OnCreated_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a2 + 32));
}
