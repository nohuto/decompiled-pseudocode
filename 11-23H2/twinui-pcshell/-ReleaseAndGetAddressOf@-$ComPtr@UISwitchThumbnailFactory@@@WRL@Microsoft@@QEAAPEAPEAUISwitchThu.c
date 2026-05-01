/*
 * XREFs of ?ReleaseAndGetAddressOf@?$ComPtr@UISwitchThumbnailFactory@@@WRL@Microsoft@@QEAAPEAPEAUISwitchThumbnailFactory@@XZ @ 0x18056EAB4
 * Callers:
 *     ?Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z @ 0x18060E688 (-Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z.c)
 *     ?Initialize@VirtualDesktopHotKeyWindow@@QEAAJXZ @ 0x180619924 (-Initialize@VirtualDesktopHotKeyWindow@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<ISwitchThumbnailFactory>::ReleaseAndGetAddressOf(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(a1);
  return a1;
}
