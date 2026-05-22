/*
 * XREFs of ?Destroy@BindableSurface@Composition@UI@Windows@@MEAAXXZ @ 0x180060FD0
 * Callers:
 *     ?Destroy@InvalidatableSurface@Composition@UI@Windows@@MEAAXXZ @ 0x180060F70 (-Destroy@InvalidatableSurface@Composition@UI@Windows@@MEAAXXZ.c)
 * Callees:
 *     ?SetSurface@SurfaceBindPoint@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@234@@Z @ 0x18007E1B0 (-SetSurface@SurfaceBindPoint@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@234@@Z.c)
 */

void __fastcall Windows::UI::Composition::BindableSurface::Destroy(Windows::UI::Composition::BindableSurface *this)
{
  __int64 v2; // rax

  while ( 1 )
  {
    v2 = *((_QWORD *)this + 17);
    if ( *((_QWORD *)this + 16) == v2 )
      break;
    Windows::UI::Composition::SurfaceBindPoint::SetSurface(
      *(Windows::UI::Composition::SurfaceBindPoint **)(v2 - 8),
      0LL);
  }
  Windows::UI::Composition::CompositionObject::Destroy(this);
}
