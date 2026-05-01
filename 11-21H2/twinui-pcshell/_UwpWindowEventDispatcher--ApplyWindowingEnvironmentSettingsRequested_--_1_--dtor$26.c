/*
 * XREFs of _UwpWindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$26 @ 0x1803ECC08
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UwpWindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor_26(
        __int64 a1,
        __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a2 + 80));
}
