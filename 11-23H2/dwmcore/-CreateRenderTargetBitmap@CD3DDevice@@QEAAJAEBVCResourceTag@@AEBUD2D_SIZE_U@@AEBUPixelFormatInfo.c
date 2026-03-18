/*
 * XREFs of ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800AF120
 * Callers:
 *     ?EnsureBlackBitmapTargets@CD3DDevice@@AEAAJXZ @ 0x180019804 (-EnsureBlackBitmapTargets@CD3DDevice@@AEAAJXZ.c)
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180020944 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z @ 0x18002424C (-Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z.c)
 *     ?CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTarget@1@@Z @ 0x1800A2744 (-CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTa.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800AEDDC (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AE.c)
 *     ?CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1801098D8 (-CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFor.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1801D42C4 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x1801E9690 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x180278F5C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 *     ?EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ @ 0x1802A19A8 (-EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002731C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDeviceTextureTarget@@@Z @ 0x1800A0618 (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInf.c)
 *     ?Create@CRenderTargetBitmap@@SAJPEAVIDeviceTarget@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800A24DC (-Create@CRenderTargetBitmap@@SAJPEAVIDeviceTarget@@PEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800AF214 (-GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFo.c)
 */

__int64 __fastcall CD3DDevice::CreateRenderTargetBitmap(
        CD3DDevice *a1,
        const struct CResourceTag *a2,
        struct D3D11_SUBRESOURCE_DATA *a3,
        const struct PixelFormatInfo *a4,
        struct RenderTargetInfo *a5,
        int a6,
        struct IRenderTargetBitmap **a7)
{
  struct IRenderTargetBitmap **v7; // rsi
  int v9; // ebx
  int CachedTargetBitmap; // eax
  __int64 v11; // rcx
  int DeviceTextureTarget; // eax
  __int64 v14; // rcx
  struct IDeviceTarget *v15; // rcx
  int v16; // eax
  __int64 v17; // rcx

  v7 = a7;
  *a7 = 0LL;
  v9 = *((_DWORD *)a1 + 272);
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, &dword_1802EE308, 2u, v9, 0x40Cu, 0LL);
  }
  else if ( a6 )
  {
    CachedTargetBitmap = CRenderTargetBitmapCache::GetCachedTargetBitmap((char *)a1 + 464, a2, a3->pSysMem);
    v9 = CachedTargetBitmap;
    if ( CachedTargetBitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_1802EE308, 2u, CachedTargetBitmap, 0x415u, 0LL);
  }
  else
  {
    a7 = 0LL;
    DeviceTextureTarget = CD3DDevice::CreateDeviceTextureTarget(a1, a2, a3, a4, a5, (struct IDeviceTextureTarget **)&a7);
    v9 = DeviceTextureTarget;
    if ( DeviceTextureTarget < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, &dword_1802EE308, 2u, DeviceTextureTarget, 0x41Eu, 0LL);
    }
    else
    {
      if ( a7 )
        v15 = (struct IDeviceTarget *)((char *)a7 + *((int *)a7[1] + 6) + 8);
      else
        v15 = 0LL;
      v16 = CRenderTargetBitmap::Create(v15, v7);
      v9 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_1802EE308, 2u, v16, 0x421u, 0LL);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&a7);
  }
  return CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)a1, v9, 0);
}
