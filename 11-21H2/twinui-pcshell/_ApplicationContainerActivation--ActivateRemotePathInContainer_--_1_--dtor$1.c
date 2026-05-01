/*
 * XREFs of _ApplicationContainerActivation::ActivateRemotePathInContainer_::_1_::dtor$1 @ 0x1805726C9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ApplicationContainerActivation::ActivateRemotePathInContainer_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a2 + 40));
}
