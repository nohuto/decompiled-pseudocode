/*
 * XREFs of ?Create@DepthBufferD3D11@D3D11@Engine@Spectre@@QEAAXV?$ComPtr@UID3D11DepthStencilView@@@WRL@Microsoft@@V?$ComPtr@UID3D11Texture2D@@@67@I@Z @ 0x1800D5C8C
 * Callers:
 *     ?CreateDepthBuffer@DepthBufferD3D11@D3D11@Engine@Spectre@@SA?AV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@6@HHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@6@@Z @ 0x1800D62DC (-CreateDepthBuffer@DepthBufferD3D11@D3D11@Engine@Spectre@@SA-AV-$shared_ptr@VDeviceDepthBuffer@E.c)
 *     ?UpdateLocalDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VIHolographicDisplayProvider@Holographic@D3D11@Engine@Spectre@@@std@@AEBV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@7@@Z @ 0x1800D9A70 (-UpdateLocalDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAXAEB.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@IEBAXXZ @ 0x180011520 (-InternalAddRef@-$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$CreateResource@VDeviceTexture@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@XZ @ 0x180015EE4 (--$CreateResource@VDeviceTexture@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA-AV-$shared_p.c)
 *     ??$CreateResource@VTexture@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x180016268 (--$CreateResource@VTexture@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr_ea_180016268.c)
 *     ??$spectre_safe_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@Utils@Spectre@@YA?AV?$shared_ptr@VTextureD3D11@D3D11@Engine@Spectre@@@std@@V?$shared_ptr@VDeviceTexture@Engine@Spectre@@@3@@Z @ 0x180017600 (--$spectre_safe_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@Utils@Spectr.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x18001C59C (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C59C.c)
 *     ?GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ @ 0x180026598 (-GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?GetName@RendererResource@Engine@Spectre@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x1800295BC (-GetName@RendererResource@Engine@Spectre@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 *     ?SetName@RendererResource@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800297A4 (-SetName@RendererResource@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 *     ?Create@Texture@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@I@Z @ 0x180055D68 (-Create@Texture@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@I@Z.c)
 *     ?Create@TextureD3D11@D3D11@Engine@Spectre@@QEAAXV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@I@Z @ 0x1800CD054 (-Create@TextureD3D11@D3D11@Engine@Spectre@@QEAAXV-$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@I@Z.c)
 *     ??4?$ComPtr@UID3D11DepthStencilView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800D5A8C (--4-$ComPtr@UID3D11DepthStencilView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Spectre::Engine::D3D11::DepthBufferD3D11::Create(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 *v6; // rax
  struct Spectre::Engine::Engine *Engine; // rax
  __int64 *v8; // rax
  __int64 *v9; // r12
  __int64 v10; // rbx
  _QWORD *Name; // rax
  void **v12; // rax
  __int64 v14; // [rsp+20h] [rbp-69h] BYREF
  std::_Ref_count_base *v15; // [rsp+28h] [rbp-61h]
  Spectre::Engine::D3D11::TextureD3D11 *v16; // [rsp+40h] [rbp-49h] BYREF
  std::_Ref_count_base *v17; // [rsp+48h] [rbp-41h]
  Spectre::Engine::RenderDevice *v18; // [rsp+50h] [rbp-39h] BYREF
  std::_Ref_count_base *v19; // [rsp+58h] [rbp-31h]
  __int64 *v20; // [rsp+60h] [rbp-29h]
  __int64 *v21; // [rsp+68h] [rbp-21h]
  __int64 v22; // [rsp+70h] [rbp-19h] BYREF
  _QWORD v23[4]; // [rsp+80h] [rbp-9h] BYREF

  v20 = a2;
  v21 = a3;
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)(a1 + 9), &v18);
  v6 = Spectre::Engine::RenderDevice::CreateResource<Spectre::Engine::DeviceTexture>((__int64)v18, (__int64 *)&v16);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(a1 + 12, v6);
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    &v22,
    a1 + 12);
  Spectre::Utils::spectre_safe_pointer_cast<Spectre::Engine::D3D11::TextureD3D11,Spectre::Engine::DeviceTexture>((__int64)&v16);
  v14 = *a3;
  Microsoft::WRL::ComPtr<ID3D11ShaderResourceView>::InternalAddRef(&v14);
  Spectre::Engine::D3D11::TextureD3D11::Create(v16, &v14);
  Engine = Spectre::Engine::RenderDevice::GetEngine(v18);
  v8 = Spectre::Engine::Engine::CreateResource<Spectre::Engine::Texture,>((__int64)Engine, &v14);
  v9 = a1 + 16;
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(a1 + 16, v8);
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  v10 = *v9;
  Name = Spectre::Engine::RendererResource::GetName((__int64)a1, v23);
  v12 = (void **)std::operator+<char>(&v14, Name, (__int64)"Shared Texture");
  Spectre::Engine::RendererResource::SetName(v10, v12);
  std::string::_Tidy_deallocate((__int64)v23);
  Spectre::Engine::Texture::Create(*v9, (Spectre::Engine::DeviceTexture **)a1 + 12);
  Microsoft::WRL::ComPtr<ID3D11DepthStencilView>::operator=(a1 + 14, a2);
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
  if ( v19 )
    std::_Ref_count_base::_Decref(v19);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a3);
}
