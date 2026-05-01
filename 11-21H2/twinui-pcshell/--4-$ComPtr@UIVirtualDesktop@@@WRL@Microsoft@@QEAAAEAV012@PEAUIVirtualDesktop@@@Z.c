/*
 * XREFs of ??4?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktop@@@Z @ 0x18010EE24
 * Callers:
 *     ?RuntimeClassInitialize@VirtualDesktop@@QEAAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x18010E7AC (-RuntimeClassInitialize@VirtualDesktop@@QEAAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PE.c)
 *     ?PersistedStateRestored@VirtualDesktopTabletModePolicy@@UEAAXPEAUIVirtualDesktop@@@Z @ 0x1801818A0 (-PersistedStateRestored@VirtualDesktopTabletModePolicy@@UEAAXPEAUIVirtualDesktop@@@Z.c)
 *     ?SetVirtualDesktopFilter@SwitchItemFilteredCollection@@UEAAJPEAUIVirtualDesktopNotificationService@@PEAUIVirtualDesktop@@@Z @ 0x1804AB630 (-SetVirtualDesktopFilter@SwitchItemFilteredCollection@@UEAAJPEAUIVirtualDesktopNotificationServi.c)
 *     ??$MakeAndInitialize@VVirtualDesktopItem@@V1@AEAPEAUHMONITOR__@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktop@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItem@@AEAPEAUHMONITOR__@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktop@@@Z @ 0x1804B6D04 (--$MakeAndInitialize@VVirtualDesktopItem@@V1@AEAPEAUHMONITOR__@@AEAPEAUIVirtualDesktopManagerInt.c)
 *     ??$?RAEAPEAUIObjectArray@@AEAPEAUIVirtualDesktop@@@_lambda_b9b70e6c986f29daea1bfe6e23588cc6_@@QEBA?AV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@@std@@AEAPEAUIObjectArray@@AEAPEAUIVirtualDesktop@@@Z @ 0x18053D8B8 (--$-RAEAPEAUIObjectArray@@AEAPEAUIVirtualDesktop@@@_lambda_b9b70e6c986f29daea1bfe6e23588cc6_@@QE.c)
 *     ??$?RAEAPEAUIObjectArray@@AEAPEAUIVirtualDesktop@@AEAIAEAI@_lambda_55150664767eca596a859a77bb97c172_@@QEBA?AV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@II@std@@AEAPEAUIObjectArray@@AEAPEAUIVirtualDesktop@@AEAI2@Z @ 0x18053D994 (--$-RAEAPEAUIObjectArray@@AEAPEAUIVirtualDesktop@@AEAIAEAI@_lambda_55150664767eca596a859a77bb97c.c)
 *     ??$?RAEAPEAUIVirtualDesktop@@AEAPEAUHSTRING__@@@_lambda_d7371d012a69797edda603f27c068405_@@QEBA?AV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@23@@std@@AEAPEAUIVirtualDesktop@@AEAPEAUHSTRING__@@@Z @ 0x18053DBC8 (--$-RAEAPEAUIVirtualDesktop@@AEAPEAUHSTRING__@@@_lambda_d7371d012a69797edda603f27c068405_@@QEBA-.c)
 *     ??$?RPEAUIVirtualDesktop@@@_lambda_87eb5331eae8a244102276e3f1b1ee57_@@QEBA?AV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@PEAUIVirtualDesktop@@@Z @ 0x18053DC98 (--$-RPEAUIVirtualDesktop@@@_lambda_87eb5331eae8a244102276e3f1b1ee57_@@QEBA-AV-$ComPtr@UIVirtualD.c)
 *     ?RuntimeClassInitialize@VirtualDesktopAnimationSyncNotificationInstance@@QEAAJPEAUIVirtualDesktop@@0PEAUIObjectArray@@K@Z @ 0x18054D708 (-RuntimeClassInitialize@VirtualDesktopAnimationSyncNotificationInstance@@QEAAJPEAUIVirtualDeskto.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IVirtualDesktop>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    v5 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v5);
  }
  return a1;
}
