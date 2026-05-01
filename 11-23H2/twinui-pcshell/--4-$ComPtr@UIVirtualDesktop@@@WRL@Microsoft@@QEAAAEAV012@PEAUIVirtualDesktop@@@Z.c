/*
 * XREFs of ??4?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktop@@@Z @ 0x18013959C
 * Callers:
 *     ?RuntimeClassInitialize@VirtualDesktop@@QEAAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x1801394CC (-RuntimeClassInitialize@VirtualDesktop@@QEAAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PE.c)
 *     ?PersistedStateRestored@VirtualDesktopTabletModePolicy@@UEAAXPEAUIVirtualDesktop@@@Z @ 0x1801BF2A0 (-PersistedStateRestored@VirtualDesktopTabletModePolicy@@UEAAXPEAUIVirtualDesktop@@@Z.c)
 *     ?SetVirtualDesktopFilter@SwitchItemFilteredCollection@@UEAAJPEAUIVirtualDesktopNotificationService@@PEAUIVirtualDesktop@@@Z @ 0x180568110 (-SetVirtualDesktopFilter@SwitchItemFilteredCollection@@UEAAJPEAUIVirtualDesktopNotificationServi.c)
 *     ??$MakeAndInitialize@VVirtualDesktopItem@@V1@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktop@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItem@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktop@@@Z @ 0x180571550 (--$MakeAndInitialize@VVirtualDesktopItem@@V1@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirt.c)
 *     ??$?RAEAPEAUIVirtualDesktop@@AEAIAEAI@_lambda_66bc8e2eef54da231fbab9359c259283_@@QEBA?A_PAEAPEAUIVirtualDesktop@@AEAI1@Z @ 0x1805F86A8 (--$-RAEAPEAUIVirtualDesktop@@AEAIAEAI@_lambda_66bc8e2eef54da231fbab9359c259283_@@QEBA-A_PAEAPEAU.c)
 *     ??$?RAEAPEAUIVirtualDesktop@@AEAPEAUHSTRING__@@@_lambda_18d3c2c80d2d5ec53b93450baefc9fd9_@@QEBA?A_PAEAPEAUIVirtualDesktop@@AEAPEAUHSTRING__@@@Z @ 0x1805F876C (--$-RAEAPEAUIVirtualDesktop@@AEAPEAUHSTRING__@@@_lambda_18d3c2c80d2d5ec53b93450baefc9fd9_@@QEBA-.c)
 *     ??$?RAEAPEAUIVirtualDesktop@@AEAW4VirtualDesktopSwitchType@@@_lambda_c67266786afa5014962096fb4a54600c_@@QEBA?A_PAEAPEAUIVirtualDesktop@@AEAW4VirtualDesktopSwitchType@@@Z @ 0x1805F883C (--$-RAEAPEAUIVirtualDesktop@@AEAW4VirtualDesktopSwitchType@@@_lambda_c67266786afa5014962096fb4a5.c)
 *     ??$?RPEAUIVirtualDesktop@@@_lambda_b81b832159b485d6d1346c15f32bb4cd_@@QEBA?A_PPEAUIVirtualDesktop@@@Z @ 0x1805F88E0 (--$-RPEAUIVirtualDesktop@@@_lambda_b81b832159b485d6d1346c15f32bb4cd_@@QEBA-A_PPEAUIVirtualDeskto.c)
 *     ??$AddRefCountWrappers@PEAUIVirtualDesktop@@@@YAJV?$tuple@PEAUIVirtualDesktop@@@std@@PEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@1@@Z @ 0x1805F8938 (--$AddRefCountWrappers@PEAUIVirtualDesktop@@@@YAJV-$tuple@PEAUIVirtualDesktop@@@std@@PEAV-$tuple.c)
 *     ?RuntimeClassInitialize@VirtualDesktopAnimationSyncNotificationInstance@@QEAAJPEAUIVirtualDesktop@@0PEAUIObjectArray@@K@Z @ 0x180608C00 (-RuntimeClassInitialize@VirtualDesktopAnimationSyncNotificationInstance@@QEAAJPEAUIVirtualDeskto.c)
 *     ?IsAdjacentDesktopRemote@VirtualDesktopGestureWindow@@IEAAJPEAHPEAUIVirtualDesktop@@@Z @ 0x18060F8BC (-IsAdjacentDesktopRemote@VirtualDesktopGestureWindow@@IEAAJPEAHPEAUIVirtualDesktop@@@Z.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@AEAAJPEA_NPEAUIVirtualDesktop@@V?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@IUtagRECT@@@Z @ 0x18061910C (-CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@AEAAJPEA_NPEAUIVirtualDesktop@@V-$shared_any_.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
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
