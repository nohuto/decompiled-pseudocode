/*
 * XREFs of ?NotifyUnderlyingContentChange@InvalidatableSurface@Composition@UI@Windows@@IEAAXXZ @ 0x180061C00
 * Callers:
 *     ?RecreateUnderlying@CompositionVirtualDrawingSurface@Composition@UI@Windows@@EEAAJUSizeInt32@Graphics@4@@Z @ 0x18003A7D0 (-RecreateUnderlying@CompositionVirtualDrawingSurface@Composition@UI@Windows@@EEAAJUSizeInt32@Gra.c)
 *     ?RecreateUnderlying@CompositionDrawingSurface@Composition@UI@Windows@@EEAAJUSizeInt32@Graphics@4@@Z @ 0x180061850 (-RecreateUnderlying@CompositionDrawingSurface@Composition@UI@Windows@@EEAAJUSizeInt32@Graphics@4.c)
 * Callees:
 *     ?NotifyUnderlyingContentChange@SurfaceBindPoint@Composition@UI@Windows@@QEAAXXZ @ 0x18004B320 (-NotifyUnderlyingContentChange@SurfaceBindPoint@Composition@UI@Windows@@QEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::InvalidatableSurface::NotifyUnderlyingContentChange(
        Windows::UI::Composition::InvalidatableSurface *this)
{
  Windows::UI::Composition::SurfaceBindPoint **v1; // rdi
  Windows::UI::Composition::SurfaceBindPoint **i; // rbx

  v1 = (Windows::UI::Composition::SurfaceBindPoint **)*((_QWORD *)this + 17);
  for ( i = (Windows::UI::Composition::SurfaceBindPoint **)*((_QWORD *)this + 16); i != v1; ++i )
    Windows::UI::Composition::SurfaceBindPoint::NotifyUnderlyingContentChange(*i);
}
