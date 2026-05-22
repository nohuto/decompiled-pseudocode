/*
 * XREFs of ?RemoveBindPoint@BindableSurface@Composition@UI@Windows@@QEAAXPEAVSurfaceBindPoint@234@@Z @ 0x1800829CC
 * Callers:
 *     ?DetachSurface@SurfaceBindPoint@Composition@UI@Windows@@AEAAXXZ @ 0x180029FF0 (-DetachSurface@SurfaceBindPoint@Composition@UI@Windows@@AEAAXXZ.c)
 * Callees:
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 */

void __fastcall Windows::UI::Composition::BindableSurface::RemoveBindPoint(
        Windows::UI::Composition::BindableSurface *this,
        struct Windows::UI::Composition::SurfaceBindPoint *a2)
{
  struct Windows::UI::Composition::SurfaceBindPoint **v2; // r8
  struct Windows::UI::Composition::SurfaceBindPoint **v4; // rcx
  struct Windows::UI::Composition::SurfaceBindPoint **v6; // rdx

  v2 = (struct Windows::UI::Composition::SurfaceBindPoint **)*((_QWORD *)this + 17);
  v4 = (struct Windows::UI::Composition::SurfaceBindPoint **)*((_QWORD *)this + 16);
  if ( v4 != v2 )
  {
    while ( 1 )
    {
      v6 = v4 + 1;
      if ( *v4 == a2 )
        break;
      ++v4;
      if ( v6 == v2 )
        return;
    }
    memmove_0(v4, v6, (char *)v2 - (char *)v6);
    *((_QWORD *)this + 17) -= 8LL;
  }
}
