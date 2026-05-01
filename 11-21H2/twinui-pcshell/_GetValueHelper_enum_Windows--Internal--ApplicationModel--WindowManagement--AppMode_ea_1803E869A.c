/*
 * XREFs of _GetValueHelper_enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelVisibility__::_1_::dtor$1 @ 0x1803E869A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GetValueHelper_enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelVisibility__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a2 + 64));
}
