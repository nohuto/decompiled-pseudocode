/*
 * XREFs of ??1?$ComPtr@VVirtualDesktopGestureWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x18060AA88
 * Callers:
 *     _Microsoft::WRL::Details::Make_VirtualDesktopGestureWindow_IVirtualDesktopManagerInternal___ISwitchThumbnailDeviceManager___IApplicationViewCollection___IImmersiveSettingsCache___Geometry::CRect_&_HMONITOR_____&__::_1_::dtor$0 @ 0x180609FD4 (_Microsoft--WRL--Details--Make_VirtualDesktopGestureWindow_IVirtualDesktopManagerInternal___ISwi.c)
 *     _VirtualDesktopGestureContext::Initialize_::_1_::dtor$6 @ 0x18060E675 (_VirtualDesktopGestureContext--Initialize_--_1_--dtor$6.c)
 *     _CWRLImpWndProc_VirtualDesktopGestureWindow_::s_WndProcBase_::_1_::dtor$0 @ 0x180613034 (_CWRLImpWndProc_VirtualDesktopGestureWindow_--s_WndProcBase_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::Make_VirtualDesktopHotKeyWindow_IVirtualDesktopManagerPrivate___ISwitchThumbnailDeviceManager___IApplicationViewCollection___IImmersiveSettingsCache___Geometry::CRect_&_HMONITOR_____&__::_1_::dtor$0 @ 0x1806166E0 (_Microsoft--WRL--Details--Make_VirtualDesktopHotKeyWindow_IVirtualDesktopManagerPrivate___ISwitc.c)
 *     ?AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@W4VirtualDesktopSwitchType@@@Z @ 0x18061684C (-AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitc.c)
 *     _VirtualDesktopSwitchAnimator::AnimateOperation2_::_1_::dtor$6 @ 0x1806171CF (_VirtualDesktopSwitchAnimator--AnimateOperation2_--_1_--dtor$6.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>::~ComPtr<VirtualDesktopGestureWindow>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(result + 16) + 16LL))(result + 16);
  }
  return result;
}
