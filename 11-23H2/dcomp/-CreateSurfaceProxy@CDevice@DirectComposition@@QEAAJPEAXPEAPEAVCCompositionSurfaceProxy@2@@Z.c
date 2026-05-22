/*
 * XREFs of ?CreateSurfaceProxy@CDevice@DirectComposition@@QEAAJPEAXPEAPEAVCCompositionSurfaceProxy@2@@Z @ 0x180035574
 * Callers:
 *     ?MarshalSurface@CompositionSurfaceBrush@Composition@UI@Windows@@EEAAJPEAVSurfaceBindPoint@234@PEAUICompositionSurface@234@@Z @ 0x1800304E0 (-MarshalSurface@CompositionSurfaceBrush@Composition@UI@Windows@@EEAAJPEAVSurfaceBindPoint@234@PE.c)
 *     ?GetSurfaceProxyNoRef@CAtlasSurfacePool@DirectComposition@@QEAAJW4DXGI_ALPHA_MODE@@PEAPEAVCCompositionSurfaceProxy@2@@Z @ 0x1800335C0 (-GetSurfaceProxyNoRef@CAtlasSurfacePool@DirectComposition@@QEAAJW4DXGI_ALPHA_MODE@@PEAPEAVCCompo.c)
 * Callees:
 *     ?SetHandleProperty@CResourceProxy@DirectComposition@@QEAAJIPEAX@Z @ 0x18001A23C (-SetHandleProperty@CResourceProxy@DirectComposition@@QEAAJIPEAX@Z.c)
 *     ??$ReleaseInterface@VCCompositionSurfaceProxy@DirectComposition@@@@YAXAEAPEAVCCompositionSurfaceProxy@DirectComposition@@@Z @ 0x180035624 (--$ReleaseInterface@VCCompositionSurfaceProxy@DirectComposition@@@@YAXAEAPEAVCCompositionSurface.c)
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateSurfaceProxy(
        DirectComposition::CDevice *this,
        void *a2,
        struct DirectComposition::CCompositionSurfaceProxy **a3)
{
  int v5; // edi
  struct DirectComposition::CCompositionSurfaceProxy *v6; // rbx
  DirectComposition::CResourceProxy *v7; // rcx
  _DWORD *v9; // [rsp+30h] [rbp-18h] BYREF
  _DWORD *v10; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v5 = DirectComposition::CDevice::CreateProxyInternal(this, 0x2Au, 0, (void **)&v10, &v11);
  if ( v5 >= 0 )
  {
    v6 = (struct DirectComposition::CCompositionSurfaceProxy *)v10;
    v9 = v10;
    v7 = (DirectComposition::CResourceProxy *)(v10 + 2);
    v10[3] = v11;
    *(_QWORD *)v6 = &DirectComposition::CCompositionSurfaceProxy::`vftable';
    *(_DWORD *)v7 = 1;
    v5 = DirectComposition::CResourceProxy::SetHandleProperty(v7, 0, a2);
    if ( v5 >= 0 )
    {
      v9 = 0LL;
      *a3 = v6;
    }
  }
  ReleaseInterface<DirectComposition::CCompositionSurfaceProxy>(&v9);
  return (unsigned int)v5;
}
