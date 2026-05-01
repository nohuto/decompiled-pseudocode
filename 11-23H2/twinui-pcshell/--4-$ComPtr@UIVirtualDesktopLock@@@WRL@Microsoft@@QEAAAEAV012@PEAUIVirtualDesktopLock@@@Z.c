/*
 * XREFs of ??4?$ComPtr@UIVirtualDesktopLock@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopLock@@@Z @ 0x18013BF58
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktopNotificationsDerived@@V1@AEAKAEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopNotificationsDerived@@AEAKAEAPEAUIVirtualDesktopLock@@@Z @ 0x1800FE25C (--$MakeAndInitialize@VCVirtualDesktopNotificationsDerived@@V1@AEAKAEAPEAUIVirtualDesktopLock@@@D.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopManager@@QEAAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopNotification@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopPersistence@@PEAUIUnknown@@PEAUIVirtualDesktopLock@@@Z @ 0x18013B204 (-RuntimeClassInitialize@CVirtualDesktopManager@@QEAAJPEAUIVirtualDesktopCollection@@PEAUIVirtual.c)
 *     ?RuntimeClassInitialize@VirtualDesktopAcessibility@@QEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@@Z @ 0x18013B930 (-RuntimeClassInitialize@VirtualDesktopAcessibility@@QEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktop.c)
 *     ?RuntimeClassInitialize@VirtualPinnedAppsHandler@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopRegistryHelpers@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIUnknown@@PEAUIVirtualDesktopLock@@@Z @ 0x18013B9C8 (-RuntimeClassInitialize@VirtualPinnedAppsHandler@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIV.c)
 *     ?RuntimeClassInitialize@VirtualDesktopsApi@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopLock@@@Z @ 0x18013BB50 (-RuntimeClassInitialize@VirtualDesktopsApi@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtual.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopApplicationViewEventListener@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopLock@@@Z @ 0x18013BD00 (-RuntimeClassInitialize@CVirtualDesktopApplicationViewEventListener@@QEAAJPEAUIVirtualDesktopMan.c)
 *     ?RuntimeClassInitialize@CVirtualDesktop@@QEAAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x18013BE9C (-RuntimeClassInitialize@CVirtualDesktop@@QEAAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualD.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopHolographicViewTransitionNotification@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopHolographicViewTransitionNotification@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x18013C7A0 (--$MakeAndInitialize@VCVirtualDesktopHolographicViewTransitionNotification@@V1@AEAPEAUIVirtualDe.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopHotkeyHandler@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopHotkeyHandler@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x18013CA54 (--$MakeAndInitialize@VCVirtualDesktopHotkeyHandler@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEA.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopFactory@@V1@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopFactory@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x18013CBE4 (--$MakeAndInitialize@VCVirtualDesktopFactory@@V1@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAU.c)
 *     ??$MakeAndInitialize@VVirtualDesktopTabletModePolicy@@V1@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopTabletModePolicy@@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x18013CE58 (--$MakeAndInitialize@VVirtualDesktopTabletModePolicy@@V1@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualD.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IVirtualDesktopLock>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v5);
  }
  return a1;
}
