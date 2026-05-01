/*
 * XREFs of _CVirtualDesktopSoftLandingHandler::CVirtualDesktopSoftLandingHandler_::_1_::dtor$1 @ 0x18021A93F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualDesktopSoftLandingHandler::CVirtualDesktopSoftLandingHandler_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 48) + 32LL));
}
