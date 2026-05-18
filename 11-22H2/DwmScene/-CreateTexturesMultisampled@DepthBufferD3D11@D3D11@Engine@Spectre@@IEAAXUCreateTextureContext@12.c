/*
 * XREFs of ?CreateTexturesMultisampled@DepthBufferD3D11@D3D11@Engine@Spectre@@IEAAXUCreateTextureContext@1234@@Z @ 0x1800D6A74
 * Callers:
 *     ?Create@DepthBufferD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z @ 0x1800D5E20 (-Create@DepthBufferD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$CreateResource@VTexture@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x180016268 (--$CreateResource@VTexture@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr_ea_180016268.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18001DD9C (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ?GetDeviceTexture@Texture@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x180056670 (-GetDeviceTexture@Texture@Engine@Spectre@@QEBA-AV-$shared_ptr@VDeviceTexture@Engine@Spectre@@@st.c)
 *     ??R?$_Func_class@XV?$shared_ptr@VTexture@Engine@Spectre@@@std@@W4Format@Engine@Spectre@@I@std@@QEBAXV?$shared_ptr@VTexture@Engine@Spectre@@@1@W4Format@Engine@Spectre@@I@Z @ 0x1800D5BE0 (--R-$_Func_class@XV-$shared_ptr@VTexture@Engine@Spectre@@@std@@W4Format@Engine@Spectre@@I@std@@Q.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Spectre::Engine::D3D11::DepthBufferD3D11::CreateTexturesMultisampled(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  __int64 *v5; // rax
  int v6; // r14d
  __int64 v7; // rsi
  _QWORD *v8; // rax
  int v9; // r8d
  __int64 *DeviceTexture; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // r8
  __int64 *v16; // rax
  _QWORD *v17; // rax
  __int64 *v18; // rax
  _QWORD *v19; // rax
  __int64 v21; // [rsp+30h] [rbp-69h] BYREF
  std::_Ref_count_base *v22; // [rsp+38h] [rbp-61h]
  __int64 v23; // [rsp+40h] [rbp-59h]
  __int64 v24; // [rsp+48h] [rbp-51h] BYREF
  std::_Ref_count_base *v25; // [rsp+50h] [rbp-49h]
  _QWORD v26[4]; // [rsp+68h] [rbp-31h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+88h] [rbp-11h] BYREF

  v23 = a2;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  v5 = Spectre::Engine::Engine::CreateResource<Spectre::Engine::Texture,>(v4, &v21);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 128), v5);
  if ( v22 )
    std::_Ref_count_base::_Decref(v22);
  v6 = 69;
  if ( *(_BYTE *)(a2 + 6) )
  {
    v6 = 325;
    std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(a1 + 176), (_QWORD *)(a1 + 128));
  }
  v7 = a2 + 8;
  v8 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v21,
         (_QWORD *)(a1 + 128));
  std::_Func_class<void,std::shared_ptr<Spectre::Engine::Texture>,enum Spectre::Engine::Format,unsigned int>::operator()(
    a2 + 8,
    (__int64)v8,
    v9,
    v6);
  DeviceTexture = Spectre::Engine::Texture::GetDeviceTexture(*(_QWORD *)(a1 + 128), &v21, *(_DWORD *)(a1 + 88));
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 96), DeviceTexture);
  if ( v22 )
    std::_Ref_count_base::_Decref(v22);
  if ( *(_BYTE *)(a2 + 5) )
  {
    std::string::string(v26, (__int64)"Single sampled stencil reads are not supported");
    v12 = std::string::string(
            &v24,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\depthbufferd3d11.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v12,
      v13,
      (__int64)v26,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( *(_BYTE *)(a2 + 4) )
  {
    if ( *(_DWORD *)a2 != 2 )
    {
      std::string::string(&v24, (__int64)"Single sampled readable depth is only supported for Depth32 format");
      v14 = std::string::string(
              v26,
              (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\depthbufferd3d11.cpp");
      Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
        pExceptionObject,
        (__int64)v14,
        v15,
        (__int64)&v24,
        0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    std::weak_ptr<Spectre::Engine::RenderDevice>::lock(a1 + 72, &v24);
    v16 = Spectre::Engine::Engine::CreateResource<Spectre::Engine::Texture,>(v4, &v21);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 160), v16);
    if ( v22 )
      std::_Ref_count_base::_Decref(v22);
    v17 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
            &v21,
            (_QWORD *)(a1 + 160));
    std::_Func_class<void,std::shared_ptr<Spectre::Engine::Texture>,enum Spectre::Engine::Format,unsigned int>::operator()(
      v7,
      (__int64)v17,
      3,
      64);
    v18 = Spectre::Engine::Engine::CreateResource<Spectre::Engine::Texture,>(v4, &v21);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 144), v18);
    if ( v22 )
      std::_Ref_count_base::_Decref(v22);
    v19 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
            &v21,
            (_QWORD *)(a1 + 144));
    std::_Func_class<void,std::shared_ptr<Spectre::Engine::Texture>,enum Spectre::Engine::Format,unsigned int>::operator()(
      v7,
      (__int64)v19,
      3,
      1);
    if ( v25 )
      std::_Ref_count_base::_Decref(v25);
  }
  return std::_Func_class<void,>::_Tidy(v7, v11);
}
