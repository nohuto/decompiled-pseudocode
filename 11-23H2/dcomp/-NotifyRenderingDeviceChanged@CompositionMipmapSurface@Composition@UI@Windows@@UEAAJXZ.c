/*
 * XREFs of ?NotifyRenderingDeviceChanged@CompositionMipmapSurface@Composition@UI@Windows@@UEAAJXZ @ 0x180193FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyUnderlyingContentChange@SurfaceBindPoint@Composition@UI@Windows@@QEAAXXZ @ 0x18004B320 (-NotifyUnderlyingContentChange@SurfaceBindPoint@Composition@UI@Windows@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionMipmapSurface::NotifyRenderingDeviceChanged(
        Windows::UI::Composition::CompositionMipmapSurface *this)
{
  Windows::UI::Composition::SurfaceBindPoint *v1; // rdi
  Windows::UI::Composition::SurfaceBindPoint *i; // rbx

  v1 = (Windows::UI::Composition::SurfaceBindPoint *)*((_QWORD *)this + 9);
  for ( i = (Windows::UI::Composition::SurfaceBindPoint *)*((_QWORD *)this + 8);
        i != v1;
        i = (Windows::UI::Composition::SurfaceBindPoint *)((char *)i + 56) )
  {
    Windows::UI::Composition::SurfaceBindPoint::NotifyUnderlyingContentChange(i);
  }
  return 0LL;
}
