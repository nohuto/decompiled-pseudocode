/*
 * XREFs of ?Destroy@CompositionCubeMap@Private@Composition@UI@Windows@@UEAAXXZ @ 0x18017EC00
 * Callers:
 *     <none>
 * Callees:
 *     ?Destroy@SurfaceBindPoint@Composition@UI@Windows@@QEAAX_N@Z @ 0x180168D00 (-Destroy@SurfaceBindPoint@Composition@UI@Windows@@QEAAX_N@Z.c)
 *     ?clear@?$vector@VSurfaceBindPoint@Composition@UI@Windows@@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@QEAAXXZ @ 0x18017F370 (-clear@-$vector@VSurfaceBindPoint@Composition@UI@Windows@@V-$allocator@VSurfaceBindPoint@Composi.c)
 */

void __fastcall Windows::UI::Composition::Private::CompositionCubeMap::Destroy(
        Windows::UI::Composition::Private::CompositionCubeMap *this)
{
  _QWORD *v2; // rsi
  unsigned int i; // edi

  v2 = (_QWORD *)((char *)this + 160);
  for ( i = 0; i < (unsigned __int64)((v2[1] - *v2) / 56LL); ++i )
    Windows::UI::Composition::SurfaceBindPoint::Destroy((struct IUnknown **)(*v2 + 56LL * i), 1);
  std::vector<Windows::UI::Composition::SurfaceBindPoint>::clear(v2);
  Windows::UI::Composition::ProxyObject::Destroy(this);
}
