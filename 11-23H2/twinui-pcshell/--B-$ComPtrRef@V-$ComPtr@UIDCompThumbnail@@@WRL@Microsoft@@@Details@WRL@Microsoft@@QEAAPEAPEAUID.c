/*
 * XREFs of ??B?$ComPtrRef@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUIDCompThumbnail@@XZ @ 0x18056CABC
 * Callers:
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z @ 0x18060C114 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z.c)
 *     ?Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z @ 0x18060E688 (-Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IDCompThumbnail>>::operator IDCompThumbnail * *(
        __int64 **a1)
{
  __int64 *v1; // rbx

  v1 = *a1;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(*a1);
  return v1;
}
