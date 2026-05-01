/*
 * XREFs of ?SetDesktopWallpaper@CVirtualDesktopManager@@WBA@EAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x18020CCC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CVirtualDesktopManager::SetDesktopWallpaper(__int64 a1, struct IVirtualDesktop *a2, HSTRING a3)
{
  return CVirtualDesktopManager::SetDesktopWallpaper((CVirtualDesktopManager *)(a1 - 16), a2, a3);
}
