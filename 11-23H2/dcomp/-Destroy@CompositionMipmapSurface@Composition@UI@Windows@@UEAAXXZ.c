/*
 * XREFs of ?Destroy@CompositionMipmapSurface@Composition@UI@Windows@@UEAAXXZ @ 0x1801939F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Destroy@SurfaceBindPoint@Composition@UI@Windows@@QEAAX_N@Z @ 0x180168D00 (-Destroy@SurfaceBindPoint@Composition@UI@Windows@@QEAAX_N@Z.c)
 *     ?clear@?$vector@VSurfaceBindPoint@Composition@UI@Windows@@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@QEAAXXZ @ 0x18017F370 (-clear@-$vector@VSurfaceBindPoint@Composition@UI@Windows@@V-$allocator@VSurfaceBindPoint@Composi.c)
 */

void __fastcall Windows::UI::Composition::CompositionMipmapSurface::Destroy(
        Windows::UI::Composition::CompositionMipmapSurface *this)
{
  char *v2; // rsi
  unsigned int i; // edi

  v2 = (char *)this + 208;
  for ( i = 0; i < (unsigned __int64)((*((_QWORD *)v2 + 1) - *(_QWORD *)v2) / 56LL); ++i )
    Windows::UI::Composition::SurfaceBindPoint::Destroy((struct IUnknown **)(*(_QWORD *)v2 + 56LL * i), 1);
  std::vector<Windows::UI::Composition::SurfaceBindPoint>::clear((Windows::UI::Composition::SurfaceBindPoint **)v2);
  Windows::UI::Composition::ProxyObject::Destroy(this);
}
