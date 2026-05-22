/*
 * XREFs of ?clear@?$vector@VSurfaceBindPoint@Composition@UI@Windows@@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@QEAAXXZ @ 0x18017F370
 * Callers:
 *     ?Destroy@CompositionCubeMap@Private@Composition@UI@Windows@@UEAAXXZ @ 0x18017EC00 (-Destroy@CompositionCubeMap@Private@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@CompositionMipmapSurface@Composition@UI@Windows@@UEAAXXZ @ 0x1801939F0 (-Destroy@CompositionMipmapSurface@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@YAXPEAVSurfaceBindPoint@Composition@UI@Windows@@QEAV1234@AEAV?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@0@@Z @ 0x1801224FC (--$_Destroy_range@V-$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@YAXPEAVSurf.c)
 */

Windows::UI::Composition::SurfaceBindPoint *__fastcall std::vector<Windows::UI::Composition::SurfaceBindPoint>::clear(
        Windows::UI::Composition::SurfaceBindPoint **a1)
{
  Windows::UI::Composition::SurfaceBindPoint *result; // rax

  std::_Destroy_range<std::allocator<Windows::UI::Composition::SurfaceBindPoint>>(*a1, a1[1]);
  result = *a1;
  a1[1] = *a1;
  return result;
}
