/*
 * XREFs of ?Release@?$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositor@234@UICompositor3@234@UICompositorWithBlurredWallpaperBackdropBrush@234@@WRL2@Microsoft@@UEAAKXZ @ 0x18007DA40
 * Callers:
 *     ?Release@?$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositor@234@UICompositor3@234@UICompositorWithBlurredWallpaperBackdropBrush@234@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800AC9F0 (-Release@-$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositor@2_ea_1800AC9F0.c)
 *     ?Release@?$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositor@234@UICompositor3@234@UICompositorWithBlurredWallpaperBackdropBrush@234@@WRL2@Microsoft@@WBA@EAAKXZ @ 0x1800ACA10 (-Release@-$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositor@2_ea_1800ACA10.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Compositor,Windows::UI::Composition::ICompositor,Windows::UI::Composition::ICompositor3,Windows::UI::Composition::ICompositorWithBlurredWallpaperBackdropBrush>::Release(
        __int64 a1)
{
  volatile signed __int32 *v1; // rcx
  unsigned __int32 v2; // ebx
  __int64 v4; // rdx

  v1 = (volatile signed __int32 *)(a1 - 1080);
  v2 = _InterlockedDecrement(v1 + 4);
  if ( !v2 )
  {
    v4 = *(_QWORD *)v1;
    LOBYTE(v4) = 1;
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 64LL))(v1, v4);
  }
  return v2;
}
