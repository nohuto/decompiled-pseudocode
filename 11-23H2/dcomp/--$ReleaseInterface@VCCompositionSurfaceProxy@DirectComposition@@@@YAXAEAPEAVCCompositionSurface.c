/*
 * XREFs of ??$ReleaseInterface@VCCompositionSurfaceProxy@DirectComposition@@@@YAXAEAPEAVCCompositionSurfaceProxy@DirectComposition@@@Z @ 0x180035624
 * Callers:
 *     ?MarshalSurface@CompositionSurfaceBrush@Composition@UI@Windows@@EEAAJPEAVSurfaceBindPoint@234@PEAUICompositionSurface@234@@Z @ 0x1800304E0 (-MarshalSurface@CompositionSurfaceBrush@Composition@UI@Windows@@EEAAJPEAVSurfaceBindPoint@234@PE.c)
 *     ?GetSurfaceProxyNoRef@CAtlasSurfacePool@DirectComposition@@QEAAJW4DXGI_ALPHA_MODE@@PEAPEAVCCompositionSurfaceProxy@2@@Z @ 0x1800335C0 (-GetSurfaceProxyNoRef@CAtlasSurfacePool@DirectComposition@@QEAAJW4DXGI_ALPHA_MODE@@PEAPEAVCCompo.c)
 *     ?CreateSurfaceProxy@CDevice@DirectComposition@@QEAAJPEAXPEAPEAVCCompositionSurfaceProxy@2@@Z @ 0x180035574 (-CreateSurfaceProxy@CDevice@DirectComposition@@QEAAJPEAXPEAPEAVCCompositionSurfaceProxy@2@@Z.c)
 * Callees:
 *     ?Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ @ 0x180018050 (-Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<DirectComposition::CCompositionSurfaceProxy>(
        DirectComposition::CTransformGroupProxy **a1)
{
  DirectComposition::CTransformGroupProxy *v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = DirectComposition::CTransformGroupProxy::Release(v2);
    *a1 = 0LL;
  }
  return result;
}
