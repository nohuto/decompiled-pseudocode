/*
 * XREFs of ?GetSurfaceProxyNoRef@CAtlasSurfacePool@DirectComposition@@QEAAJW4DXGI_ALPHA_MODE@@PEAPEAVCCompositionSurfaceProxy@2@@Z @ 0x1800335C0
 * Callers:
 *     ?BindDCompSurface@CompositionSurfaceBrush@Composition@UI@Windows@@AEAAJPEAUIDCompositionSurface@@@Z @ 0x180030C0C (-BindDCompSurface@CompositionSurfaceBrush@Composition@UI@Windows@@AEAAJPEAUIDCompositionSurface@.c)
 *     ?RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ @ 0x180031010 (-RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ.c)
 *     ?GetSurfaceProperties@CFilterEffect@DirectComposition@@IEAAJPEAVCBitmapInfoFront@2@PEAPEAUIUnknown@@PEAUtagRECT@@@Z @ 0x1800F7FAC (-GetSurfaceProperties@CFilterEffect@DirectComposition@@IEAAJPEAVCBitmapInfoFront@2@PEAPEAUIUnkno.c)
 *     ?Initialize@CYCbCrSurface@DirectComposition@@IEAAJIIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x1800FF100 (-Initialize@CYCbCrSurface@DirectComposition@@IEAAJIIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z.c)
 *     ?Initialize@VisualCapture@Composition@UI@Windows@@QEAAJPEAVVisual@234@0PEAVCompositionGraphicsDevice@234@HHW4DirectXPixelFormat@DirectX@Graphics@4@W4DirectXAlphaMode@894@M_N@Z @ 0x180154F20 (-Initialize@VisualCapture@Composition@UI@Windows@@QEAAJPEAVVisual@234@0PEAVCompositionGraphicsDe.c)
 *     ?MarshalSurface@CompositionCubeMap@Private@Composition@UI@Windows@@EEAAJPEAVSurfaceBindPoint@345@PEAUICompositionSurface@345@@Z @ 0x18017EC80 (-MarshalSurface@CompositionCubeMap@Private@Composition@UI@Windows@@EEAAJPEAVSurfaceBindPoint@345.c)
 *     ?MarshalSurface@CompositionMipmapSurface@Composition@UI@Windows@@EEAAJPEAVSurfaceBindPoint@234@PEAUICompositionSurface@234@@Z @ 0x180193D50 (-MarshalSurface@CompositionMipmapSurface@Composition@UI@Windows@@EEAAJPEAVSurfaceBindPoint@234@P.c)
 * Callees:
 *     ?CreateSurfaceProxy@CDevice@DirectComposition@@QEAAJPEAXPEAPEAVCCompositionSurfaceProxy@2@@Z @ 0x180035574 (-CreateSurfaceProxy@CDevice@DirectComposition@@QEAAJPEAXPEAPEAVCCompositionSurfaceProxy@2@@Z.c)
 *     ??$ReleaseInterface@VCCompositionSurfaceProxy@DirectComposition@@@@YAXAEAPEAVCCompositionSurfaceProxy@DirectComposition@@@Z @ 0x180035624 (--$ReleaseInterface@VCCompositionSurfaceProxy@DirectComposition@@@@YAXAEAPEAVCCompositionSurface.c)
 *     ?SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z @ 0x180063770 (-SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CAtlasSurfacePool::GetSurfaceProxyNoRef(
        DirectComposition::CAtlasSurfacePool *this,
        enum DXGI_ALPHA_MODE a2,
        struct DirectComposition::CCompositionSurfaceProxy **a3)
{
  int SurfaceProxy; // edi
  __int64 v7; // rbx
  struct DirectComposition::CCompositionSurfaceProxy **v8; // rbx
  void *v10; // rdx
  __int64 v11; // rcx

  SurfaceProxy = 0;
  v7 = 96LL;
  if ( a2 != DXGI_ALPHA_MODE_PREMULTIPLIED )
    v7 = 104LL;
  v8 = (struct DirectComposition::CCompositionSurfaceProxy **)((char *)this + v7);
  if ( !*v8 )
  {
    if ( (*((_BYTE *)this + 172) & 8) != 0 )
      v10 = 0LL;
    else
      v10 = (void *)*((_QWORD *)this + 3);
    SurfaceProxy = DirectComposition::CDevice::CreateSurfaceProxy(
                     *(DirectComposition::CDevice **)(*(_QWORD *)(*((_QWORD *)this + 18) + 128LL) + 24LL),
                     v10,
                     v8);
    if ( SurfaceProxy < 0
      || (SurfaceProxy = DirectComposition::CResourceProxy::SetScalarIntegerProperty(
                           (struct DirectComposition::CCompositionSurfaceProxy *)((char *)*v8 + 8),
                           1u,
                           a2 != DXGI_ALPHA_MODE_PREMULTIPLIED),
          SurfaceProxy < 0)
      || (SurfaceProxy = DirectComposition::CResourceProxy::SetScalarIntegerProperty(
                           (struct DirectComposition::CCompositionSurfaceProxy *)((char *)*v8 + 8),
                           2u,
                           *((_QWORD *)this + 25) != 0LL),
          SurfaceProxy < 0) )
    {
      ReleaseInterface<DirectComposition::CCompositionSurfaceProxy>(v8);
    }
    else
    {
      v11 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 128LL) + 24LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  *a3 = *v8;
  return (unsigned int)SurfaceProxy;
}
