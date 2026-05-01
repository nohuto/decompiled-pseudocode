/*
 * XREFs of ?RuntimeClassInitialize@HotkeyHandler@@QEAAJPEAUIPriviledgedPositioner@@PEAUISnapAssistController@@PEAUIImmersiveMonitorManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@PEAUITabletModeController@@@Z @ 0x1800FD824
 * Callers:
 *     ??$MakeAndInitialize@VHotkeyHandler@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUISnapAssistController@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIApplicationViewCollection@@AEAPEAUIImmersiveSettingsCache@@AEAPEAUITabletModeController@@@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyHandler@@AEAPEAUIPriviledgedPositioner@@AEAPEAUISnapAssistController@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIApplicationViewCollection@@AEAPEAUIImmersiveSettingsCache@@AEAPEAUITabletModeController@@@Z @ 0x1800FF3E4 (--$MakeAndInitialize@VHotkeyHandler@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUISnapAssistControl.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x1800FD8E0 (-IsShellLauncherEnabledForCurrentUser@@YA_NXZ.c)
 *     ??4?$ComPtr@UITabletModeController@@@WRL@Microsoft@@QEAAAEAV012@PEAUITabletModeController@@@Z @ 0x1800FD9E4 (--4-$ComPtr@UITabletModeController@@@WRL@Microsoft@@QEAAAEAV012@PEAUITabletModeController@@@Z.c)
 *     ??4?$ComPtr@UIImmersiveSettingsCache@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveSettingsCache@@@Z @ 0x1800FE0AC (--4-$ComPtr@UIImmersiveSettingsCache@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveSettingsCache@@@.c)
 *     ??4?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@@@Z @ 0x1800FE170 (--4-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@.c)
 *     ??4?$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollection@@@Z @ 0x1800FE5EC (--4-$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollect.c)
 *     ??4?$ComPtr@UIPriviledgedPositioner@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPriviledgedPositioner@@@Z @ 0x1800FE704 (--4-$ComPtr@UIPriviledgedPositioner@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPriviledgedPositioner@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
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
  struct ISnapAssistController *v10; // rax
  struct ISnapAssistController *v12; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<IPriviledgedPositioner>::operator=((char *)this + 16, a2);
  v10 = (struct ISnapAssistController *)*((_QWORD *)this + 3);
  if ( v10 != a3 )
  {
    if ( a3 )
    {
      (*(void (__fastcall **)(struct ISnapAssistController *))(*(_QWORD *)a3 + 8LL))(a3);
      v10 = (struct ISnapAssistController *)*((_QWORD *)this + 3);
    }
    v12 = v10;
    *((_QWORD *)this + 3) = a3;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v12);
  }
  Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=((char *)this + 48, a4);
  Microsoft::WRL::ComPtr<IApplicationViewCollection>::operator=((char *)this + 56, a5);
  Microsoft::WRL::ComPtr<IImmersiveSettingsCache>::operator=((char *)this + 64, a6);
  Microsoft::WRL::ComPtr<ITabletModeController>::operator=((char *)this + 72, a7);
  *((_BYTE *)this + 408) = IsShellLauncherEnabledForCurrentUser();
  return 0LL;
}
