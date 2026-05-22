/*
 * XREFs of ?ClearDCompSurface@CompositionSurfaceWrapper@Composition@UI@Windows@@AEAAXXZ @ 0x18000D9F4
 * Callers:
 *     ?Reset@Partner@CompositionSurfaceWrapper@Composition@UI@Windows@@UEAAJPEAUIDCompositionSurface@@@Z @ 0x18000D980 (-Reset@Partner@CompositionSurfaceWrapper@Composition@UI@Windows@@UEAAJPEAUIDCompositionSurface@@.c)
 * Callees:
 *     ?NotifyUnderlyingContentChange@SurfaceBindPoint@Composition@UI@Windows@@QEAAXXZ @ 0x18004B320 (-NotifyUnderlyingContentChange@SurfaceBindPoint@Composition@UI@Windows@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Windows::UI::Composition::CompositionSurfaceWrapper::ClearDCompSurface(
        Windows::UI::Composition::CompositionSurfaceWrapper *this)
{
  _QWORD *v2; // rcx
  Windows::UI::Composition::SurfaceBindPoint **v3; // rdi
  Windows::UI::Composition::SurfaceBindPoint **i; // rbx

  v2 = (_QWORD *)((char *)this + 184);
  if ( *v2 )
  {
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v2);
    v3 = (Windows::UI::Composition::SurfaceBindPoint **)*((_QWORD *)this + 17);
    for ( i = (Windows::UI::Composition::SurfaceBindPoint **)*((_QWORD *)this + 16); i != v3; ++i )
      Windows::UI::Composition::SurfaceBindPoint::NotifyUnderlyingContentChange(*i);
  }
}
