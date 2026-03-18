/*
 * XREFs of ?CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x18006C318
 * Callers:
 *     ?GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800BAC5C (-GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFo.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CScratchRenderTargetBitmap@@KAJPEAVIDeviceTarget@@PEAPEAV1@@Z @ 0x1800655E0 (-Create@CScratchRenderTargetBitmap@@KAJPEAVIDeviceTarget@@PEAPEAV1@@Z.c)
 *     ?CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x18006A66C (-CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D1.c)
 *     ?Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x18006B4E0 (-Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x18007F688 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CD3DDevice::CreateScratchRenderTargetBitmap(
        CD3DDevice *this,
        const struct D2D_SIZE_U *a2,
        const struct PixelFormatInfo *a3,
        const struct RenderTargetInfo *a4,
        struct CScratchRenderTargetBitmap **a5)
{
  __int128 v6; // xmm0
  int v8; // ebx
  bool v10; // cf
  struct D3D11_SUBRESOURCE_DATA *v11; // r8
  int v12; // eax
  int v13; // ecx
  struct CD2DResourceManager *v14; // rcx
  struct IDeviceTarget *v15; // rcx
  unsigned int v16; // ebx
  int v18; // r9d
  void *v19; // [rsp+20h] [rbp-91h]
  unsigned int v20; // [rsp+20h] [rbp-91h]
  int v21; // [rsp+28h] [rbp-89h]
  int v22; // [rsp+30h] [rbp-81h]
  struct ID3D11Texture2D *v23; // [rsp+50h] [rbp-61h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-59h] BYREF
  __int128 v25; // [rsp+60h] [rbp-51h] BYREF
  int v26; // [rsp+70h] [rbp-41h]
  __int64 v27; // [rsp+74h] [rbp-3Dh]
  int v28; // [rsp+7Ch] [rbp-35h]
  struct D2D_SIZE_U v29; // [rsp+80h] [rbp-31h] BYREF
  int v30; // [rsp+88h] [rbp-29h]
  int v31; // [rsp+8Ch] [rbp-25h]
  int v32; // [rsp+90h] [rbp-21h]
  __int64 v33; // [rsp+94h] [rbp-1Dh]
  int v34; // [rsp+9Ch] [rbp-15h]
  __int64 v35; // [rsp+A0h] [rbp-11h]
  int v36; // [rsp+A8h] [rbp-9h]
  __int128 v37; // [rsp+B0h] [rbp-1h]

  *(_QWORD *)&v25 = "DWM Scratch Rendertarget";
  DWORD2(v25) = 24;
  v6 = v25;
  *a5 = 0LL;
  v8 = *((_DWORD *)this + 272);
  v23 = 0LL;
  v24 = 0LL;
  v27 = 0LL;
  v28 = 0;
  v37 = v6;
  if ( v8 < 0 )
  {
    v18 = v8;
    v20 = 1415;
    goto LABEL_14;
  }
  v29 = *a2;
  v32 = *(_DWORD *)a3;
  v10 = *((_BYTE *)a4 + 20) != 0;
  v30 = 1;
  v31 = 1;
  v33 = 1LL;
  v34 = 0;
  v36 = v10 ? 0x80000 : 0;
  v35 = 40LL;
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v23);
  v12 = CD3DDevice::CreateTexture(this, (const struct DWM_TEXTURE2D_DESC *)&v29, v11, &v23);
  v8 = v12;
  if ( v12 < 0 )
  {
    v20 = 1430;
    goto LABEL_11;
  }
  v22 = *((_DWORD *)a4 + 4);
  DWORD1(v25) = *((_DWORD *)a3 + 1);
  v13 = *((_DWORD *)a3 + 2);
  LODWORD(v25) = v32;
  v21 = *((_DWORD *)a4 + 2);
  LODWORD(v19) = v13;
  v14 = (struct CD2DResourceManager *)*((_QWORD *)this + 23);
  *((_QWORD *)&v25 + 1) = 0x42C0000042C00000LL;
  v26 = 1;
  v12 = CDeviceTextureTarget::Create(v14, (__int64)v23, (__int64)&v29, &v25, v19, v21, v22, 0, &v24);
  v8 = v12;
  if ( v12 < 0 )
  {
    v20 = 1447;
    goto LABEL_11;
  }
  if ( v24 )
    v15 = (struct IDeviceTarget *)(*(int *)(*(_QWORD *)(v24 + 8) + 24LL) + v24 + 8);
  else
    v15 = 0LL;
  v12 = CScratchRenderTargetBitmap::Create(v15, a5);
  v8 = v12;
  if ( v12 < 0 )
  {
    v20 = 1451;
LABEL_11:
    v18 = v12;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, &dword_1802E18D0, 2u, v18, v20, 0LL);
  }
  v16 = CD3DDevice::TranslateDXGIorD3DErrorInContext(this, (unsigned int)v8, 0LL);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v24);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
  return v16;
}
