/*
 * XREFs of _HolographicPositioner::_EvaluateTakingControlOfWin32Slate_::_1_::dtor$1 @ 0x1803D1AC9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HolographicPositioner::_EvaluateTakingControlOfWin32Slate_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a2 + 32));
}
