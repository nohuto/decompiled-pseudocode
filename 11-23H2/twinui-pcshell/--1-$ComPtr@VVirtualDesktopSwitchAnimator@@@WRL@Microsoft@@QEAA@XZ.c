/*
 * XREFs of ??1?$ComPtr@VVirtualDesktopSwitchAnimator@@@WRL@Microsoft@@QEAA@XZ @ 0x180616738
 * Callers:
 *     _VirtualDesktopSwitchAnimator_CreateInstance_::_1_::dtor$0 @ 0x1802C4004 (_VirtualDesktopSwitchAnimator_CreateInstance_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopSwitchAnimator_VirtualDesktopSwitchAnimator_IVirtualDesktopManagerPrivate___&_IVirtualDesktopAnimationSyncNotificationServicePrivate___&_IMultitaskingViewVisibilityService___&__::_1_::dtor$2 @ 0x1802C4016 (_Microsoft--WRL--Details--MakeAndInitialize_VirtualDesktopSwitchAnimator_VirtualDesktopSwitchAni.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktopSwitchAnimator>::~ComPtr<VirtualDesktopSwitchAnimator>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<VirtualDesktopSwitchAnimator>::InternalRelease(a1);
}
