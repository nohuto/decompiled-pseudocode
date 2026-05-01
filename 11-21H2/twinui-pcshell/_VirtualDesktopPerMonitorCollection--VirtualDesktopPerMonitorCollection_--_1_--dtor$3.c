/*
 * XREFs of _VirtualDesktopPerMonitorCollection::VirtualDesktopPerMonitorCollection_::_1_::dtor$3 @ 0x18021B2D8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopPerMonitorCollection::VirtualDesktopPerMonitorCollection_::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 48) + 112LL));
}
