/*
 * XREFs of ??4?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@QEAAAEAV012@$$T@Z @ 0x18057294C
 * Callers:
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z @ 0x18060C114 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IDCompThumbnail>::operator=(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(a1);
  return a1;
}
