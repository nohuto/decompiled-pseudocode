/*
 * XREFs of ?CreateTextures@DepthBufferD3D11@D3D11@Engine@Spectre@@IEAAXUCreateTextureContext@1234@@Z @ 0x1800D65DC
 * Callers:
 *     ?Create@DepthBufferD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z @ 0x1800D5E20 (-Create@DepthBufferD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?D3D11_SetDebugName@@YAXPEAUID3D11DeviceChild@@PEBD@Z @ 0x18001145C (-D3D11_SetDebugName@@YAXPEAUID3D11DeviceChild@@PEBD@Z.c)
 *     ?InternalAddRef@?$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@IEBAXXZ @ 0x180011520 (-InternalAddRef@-$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??$?0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VDefaultSceneNodeTraversal@Engine@Spectre@@@1@@Z @ 0x180011DA0 (--$-0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@-$shared_ptr@VISceneNodeTraversal@Engine@Sp.c)
 *     ??$?8VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DD0 (--$-8VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$CreateResource@VDeviceTexture@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@XZ @ 0x180015EE4 (--$CreateResource@VDeviceTexture@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA-AV-$shared_p.c)
 *     ??$CreateResource@VTexture@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x180016268 (--$CreateResource@VTexture@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr_ea_180016268.c)
 *     ??$spectre_safe_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@Utils@Spectre@@YA?AV?$shared_ptr@VTextureD3D11@D3D11@Engine@Spectre@@@std@@V?$shared_ptr@VDeviceTexture@Engine@Spectre@@@3@@Z @ 0x180017600 (--$spectre_safe_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@Utils@Spectr.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18001DD9C (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??$static_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@std@@YA?AV?$shared_ptr@VTextureD3D11@D3D11@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@0@@Z @ 0x18001FC04 (--$static_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@std@@_ea_18001FC04.c)
 *     ?GetName@RendererResource@Engine@Spectre@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x1800295BC (-GetName@RendererResource@Engine@Spectre@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 *     ?SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z @ 0x1800297F0 (-SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z.c)
 *     ?Create@Texture@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@I@Z @ 0x180055D68 (-Create@Texture@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@I@Z.c)
 *     ?GetDeviceTexture@Texture@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x180056670 (-GetDeviceTexture@Texture@Engine@Spectre@@QEBA-AV-$shared_ptr@VDeviceTexture@Engine@Spectre@@@st.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 *     ?GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@XZ @ 0x1800C581C (-GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Device1@@@WRL@Microsof.c)
 *     ?ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z @ 0x1800C76D0 (-ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z.c)
 *     ?Create@TextureD3D11@D3D11@Engine@Spectre@@QEAAXV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@V?$ComPtr@UID3D11ShaderResourceView@@@67@I@Z @ 0x1800CD0A8 (-Create@TextureD3D11@D3D11@Engine@Spectre@@QEAAXV-$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@V-$C.c)
 *     ?GetTexture@TextureD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@XZ @ 0x1800CF048 (-GetTexture@TextureD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@.c)
 *     ??R?$_Func_class@XV?$shared_ptr@VTexture@Engine@Spectre@@@std@@W4Format@Engine@Spectre@@I@std@@QEBAXV?$shared_ptr@VTexture@Engine@Spectre@@@1@W4Format@Engine@Spectre@@I@Z @ 0x1800D5BE0 (--R-$_Func_class@XV-$shared_ptr@VTexture@Engine@Spectre@@@std@@W4Format@Engine@Spectre@@I@std@@Q.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall Spectre::Engine::D3D11::DepthBufferD3D11::CreateTextures(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  __int64 *v5; // rax
  __int64 v6; // r13
  _QWORD *v7; // rax
  int v8; // r8d
  __int64 *DeviceTexture; // rax
  __int64 v10; // rdx
  __int64 *v11; // rax
  _QWORD *v12; // rax
  int v13; // r8d
  int v14; // r9d
  __int64 *v15; // rax
  __int64 *v16; // rax
  Spectre::Engine::DeviceTexture *v17; // rbx
  _QWORD *Device; // rax
  __int64 v19; // rsi
  __int64 (__fastcall *v20)(__int64, Spectre::Engine::DeviceTexture *, int *, struct ID3D11DeviceChild **); // rdi
  _QWORD *v21; // rax
  __int64 v22; // r8
  const char *Name; // rax
  __int64 *v24; // rax
  __int64 *v25; // rax
  __int64 v26; // r9
  __int64 v28; // [rsp+30h] [rbp-D0h] BYREF
  std::_Ref_count_base *v29; // [rsp+38h] [rbp-C8h]
  Spectre::Engine::DeviceTexture *v30; // [rsp+40h] [rbp-C0h] BYREF
  std::_Ref_count_base *v31; // [rsp+48h] [rbp-B8h]
  Spectre::Engine::DeviceTexture *v32; // [rsp+50h] [rbp-B0h] BYREF
  struct ID3D11DeviceChild *v33; // [rsp+58h] [rbp-A8h] BYREF
  struct ID3D11DeviceChild *v34; // [rsp+60h] [rbp-A0h] BYREF
  Spectre::Engine::D3D11::RenderDeviceD3D11 *v35; // [rsp+68h] [rbp-98h] BYREF
  std::_Ref_count_base *v36; // [rsp+70h] [rbp-90h]
  int v37; // [rsp+78h] [rbp-88h] BYREF
  __int64 v38; // [rsp+7Ch] [rbp-84h]
  int v39; // [rsp+84h] [rbp-7Ch]
  __int64 v40; // [rsp+88h] [rbp-78h]
  __int64 v41; // [rsp+90h] [rbp-70h]
  Spectre::Engine::D3D11::TextureD3D11 *v42; // [rsp+98h] [rbp-68h] BYREF
  std::_Ref_count_base *v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+B8h] [rbp-48h] BYREF
  std::_Ref_count_base *v45; // [rsp+C0h] [rbp-40h]
  _BYTE v46[8]; // [rsp+D8h] [rbp-28h] BYREF
  int v47; // [rsp+E0h] [rbp-20h]
  _QWORD pExceptionObject[7]; // [rsp+108h] [rbp+8h] BYREF

  v41 = a2;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  v5 = Spectre::Engine::Engine::CreateResource<Spectre::Engine::Texture,>(v4, &v28);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 128), v5);
  if ( v29 )
    std::_Ref_count_base::_Decref(v29);
  v6 = a2 + 8;
  v7 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v28,
         (_QWORD *)(a1 + 128));
  std::_Func_class<void,std::shared_ptr<Spectre::Engine::Texture>,enum Spectre::Engine::Format,unsigned int>::operator()(
    a2 + 8,
    (__int64)v7,
    v8,
    4);
  DeviceTexture = Spectre::Engine::Texture::GetDeviceTexture(*(_QWORD *)(a1 + 128), &v28, *(_DWORD *)(a1 + 88));
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 96), DeviceTexture);
  if ( v29 )
    std::_Ref_count_base::_Decref(v29);
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock(a1 + 72, &v42);
  std::static_pointer_cast<Spectre::Engine::D3D11::TextureD3D11,Spectre::Engine::DeviceTexture>(&v35, (__int64 *)&v42);
  if ( v43 )
    std::_Ref_count_base::_Decref(v43);
  if ( *(_BYTE *)(a2 + 4) )
  {
    v11 = Spectre::Engine::Engine::CreateResource<Spectre::Engine::Texture,>(v4, &v28);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 144), v11);
    if ( v29 )
      std::_Ref_count_base::_Decref(v29);
    Spectre::Engine::RendererResource::SetOption(*(_QWORD *)(a1 + 144), 2, 0);
    v12 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
            &v28,
            (_QWORD *)(a1 + 144));
    v14 = 256;
  }
  else
  {
    if ( !*(_BYTE *)(a2 + 5) )
      goto LABEL_33;
    v15 = Spectre::Engine::Engine::CreateResource<Spectre::Engine::Texture,>(v4, &v28);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 192), v15);
    if ( v29 )
      std::_Ref_count_base::_Decref(v29);
    Spectre::Engine::RendererResource::SetOption(*(_QWORD *)(a1 + 192), 2, 0);
    v12 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
            &v28,
            (_QWORD *)(a1 + 192));
    v14 = 1024;
  }
  std::_Func_class<void,std::shared_ptr<Spectre::Engine::Texture>,enum Spectre::Engine::Format,unsigned int>::operator()(
    a2 + 8,
    (__int64)v12,
    v13,
    v14);
  if ( *(_BYTE *)(a2 + 5) && std::operator==<Spectre::Engine::Scene>((_QWORD *)(a1 + 192)) )
  {
    Spectre::Engine::Texture::GetDeviceTexture(*(_QWORD *)(a1 + 144), &v28, *(_DWORD *)(a1 + 88));
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
      &v42,
      &v28);
    v16 = (__int64 *)Spectre::Utils::spectre_safe_pointer_cast<Spectre::Engine::D3D11::TextureD3D11,Spectre::Engine::DeviceTexture>((__int64)&v30);
    Spectre::Engine::D3D11::TextureD3D11::GetTexture(*v16, (__int64 *)&v32);
    if ( v31 )
      std::_Ref_count_base::_Decref(v31);
    v17 = v32;
    (*(void (__fastcall **)(Spectre::Engine::DeviceTexture *, _BYTE *))(*(_QWORD *)v32 + 80LL))(v32, v46);
    v40 = 0LL;
    v37 = 47;
    v38 = 4LL;
    v39 = v47;
    v33 = 0LL;
    Device = Spectre::Engine::D3D11::RenderDeviceD3D11::GetDevice((__int64)v35, &v30);
    v19 = *Device;
    v20 = *(__int64 (__fastcall **)(__int64, Spectre::Engine::DeviceTexture *, int *, struct ID3D11DeviceChild **))(*(_QWORD *)*Device + 56LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v33);
    LODWORD(v20) = v20(v19, v17, &v37, &v33);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v30);
    Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(v35, (int)v20);
    if ( (int)v20 < 0 )
    {
      std::string::string(&v42, (__int64)"Failed to create ShaderResourceView for stencil buffer");
      v21 = std::string::string(
              &v44,
              (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\depthbufferd3d11.cpp");
      Spectre::Engine::EngineException::EngineException(pExceptionObject, (__int64)v21, v22, (const char *)&v42, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    Name = (const char *)Spectre::Engine::RendererResource::GetName(a1, &v44);
    if ( *((_QWORD *)Name + 3) >= 0x10uLL )
      Name = *(const char **)Name;
    D3D11_SetDebugName(v33, Name);
    std::string::_Tidy_deallocate((__int64)&v44);
    v24 = Spectre::Engine::RenderDevice::CreateResource<Spectre::Engine::DeviceTexture>((__int64)v35, &v44);
    std::static_pointer_cast<Spectre::Engine::D3D11::TextureD3D11,Spectre::Engine::DeviceTexture>(&v42, v24);
    if ( v45 )
      std::_Ref_count_base::_Decref(v45);
    v34 = v33;
    Microsoft::WRL::ComPtr<ID3D11ShaderResourceView>::InternalAddRef((__int64 *)&v34);
    v30 = v17;
    Microsoft::WRL::ComPtr<ID3D11ShaderResourceView>::InternalAddRef((__int64 *)&v30);
    Spectre::Engine::D3D11::TextureD3D11::Create(v42, (__int64 *)&v30, (__int64 *)&v34, 0x400u);
    v25 = Spectre::Engine::Engine::CreateResource<Spectre::Engine::Texture,>(v4, &v30);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 192), v25);
    if ( v31 )
      std::_Ref_count_base::_Decref(v31);
    Spectre::Engine::RendererResource::SetOption(*(_QWORD *)(a1 + 192), 2, 0);
    std::shared_ptr<Spectre::Engine::ISceneNodeTraversal>::shared_ptr<Spectre::Engine::ISceneNodeTraversal>(&v30, &v42);
    Spectre::Engine::Texture::Create(v26, &v30);
    if ( v31 )
      std::_Ref_count_base::_Decref(v31);
    if ( v43 )
      std::_Ref_count_base::_Decref(v43);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v33);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v32);
    if ( v29 )
      std::_Ref_count_base::_Decref(v29);
  }
LABEL_33:
  if ( v36 )
    std::_Ref_count_base::_Decref(v36);
  return std::_Func_class<void,>::_Tidy(v6, v10);
}
