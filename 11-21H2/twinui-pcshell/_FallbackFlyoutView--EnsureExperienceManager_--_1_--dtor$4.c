/*
 * XREFs of _FallbackFlyoutView::EnsureExperienceManager_::_1_::dtor$4 @ 0x1805D1E42
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FallbackFlyoutView::EnsureExperienceManager_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a2 + 40));
}
