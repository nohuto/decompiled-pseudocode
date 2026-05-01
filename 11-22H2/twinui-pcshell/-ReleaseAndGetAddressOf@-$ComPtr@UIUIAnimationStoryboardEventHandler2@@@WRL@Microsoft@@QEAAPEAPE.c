/*
 * XREFs of ?ReleaseAndGetAddressOf@?$ComPtr@UIUIAnimationStoryboardEventHandler2@@@WRL@Microsoft@@QEAAPEAPEAUIUIAnimationStoryboardEventHandler2@@XZ @ 0x180582BD8
 * Callers:
 *     ?Commit@VirtualDesktopHotKeyWindow@@QEAAJPEAUIVirtualDesktopSwitchAnimator2@@M@Z @ 0x180618F98 (-Commit@VirtualDesktopHotKeyWindow@@QEAAJPEAUIVirtualDesktopSwitchAnimator2@@M@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IUIAnimationStoryboardEventHandler2>::ReleaseAndGetAddressOf(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
  return a1;
}
