/*
 * XREFs of ?RuntimeClassInitialize@HotkeyHandler@@QEAAJPEAUIPriviledgedPositioner@@PEAUISnapAssistController@@PEAUIImmersiveMonitorManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@PEAUITabletModeController@@@Z @ 0x18013A1DC
 * Callers:
 *     ??$MakeAndInitialize@VHotkeyHandler@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUISnapAssistController@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIApplicationViewCollection@@AEAPEAUIImmersiveSettingsCache@@AEAPEAUITabletModeController@@@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyHandler@@AEAPEAUIPriviledgedPositioner@@AEAPEAUISnapAssistController@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIApplicationViewCollection@@AEAPEAUIImmersiveSettingsCache@@AEAPEAUITabletModeController@@@Z @ 0x18019124C (--$MakeAndInitialize@VHotkeyHandler@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUISnapAssistControl.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UITabletModeController@@@WRL@Microsoft@@QEAAAEAV012@PEAUITabletModeController@@@Z @ 0x18013A294 (--4-$ComPtr@UITabletModeController@@@WRL@Microsoft@@QEAAAEAV012@PEAUITabletModeController@@@Z.c)
 *     ??4?$ComPtr@UIImmersiveSettingsCache@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveSettingsCache@@@Z @ 0x18013A2E4 (--4-$ComPtr@UIImmersiveSettingsCache@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveSettingsCache@@@.c)
 *     ??4?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@@@Z @ 0x18013A3B0 (--4-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@.c)
 *     ??4?$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollection@@@Z @ 0x18013A7FC (--4-$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollect.c)
 *     ??4?$ComPtr@UIPriviledgedPositioner@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPriviledgedPositioner@@@Z @ 0x18013AB40 (--4-$ComPtr@UIPriviledgedPositioner@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPriviledgedPositioner@@@Z.c)
 *     ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x1801B225C (-IsShellLauncherEnabledForCurrentUser@@YA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HotkeyHandler::RuntimeClassInitialize(
        HotkeyHandler *this,
        struct IPriviledgedPositioner *a2,
        struct ISnapAssistController *a3,
        struct IImmersiveMonitorManager *a4,
        struct IApplicationViewCollection *a5,
        struct IImmersiveSettingsCache *a6,
        struct ITabletModeController *a7)
{
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<IPriviledgedPositioner>::operator=((char *)this + 16, a2);
  if ( *((struct ISnapAssistController **)this + 3) != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(struct ISnapAssistController *))(*(_QWORD *)a3 + 8LL))(a3);
    v11 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = a3;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v11);
  }
  Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=((char *)this + 48, a4);
  Microsoft::WRL::ComPtr<IApplicationViewCollection>::operator=((char *)this + 56);
  Microsoft::WRL::ComPtr<IImmersiveSettingsCache>::operator=((char *)this + 64, a6);
  Microsoft::WRL::ComPtr<ITabletModeController>::operator=((char *)this + 72, a7);
  *((_BYTE *)this + 408) = IsShellLauncherEnabledForCurrentUser();
  return 0LL;
}
