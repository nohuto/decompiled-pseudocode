/*
 * XREFs of ??4?$com_ptr_t@UIRemoteSessionWindowManager@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIRemoteSessionWindowManager@Shell@Internal@Windows@@@Z @ 0x18013A8F4
 * Callers:
 *     ?Initialize@VirtualDesktopController@@UEAAJPEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@PEAUIVirtualDesktopDataSourceInternal@@AEBV?$com_ptr_t@UIRemoteSessionWindowManager@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIUnknown@@@Z @ 0x180139470 (-Initialize@VirtualDesktopController@@UEAAJPEAUIVirtualDesktopPinnedApps@@PEAUIVirt_ea_180139470.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs@1@@Z @ 0x180139680 (-RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs.c)
 *     ?SetRemoteSessionWindowManager@CVirtualDesktopManager@@UEAAXAEBV?$com_ptr_t@UIRemoteSessionWindowManager@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180139B30 (-SetRemoteSessionWindowManager@CVirtualDesktopManager@@UEAAXAEBV-$com_ptr_t@UIRemoteSessionWindo.c)
 *     ?DelayInitialize@CVirtualDesktopHotkeyHandler@@UEAAJPEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIImmersiveSettingsCache@@PEAUIImmersiveMonitorManager@@AEBV?$com_ptr_t@UIRemoteSessionWindowManager@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180139CB0 (-DelayInitialize@CVirtualDesktopHotkeyHandler@@UEAAJPEAUISwitchThumbnailDeviceManager@@PEAUIAppl.c)
 *     ?DelayInitialize@CVirtualDesktopHotkeyHandler@@UEAAJPEAUIVirtualDesktopSwitchAnimator@@AEBV?$com_ptr_t@UIRemoteSessionWindowManager@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180608EA0 (-DelayInitialize@CVirtualDesktopHotkeyHandler@@UEAAJPEAUIVirtualDesktopSwitchAnimator@@AEBV-$com.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<Windows::Internal::Shell::IRemoteSessionWindowManager,wil::err_exception_policy>::operator=(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rdi

  v3 = *a1;
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return a1;
}
