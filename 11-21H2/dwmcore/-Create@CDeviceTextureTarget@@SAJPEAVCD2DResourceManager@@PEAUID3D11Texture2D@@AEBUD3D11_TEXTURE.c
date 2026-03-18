/*
 * XREFs of ?Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x18006B4E0
 * Callers:
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDeviceTextureTarget@@@Z @ 0x180067084 (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInf.c)
 *     ?CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x18006C318 (-CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRende.c)
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x1800F4928 (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18027D638 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_.c)
 * Callees:
 *     ??0CDeviceTextureTarget@@IEAA@PEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NI@Z @ 0x18006B2BC (--0CDeviceTextureTarget@@IEAA@PEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_.c)
 *     ?Initialize@CDeviceTextureTarget@@MEAAJXZ @ 0x18006B5E0 (-Initialize@CDeviceTextureTarget@@MEAAJXZ.c)
 *     ??4?$com_ptr_t@VCDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTextureTarget@@@Z @ 0x18006B71C (--4-$com_ptr_t@VCDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18007E4F4 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CDeviceTextureTarget::Create(
        struct CD2DResourceManager *a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        void *a5,
        int a6,
        int a7,
        char a8,
        unsigned __int64 *a9)
{
  unsigned __int64 *v9; // rsi
  void *v14; // rax
  unsigned int v15; // ecx
  CDeviceTextureTarget *v16; // rdi
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // ebx
  CDeviceTextureTarget *v21; // [rsp+90h] [rbp+18h] BYREF

  v9 = a9;
  v21 = 0LL;
  *a9 = 0LL;
  if ( (*(_BYTE *)(a3 + 32) & 0x20) != 0 )
  {
    v14 = DefaultHeap::Alloc(0x1A8uLL);
    if ( v14 )
      v14 = (void *)CDeviceTextureTarget::CDeviceTextureTarget((__int64)v14, a1, a2, a3, a4, (int)a5, a6, a7, a8, 0);
    wil::com_ptr_t<CDeviceTextureTarget,wil::err_returncode_policy>::operator=(&v21, v14);
    v16 = v21;
    if ( v21 )
    {
      v17 = CDeviceTextureTarget::Initialize(v21);
      v19 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x2Bu, 0LL);
        CMILRefCountBaseT<IUnknown>::InternalRelease(v16);
      }
      else
      {
        *v9 = ((unsigned __int64)v16 + 248) & -(__int64)(v16 != 0LL);
      }
    }
    else
    {
      v19 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024882, 0x29u, 0LL);
    }
  }
  else
  {
    v19 = -2003292287;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, -2003292287, 0x1Eu, 0LL);
  }
  return v19;
}
