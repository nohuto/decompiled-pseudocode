/*
 * XREFs of _FallbackFlyoutView::EnsureExperienceManager_::_1_::dtor$6 @ 0x1805D1E5A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FallbackFlyoutView::EnsureExperienceManager_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a2 + 56));
}
