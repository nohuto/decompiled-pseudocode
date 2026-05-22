/*
 * XREFs of ?AddRef@?$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositor@234@UICompositor3@234@UICompositorWithBlurredWallpaperBackdropBrush@234@@WRL2@Microsoft@@UEAAKXZ @ 0x18007DA00
 * Callers:
 *     ?AddRef@?$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositor@234@UICompositor3@234@UICompositorWithBlurredWallpaperBackdropBrush@234@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800ABA10 (-AddRef@-$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositor@23_ea_1800ABA10.c)
 *     ?AddRef@?$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositor@234@UICompositor3@234@UICompositorWithBlurredWallpaperBackdropBrush@234@@WRL2@Microsoft@@WBA@EAAKXZ @ 0x1800ABA30 (-AddRef@-$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositor@23_ea_1800ABA30.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Compositor,Windows::UI::Composition::ICompositor,Windows::UI::Composition::ICompositor3,Windows::UI::Composition::ICompositorWithBlurredWallpaperBackdropBrush>::AddRef(
        __int64 a1)
{
  volatile signed __int32 *v1; // rcx
  unsigned __int32 v2; // ebx

  v1 = (volatile signed __int32 *)(a1 - 1080);
  v2 = _InterlockedIncrement(v1 + 4);
  if ( v2 == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 80LL))(v1);
  return v2;
}
