/*
 * XREFs of ?GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18020BD90
 * Callers:
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x18020E450 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800198A8 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x18006A66C (-CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D1.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800BB1E8 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800C9D10 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?CreateShaderResourceView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1800CCC80 (-CreateShaderResourceView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DE.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1801000AC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z @ 0x18020BADC (-FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z.c)
 *     ?GetAdapterLuid@CCompositionSurfaceBitmap@@QEBA?AU_LUID@@XZ @ 0x18020BD40 (-GetAdapterLuid@CCompositionSurfaceBitmap@@QEBA-AU_LUID@@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DDevice@@@WRL@Microsoft@@IEAAKXZ @ 0x18020C06C (-InternalRelease@-$ComPtr@VCD3DDevice@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CCompositionCubeMap::GetOrCreateD3DCubeMap(
        CCompositionCubeMap *this,
        struct ID2DContextOwner *a2,
        struct ID3D11ShaderResourceView **a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v8; // esi
  struct _LUID v9; // rbx
  CDeviceManager *v10; // rcx
  int ExistingDevice; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  int CurrentRenderingRealization; // eax
  __int64 v16; // rcx
  void (__fastcall ***v17)(_QWORD, DXGI_FORMAT *); // rcx
  char v18; // dl
  struct D3D11_SUBRESOURCE_DATA *v19; // r8
  int Texture; // eax
  __int64 v21; // rcx
  struct ID3D11Resource *v22; // rdx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  struct _LUID v28; // [rsp+30h] [rbp-79h] BYREF
  struct CD3DDevice *v29; // [rsp+38h] [rbp-71h] BYREF
  D3D11_SHADER_RESOURCE_VIEW_DESC v30; // [rsp+40h] [rbp-69h] BYREF
  __int128 v31; // [rsp+58h] [rbp-51h]
  DXGI_FORMAT v32[6]; // [rsp+68h] [rbp-41h] BYREF
  _DWORD v33[5]; // [rsp+80h] [rbp-29h] BYREF
  __int64 v34; // [rsp+94h] [rbp-15h]
  int v35; // [rsp+9Ch] [rbp-Dh]
  int v36; // [rsp+A0h] [rbp-9h]
  int v37; // [rsp+A4h] [rbp-5h]
  int v38; // [rsp+A8h] [rbp-1h]
  __int128 v39; // [rsp+B0h] [rbp+7h]

  *a3 = 0LL;
  v5 = *((unsigned int *)this + 30);
  v6 = *((_QWORD *)this + 11);
  v8 = 0;
  v29 = 0LL;
  CCompositionSurfaceBitmap::GetAdapterLuid(*(CCompositionSurfaceBitmap **)(32 * v5 + v6 + 8), &v28);
  v9 = v28;
  if ( *((_QWORD *)this + 16) != v28 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 17);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 18);
    *((struct _LUID *)this + 16) = v9;
    *((_BYTE *)this + 152) = 1;
  }
  if ( *((_QWORD *)this + 17) || *((int *)this + 30) < 0 )
    goto LABEL_11;
  Microsoft::WRL::ComPtr<CD3DDevice>::InternalRelease(&v29);
  ExistingDevice = CDeviceManager::GetExistingDevice(v10, v9, &v29);
  v8 = ExistingDevice;
  if ( ExistingDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, ExistingDevice, 0x10Au);
    goto LABEL_12;
  }
  v13 = *((_QWORD *)this + 11);
  v14 = 32LL * *((unsigned int *)this + 30);
  v28 = 0LL;
  CurrentRenderingRealization = CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
                                  (CCompositionSurfaceBitmap *)(*(_QWORD *)(v14 + v13 + 8) + 72LL),
                                  (struct IBitmapRealization **)&v28);
  v8 = CurrentRenderingRealization;
  if ( CurrentRenderingRealization < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, CurrentRenderingRealization, 0x10Du);
    goto LABEL_17;
  }
  v17 = (void (__fastcall ***)(_QWORD, DXGI_FORMAT *))(*(int *)(*(_QWORD *)(*(_QWORD *)&v28 + 8LL) + 8LL)
                                                     + *(_QWORD *)&v28
                                                     + 8LL);
  (**v17)(v17, v32);
  v18 = *((_BYTE *)this + 168);
  *(_QWORD *)&v31 = "DWM Composition Cube Map";
  v33[0] = *((_DWORD *)this + 40);
  v33[1] = v33[0];
  v33[2] = *((_DWORD *)this + 41);
  v33[4] = v32[0];
  DWORD2(v31) = 24;
  v33[3] = 6;
  v34 = 1LL;
  v35 = 0;
  v36 = v18 != 0 ? 40 : 8;
  v37 = 0;
  v38 = (v18 != 0) + 4;
  v39 = v31;
  Texture = CD3DDevice::CreateTexture(
              v29,
              (const struct DWM_TEXTURE2D_DESC *)v33,
              v19,
              (struct ID3D11Texture2D **)this + 17);
  v8 = Texture;
  if ( Texture < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, Texture, 0x136u);
    goto LABEL_17;
  }
  v22 = (struct ID3D11Resource *)*((_QWORD *)this + 17);
  v30.Format = v32[0];
  v30.Buffer.NumElements = *((_DWORD *)this + 41);
  *(_QWORD *)&v30.ViewDimension = 9LL;
  v23 = CD3DDevice::CreateShaderResourceView(v29, v22, &v30, (struct ID3D11ShaderResourceView **)this + 18);
  v8 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0LL, v23, 0x13Eu);
    goto LABEL_17;
  }
  v25 = CCompositionCubeMap::FlushToD3DCubeMap(this, a2);
  v8 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0LL, v25, 0x140u);
LABEL_17:
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v28);
    goto LABEL_12;
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v28);
LABEL_11:
  *a3 = (struct ID3D11ShaderResourceView *)*((_QWORD *)this + 18);
LABEL_12:
  Microsoft::WRL::ComPtr<CD3DDevice>::InternalRelease(&v29);
  return v8;
}
