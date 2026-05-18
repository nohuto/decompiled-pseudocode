/*
 * XREFs of ?CreateTexture@SpectreRenderer@@UEAAJPEAUID3D11Texture2D@@PEAUID3D11ShaderResourceView@@PEAPEAUISpectreTexture@@@Z @ 0x180018620
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000F024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@IEBAXXZ @ 0x180011520 (-InternalAddRef@-$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$?0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VDefaultSceneNodeTraversal@Engine@Spectre@@@1@@Z @ 0x180011DA0 (--$-0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@-$shared_ptr@VISceneNodeTraversal@Engine@Sp.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$CreateResource@VDeviceTexture@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@XZ @ 0x180015EE4 (--$CreateResource@VDeviceTexture@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA-AV-$shared_p.c)
 *     ??$CreateResource@VTexture@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x180016268 (--$CreateResource@VTexture@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr_ea_180016268.c)
 *     ??$MakeAndInitialize@VSpectreTexture@@V1@AEAV?$shared_ptr@VTexture@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VSpectreTexture@@@WRL@Microsoft@@@012@AEAV?$shared_ptr@VTexture@Engine@Spectre@@@std@@@Z @ 0x180016A48 (--$MakeAndInitialize@VSpectreTexture@@V1@AEAV-$shared_ptr@VTexture@Engine@Spectre@@_ea_180016A48.c)
 *     ??$spectre_safe_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@Utils@Spectre@@YA?AV?$shared_ptr@VTextureD3D11@D3D11@Engine@Spectre@@@std@@V?$shared_ptr@VDeviceTexture@Engine@Spectre@@@3@@Z @ 0x180017600 (--$spectre_safe_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@Utils@Spectr.c)
 *     ?GetDevice@Engine@1Spectre@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@I@Z @ 0x180034148 (-GetDevice@Engine@1Spectre@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@I@Z.c)
 *     ?Create@Texture@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@I@Z @ 0x180055D68 (-Create@Texture@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@I@Z.c)
 *     ?Create@TextureD3D11@D3D11@Engine@Spectre@@QEAAXV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@V?$ComPtr@UID3D11ShaderResourceView@@@67@I@Z @ 0x1800CD0A8 (-Create@TextureD3D11@D3D11@Engine@Spectre@@QEAAXV-$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@V-$C.c)
 */

__int64 __fastcall SpectreRenderer::CreateTexture(
        SpectreRenderer *this,
        struct ID3D11Texture2D *a2,
        struct ID3D11ShaderResourceView *a3,
        struct ISpectreTexture **a4)
{
  __int64 *Device; // rax
  __int64 v9; // r9
  int v10; // eax
  unsigned int v11; // ebx
  struct ISpectreTexture *v13; // rax
  struct ID3D11ShaderResourceView *v14; // [rsp+20h] [rbp-50h] BYREF
  struct ID3D11Texture2D *v15; // [rsp+28h] [rbp-48h] BYREF
  std::_Ref_count_base *v16; // [rsp+30h] [rbp-40h]
  Spectre::Engine::D3D11::TextureD3D11 *v17; // [rsp+38h] [rbp-38h] BYREF
  std::_Ref_count_base *v18; // [rsp+40h] [rbp-30h]
  __int64 v19; // [rsp+48h] [rbp-28h] BYREF
  std::_Ref_count_base *v20; // [rsp+50h] [rbp-20h]
  __int64 v21; // [rsp+58h] [rbp-18h] BYREF
  std::_Ref_count_base *v22; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  struct ISpectreTexture *v24; // [rsp+A0h] [rbp+30h] BYREF
  struct ID3D11ShaderResourceView *v25; // [rsp+A8h] [rbp+38h] BYREF
  struct ID3D11Texture2D *v26; // [rsp+B0h] [rbp+40h] BYREF

  Spectre::Engine::Engine::CreateResource<Spectre::Engine::Texture,>(*((_QWORD *)this + 7), &v19);
  Device = (__int64 *)Spectre::Engine::Engine::GetDevice(*((Spectre::Engine::Engine **)this + 7));
  Spectre::Engine::RenderDevice::CreateResource<Spectre::Engine::DeviceTexture>(*Device, &v21);
  if ( v18 )
    std::_Ref_count_base::_Decref(v18);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v15, &v21);
  Spectre::Utils::spectre_safe_pointer_cast<Spectre::Engine::D3D11::TextureD3D11,Spectre::Engine::DeviceTexture>((__int64)&v17);
  v26 = a2;
  Microsoft::WRL::ComPtr<ID3D11ShaderResourceView>::InternalAddRef((__int64 *)&v26);
  v25 = a3;
  Microsoft::WRL::ComPtr<ID3D11ShaderResourceView>::InternalAddRef((__int64 *)&v25);
  v14 = a3;
  Microsoft::WRL::ComPtr<ID3D11ShaderResourceView>::InternalAddRef((__int64 *)&v14);
  v15 = a2;
  Microsoft::WRL::ComPtr<ID3D11ShaderResourceView>::InternalAddRef((__int64 *)&v15);
  Spectre::Engine::D3D11::TextureD3D11::Create(v17);
  std::shared_ptr<Spectre::Engine::ISceneNodeTraversal>::shared_ptr<Spectre::Engine::ISceneNodeTraversal>(&v15, &v17);
  Spectre::Engine::Texture::Create(v9, &v15, 1LL);
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
  v24 = 0LL;
  v10 = Microsoft::WRL::Details::MakeAndInitialize<SpectreTexture,SpectreTexture,std::shared_ptr<Spectre::Engine::Texture> &>(
          (__int64 *)&v24,
          (__int64)&v19);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v13 = v24;
    v24 = 0LL;
    *a4 = v13;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
    if ( v18 )
      std::_Ref_count_base::_Decref(v18);
    if ( v22 )
      std::_Ref_count_base::_Decref(v22);
    if ( v20 )
      std::_Ref_count_base::_Decref(v20);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x182,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (const char *)(unsigned int)v10);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
    if ( v18 )
      std::_Ref_count_base::_Decref(v18);
    if ( v22 )
      std::_Ref_count_base::_Decref(v22);
    if ( v20 )
      std::_Ref_count_base::_Decref(v20);
    return v11;
  }
}
