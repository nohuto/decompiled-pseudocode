/*
 * XREFs of ?Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x1800A169C
 * Callers:
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDeviceTextureTarget@@@Z @ 0x1800A0618 (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInf.c)
 *     ?CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800A08AC (-CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRende.c)
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x1800F8F68 (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18028CC10 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18002E72C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18007769C (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VCDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTextureTarget@@@Z @ 0x1800A17A8 (--4-$com_ptr_t@VCDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTe.c)
 *     ??0CDeviceTextureTarget@@IEAA@PEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NI@Z @ 0x1800A17E8 (--0CDeviceTextureTarget@@IEAA@PEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_.c)
 *     ?Initialize@CDeviceTextureTarget@@MEAAJXZ @ 0x1800A1F30 (-Initialize@CDeviceTextureTarget@@MEAAJXZ.c)
 */

__int64 __fastcall CDeviceTextureTarget::Create(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        int a6,
        int a7,
        char a8,
        __int64 *a9)
{
  __int64 *v9; // rsi
  LPVOID v14; // rax
  __int64 v15; // rcx
  CDeviceTextureTarget *v16; // rbx
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // edi
  CDeviceTextureTarget *v20; // rcx
  CDeviceTextureTarget *v22; // [rsp+90h] [rbp+18h] BYREF

  v9 = a9;
  v22 = 0LL;
  *a9 = 0LL;
  if ( (*(_BYTE *)(a3 + 32) & 0x20) != 0 )
  {
    v14 = DefaultHeap::Alloc(0x1A8uLL);
    if ( v14 )
      v14 = (LPVOID)CDeviceTextureTarget::CDeviceTextureTarget(v14, a1, a2, a3, a4, (_DWORD)a5, a6, a7, a8, 0);
    wil::com_ptr_t<CDeviceTextureTarget,wil::err_returncode_policy>::operator=(&v22, v14);
    v16 = v22;
    if ( v22 )
    {
      v17 = CDeviceTextureTarget::Initialize(v22);
      v19 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x2Bu, 0LL);
      }
      else
      {
        v20 = v16;
        v16 = 0LL;
        *v9 = ((unsigned __int64)v20 + 248) & -(__int64)(v20 != 0LL);
      }
    }
    else
    {
      v19 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024882, 0x29u, 0LL);
    }
    if ( v16 )
      CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v16);
  }
  else
  {
    v19 = -2003292287;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2003292287, 0x1Eu, 0LL);
  }
  return v19;
}
