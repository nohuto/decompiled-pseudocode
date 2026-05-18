/*
 * XREFs of ?Create@RenderTargetD3D11@D3D11@Engine@Spectre@@QEAAXV?$ComPtr@UID3D11RenderTargetView@@@WRL@Microsoft@@V?$ComPtr@UID3D11Texture2D@@@67@1II@Z @ 0x1800CB6EC
 * Callers:
 *     ?CreateRenderTarget@RenderOutputDwm@@MEAAXV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Z @ 0x1800111B0 (-CreateRenderTarget@RenderOutputDwm@@MEAAXV-$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Z.c)
 *     ?CreateRenderTarget@RenderTargetD3D11@D3D11@Engine@Spectre@@SA?AV?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@6@HHAEBV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@6@@Z @ 0x1800CBB7C (-CreateRenderTarget@RenderTargetD3D11@D3D11@Engine@Spectre@@SA-AV-$shared_ptr@VDeviceFrameBuffer.c)
 *     ?UpdateLocalDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VIHolographicDisplayProvider@Holographic@D3D11@Engine@Spectre@@@std@@AEBV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@7@@Z @ 0x1800D9A70 (-UpdateLocalDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAXAEB.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?9UID3D11ShaderResourceView@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UID3D11ShaderResourceView@@@01@$$T@Z @ 0x18001070C (--$-9UID3D11ShaderResourceView@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UID3D11ShaderResourceView@@@01@.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@IEBAXXZ @ 0x180011520 (-InternalAddRef@-$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$CreateResource@VDeviceTexture@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@XZ @ 0x180015EE4 (--$CreateResource@VDeviceTexture@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA-AV-$shared_p.c)
 *     ??$spectre_safe_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@Utils@Spectre@@YA?AV?$shared_ptr@VTextureD3D11@D3D11@Engine@Spectre@@@std@@V?$shared_ptr@VDeviceTexture@Engine@Spectre@@@3@@Z @ 0x180017600 (--$spectre_safe_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@Utils@Spectr.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x18001C59C (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C59C.c)
 *     ?SetActiveSize@DeviceFrameBuffer@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z @ 0x180028A34 (-SetActiveSize@DeviceFrameBuffer@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z.c)
 *     ?GetName@RendererResource@Engine@Spectre@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x1800295BC (-GetName@RendererResource@Engine@Spectre@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 *     ?SetName@RendererResource@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800297A4 (-SetName@RendererResource@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 *     ??4?$ComPtr@UID3D11RenderTargetView@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800CB668 (--4-$ComPtr@UID3D11RenderTargetView@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?Create@TextureD3D11@D3D11@Engine@Spectre@@QEAAXV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@I@Z @ 0x1800CD054 (-Create@TextureD3D11@D3D11@Engine@Spectre@@QEAAXV-$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@I@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall Spectre::Engine::D3D11::RenderTargetD3D11::Create(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        int a5,
        int a6)
{
  int v10; // r13d
  int v11; // eax
  __int64 *v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rbx
  _QWORD *Name; // rax
  void **v16; // rax
  __m128 v17; // xmm2
  __m128 v18; // xmm0
  __int64 v20; // [rsp+20h] [rbp-99h] BYREF
  int v21; // [rsp+28h] [rbp-91h]
  __int64 v22; // [rsp+30h] [rbp-89h] BYREF
  std::_Ref_count_base *v23; // [rsp+38h] [rbp-81h]
  __int64 v24; // [rsp+40h] [rbp-79h] BYREF
  std::_Ref_count_base *v25; // [rsp+48h] [rbp-71h]
  __int64 *v26; // [rsp+50h] [rbp-69h]
  __int64 *v27; // [rsp+58h] [rbp-61h]
  __int64 *v28; // [rsp+60h] [rbp-59h]
  __int64 v29; // [rsp+68h] [rbp-51h] BYREF
  _QWORD v30[4]; // [rsp+78h] [rbp-41h] BYREF
  __int64 v31; // [rsp+98h] [rbp-21h] BYREF
  std::_Ref_count_base *v32; // [rsp+A0h] [rbp-19h]

  v26 = a2;
  v27 = a3;
  v28 = a4;
  v10 = 1;
  v11 = 1;
  if ( a5 )
    v11 = a5;
  v21 = v11;
  if ( a6 )
    v10 = a6;
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)(a1 + 9), &v24);
  v12 = Spectre::Engine::RenderDevice::CreateResource<Spectre::Engine::DeviceTexture>(v24, &v22);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(a1 + 12, v12);
  if ( v23 )
    std::_Ref_count_base::_Decref(v23);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    &v29,
    a1 + 12);
  Spectre::Utils::spectre_safe_pointer_cast<Spectre::Engine::D3D11::TextureD3D11,Spectre::Engine::DeviceTexture>((__int64)&v22);
  v20 = *a3;
  Microsoft::WRL::ComPtr<ID3D11ShaderResourceView>::InternalAddRef(&v20);
  Spectre::Engine::D3D11::TextureD3D11::Create(v22, &v20, 0LL);
  if ( Microsoft::WRL::operator!=<ID3D11ShaderResourceView>(a4) )
  {
    v13 = Spectre::Engine::RenderDevice::CreateResource<Spectre::Engine::DeviceTexture>(v24, &v31);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(a1 + 14, v13);
    if ( v32 )
      std::_Ref_count_base::_Decref(v32);
    v14 = a1[14];
    Name = Spectre::Engine::RendererResource::GetName((__int64)a1, &v31);
    v16 = (void **)std::operator+<char>(v30, Name, (__int64)"Staging");
    Spectre::Engine::RendererResource::SetName(v14, v16);
    std::string::_Tidy_deallocate((__int64)&v31);
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
      v30,
      a1 + 14);
    Spectre::Utils::spectre_safe_pointer_cast<Spectre::Engine::D3D11::TextureD3D11,Spectre::Engine::DeviceTexture>((__int64)&v31);
    v20 = 0LL;
    if ( &v20 != a4 )
    {
      v20 = *a4;
      *a4 = 0LL;
    }
    Spectre::Engine::D3D11::TextureD3D11::Create(v31, &v20, 128LL);
    if ( v32 )
      std::_Ref_count_base::_Decref(v32);
  }
  Microsoft::WRL::ComPtr<ID3D11RenderTargetView>::operator=(a1 + 16, a2);
  v17 = 0LL;
  v17.m128_f32[0] = (float)v10;
  v18 = 0LL;
  v18.m128_f32[0] = (float)v21;
  Spectre::Engine::DeviceFrameBuffer::SetActiveSize((__int64)a1, _mm_unpacklo_ps(v18, v17).m128_i64[0]);
  if ( v23 )
    std::_Ref_count_base::_Decref(v23);
  if ( v25 )
    std::_Ref_count_base::_Decref(v25);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a3);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a4);
}
