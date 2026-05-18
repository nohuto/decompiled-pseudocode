/*
 * XREFs of ?SubmitCopyTexture2D@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@IIII0II@Z @ 0x1800D0870
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$spectre_safe_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@Utils@Spectre@@YA?AV?$shared_ptr@VTextureD3D11@D3D11@Engine@Spectre@@@std@@V?$shared_ptr@VDeviceTexture@Engine@Spectre@@@3@@Z @ 0x180017600 (--$spectre_safe_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@Utils@Spectr.c)
 *     ?GetDeviceTexture@Texture@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x180056670 (-GetDeviceTexture@Texture@Engine@Spectre@@QEBA-AV-$shared_ptr@VDeviceTexture@Engine@Spectre@@@st.c)
 *     ?GetMipLevels@DeviceTexture@Engine@Spectre@@QEBAIXZ @ 0x180056828 (-GetMipLevels@DeviceTexture@Engine@Spectre@@QEBAIXZ.c)
 *     ?GetSampleCount@DeviceTexture@Engine@Spectre@@QEBAIXZ @ 0x180056840 (-GetSampleCount@DeviceTexture@Engine@Spectre@@QEBAIXZ.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 *     ??4?$ComPtr@UID3D11RenderTargetView@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800CB668 (--4-$ComPtr@UID3D11RenderTargetView@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?GetTexture@TextureD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@XZ @ 0x1800CF048 (-GetTexture@TextureD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall Spectre::Engine::D3D11::CommandListD3D11::SubmitCopyTexture2D(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        __int64 *a7,
        int a8,
        int a9)
{
  __int64 *DeviceTexture; // rax
  char v14; // bl
  __int64 v15; // rcx
  std::_Ref_count_base *v16; // rsi
  Spectre::Engine::DeviceTexture *v17; // rcx
  __int64 v18; // rcx
  __int64 *Texture; // rax
  char v20; // di
  char v21; // di
  __int64 *v22; // rax
  __int64 v23; // rcx
  char v24; // bl
  char v25; // bl
  std::_Ref_count_base *v26; // rsi
  Spectre::Engine::DeviceTexture *v27; // rcx
  __int64 v28; // rcx
  __int64 *v29; // rax
  char v30; // di
  char v31; // di
  _QWORD *v33; // rax
  __int64 v34; // r8
  _QWORD *v35; // rax
  __int64 v36; // r8
  __int64 v37; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+58h] [rbp-A8h] BYREF
  std::_Ref_count_base *v39; // [rsp+60h] [rbp-A0h]
  __int64 v40; // [rsp+68h] [rbp-98h] BYREF
  std::_Ref_count_base *v41; // [rsp+70h] [rbp-90h]
  Spectre::Engine::DeviceTexture *v42; // [rsp+78h] [rbp-88h] BYREF
  std::_Ref_count_base *v43; // [rsp+80h] [rbp-80h]
  __int64 v44; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v45[6]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v46[4]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v47[4]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+E8h] [rbp-18h] BYREF

  LODWORD(v37) = 0;
  v44 = 0LL;
  if ( *a7 )
  {
    DeviceTexture = Spectre::Engine::Texture::GetDeviceTexture(*a7, &v42, *(_DWORD *)(a1 + 88));
    v14 = 1;
    v15 = *DeviceTexture;
  }
  else
  {
    v39 = 0LL;
    DeviceTexture = &v38;
    v14 = 2;
    v15 = 0LL;
  }
  v40 = v15;
  v16 = (std::_Ref_count_base *)DeviceTexture[1];
  v41 = v16;
  *DeviceTexture = 0LL;
  DeviceTexture[1] = 0LL;
  if ( (v14 & 2) != 0 )
  {
    v14 &= ~2u;
    if ( v39 )
      std::_Ref_count_base::_Decref(v39);
  }
  if ( (v14 & 1) != 0 )
  {
    v14 &= ~1u;
    if ( v43 )
      std::_Ref_count_base::_Decref(v43);
  }
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v38, &v40);
  Spectre::Utils::spectre_safe_pointer_cast<Spectre::Engine::D3D11::TextureD3D11,Spectre::Engine::DeviceTexture>((__int64)&v42);
  if ( (unsigned int)Spectre::Engine::DeviceTexture::GetMipLevels(v42) > 1
    || (unsigned int)Spectre::Engine::DeviceTexture::GetSampleCount(v17) > 1 )
  {
    std::string::string(v46, (__int64)"CopyTexture2D does not support mipmapped or MSAA textures");
    v35 = std::string::string(
            v47,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
    Spectre::Engine::EngineException::EngineException(pExceptionObject, (__int64)v35, v36, (const char *)v46, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( v18 )
  {
    Texture = Spectre::Engine::D3D11::TextureD3D11::GetTexture(v18, &v40);
    v20 = 4;
  }
  else
  {
    v37 = 0LL;
    Texture = &v37;
    v20 = 8;
  }
  v21 = v14 | v20;
  Microsoft::WRL::ComPtr<ID3D11RenderTargetView>::operator=(&v44, Texture);
  if ( (v21 & 8) != 0 )
  {
    v21 &= ~8u;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v37);
  }
  if ( (v21 & 4) != 0 )
  {
    v21 &= ~4u;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
  }
  if ( v43 )
    std::_Ref_count_base::_Decref(v43);
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
  v37 = 0LL;
  if ( *a2 )
  {
    v22 = Spectre::Engine::Texture::GetDeviceTexture(*a2, &v38, *(_DWORD *)(a1 + 88));
    v23 = *v22;
    v24 = 16;
  }
  else
  {
    v43 = 0LL;
    v22 = (__int64 *)&v42;
    v23 = 0LL;
    v24 = 32;
  }
  v25 = v21 | v24;
  v40 = v23;
  v26 = (std::_Ref_count_base *)v22[1];
  v41 = v26;
  *v22 = 0LL;
  v22[1] = 0LL;
  if ( (v25 & 0x20) != 0 )
  {
    v25 &= ~0x20u;
    if ( v43 )
      std::_Ref_count_base::_Decref(v43);
  }
  if ( (v25 & 0x10) != 0 )
  {
    v25 &= ~0x10u;
    if ( v39 )
      std::_Ref_count_base::_Decref(v39);
  }
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v38, &v40);
  Spectre::Utils::spectre_safe_pointer_cast<Spectre::Engine::D3D11::TextureD3D11,Spectre::Engine::DeviceTexture>((__int64)&v42);
  if ( (unsigned int)Spectre::Engine::DeviceTexture::GetMipLevels(v42) > 1
    || (unsigned int)Spectre::Engine::DeviceTexture::GetSampleCount(v27) > 1 )
  {
    std::string::string(v47, (__int64)"CopyTexture2D does not support mipmapped or MSAA textures");
    v33 = std::string::string(
            v46,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
    Spectre::Engine::EngineException::EngineException(pExceptionObject, (__int64)v33, v34, (const char *)v47, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( v28 )
  {
    v29 = Spectre::Engine::D3D11::TextureD3D11::GetTexture(v28, &v38);
    v30 = 64;
  }
  else
  {
    v40 = 0LL;
    v29 = &v40;
    v30 = 0x80;
  }
  v31 = v25 | v30;
  Microsoft::WRL::ComPtr<ID3D11RenderTargetView>::operator=(&v37, v29);
  if ( v31 < 0 )
  {
    v31 &= ~0x80u;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
  }
  if ( (v31 & 0x40) != 0 )
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v38);
  if ( v43 )
    std::_Ref_count_base::_Decref(v43);
  if ( v26 )
    std::_Ref_count_base::_Decref(v26);
  v45[2] = 0;
  v45[0] = a8;
  v45[1] = a9;
  v45[3] = a5 + a8;
  v45[4] = a9 + a6;
  v45[5] = 1;
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, int, _DWORD, __int64, _DWORD, _DWORD *))(**(_QWORD **)(a1 + 144)
                                                                                                  + 368LL))(
    *(_QWORD *)(a1 + 144),
    v37,
    0LL,
    a3,
    a4,
    0,
    v44,
    0,
    v45);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v37);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v44);
}
