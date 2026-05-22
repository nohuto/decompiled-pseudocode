/*
 * XREFs of ??1?$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001ACF0
 * Callers:
 *     ?InitializeBase@SystemCursorServiceBase@@IEAAJXZ @ 0x18004508C (-InitializeBase@SystemCursorServiceBase@@IEAAJXZ.c)
 *     ?CreateInteropCompositor@WindowsCompositionGlobals@SystemCursors@@SAJPEAPEAUICompositor@Composition@UI@Windows@@@Z @ 0x1800458AC (-CreateInteropCompositor@WindowsCompositionGlobals@SystemCursors@@SAJPEAPEAUICompositor@Composit.c)
 *     _SystemCursors::WindowsCompositionGlobals::CreateInteropCompositor_::_1_::dtor$3 @ 0x18006F2D6 (_SystemCursors--WindowsCompositionGlobals--CreateInteropCompositor_--_1_--dtor$3.c)
 *     _dynamic_atexit_destructor_for__MPCManagerClientFactory::m_spThreadReference__ @ 0x18006FFA0 (_dynamic_atexit_destructor_for__MPCManagerClientFactory--m_spThreadReference__.c)
 *     ??1?$unique_ptr@VWindowsCompositionGlobals@SystemCursors@@U?$default_delete@VWindowsCompositionGlobals@SystemCursors@@@std@@@std@@QEAA@XZ @ 0x180104330 (--1-$unique_ptr@VWindowsCompositionGlobals@SystemCursors@@U-$default_delete@VWindowsCompositionG.c)
 *     ??1SystemCursorService2@@UEAA@XZ @ 0x180104420 (--1SystemCursorService2@@UEAA@XZ.c)
 *     ??1SystemCursorServiceBase@@UEAA@XZ @ 0x180104568 (--1SystemCursorServiceBase@@UEAA@XZ.c)
 *     ??_ESystemCursorServiceBase@@UEAAPEAXI@Z @ 0x180104780 (--_ESystemCursorServiceBase@@UEAAPEAXI@Z.c)
 *     ??_EDesktopSystemCursorService@@UEAAPEAXI@Z @ 0x180107070 (--_EDesktopSystemCursorService@@UEAAPEAXI@Z.c)
 *     ?Initialize@HardwareCursorVisual@SystemCursors@@UEAAJXZ @ 0x180107430 (-Initialize@HardwareCursorVisual@SystemCursors@@UEAAJXZ.c)
 *     _SystemCursors::HardwareCursorVisual::Initialize_::_1_::dtor$1 @ 0x1801076C2 (_SystemCursors--HardwareCursorVisual--Initialize_--_1_--dtor$1.c)
 *     ?Initialize@SharedTargetWithHandle@SystemCursors@@QEAAJXZ @ 0x180175C7C (-Initialize@SharedTargetWithHandle@SystemCursors@@QEAAJXZ.c)
 *     _SystemCursors::SharedTargetWithHandle::Initialize_::_1_::dtor$0 @ 0x180175EE3 (_SystemCursors--SharedTargetWithHandle--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
