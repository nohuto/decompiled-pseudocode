/*
 * XREFs of ?Create@DepthBufferD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z @ 0x1800D5E20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?D3D11_SetDebugName@@YAXPEAUID3D11DeviceChild@@PEBD@Z @ 0x18001145C (-D3D11_SetDebugName@@YAXPEAUID3D11DeviceChild@@PEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$CreateResource@VTexture@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x180016268 (--$CreateResource@VTexture@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr_ea_180016268.c)
 *     ??$spectre_safe_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@Utils@Spectre@@YA?AV?$shared_ptr@VTextureD3D11@D3D11@Engine@Spectre@@@std@@V?$shared_ptr@VDeviceTexture@Engine@Spectre@@@3@@Z @ 0x180017600 (--$spectre_safe_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@Utils@Spectr.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x18001C59C (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C59C.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18001DD9C (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??$static_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@std@@YA?AV?$shared_ptr@VTextureD3D11@D3D11@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@0@@Z @ 0x18001FC04 (--$static_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@std@@_ea_18001FC04.c)
 *     ?GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ @ 0x180026598 (-GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?GetName@RendererResource@Engine@Spectre@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x1800295BC (-GetName@RendererResource@Engine@Spectre@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 *     ?SetName@RendererResource@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800297A4 (-SetName@RendererResource@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 *     ?SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z @ 0x1800297F0 (-SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ??$CreateResource@VDeviceSampler@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@XZ @ 0x1800540B0 (--$CreateResource@VDeviceSampler@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA-AV-$shared_p.c)
 *     ??$make_shared@USamplerStateDesc@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@USamplerStateDesc@Engine@Spectre@@@0@XZ @ 0x180054350 (--$make_shared@USamplerStateDesc@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@USamplerStateDesc@En.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 *     ?GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@XZ @ 0x1800C581C (-GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Device1@@@WRL@Microsof.c)
 *     ?ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z @ 0x1800C76D0 (-ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z.c)
 *     ?GetFormat@D3DUtils@D3D11@Engine@Spectre@@SA?AW4DXGI_FORMAT@@W4Format@34@W4ColorSpace@234@@Z @ 0x1800C9E48 (-GetFormat@D3DUtils@D3D11@Engine@Spectre@@SA-AW4DXGI_FORMAT@@W4Format@34@W4ColorSpace@234@@Z.c)
 *     ?GetTexture@TextureD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@XZ @ 0x1800CF048 (-GetTexture@TextureD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@.c)
 *     std::function_void___cdecl(std::shared_ptr_Spectre::Engine::Texture__enum_Spectre::Engine::Format_unsigned_int)_::operator___lambda_5efd0f16faa6f6439fdb99826dc3e8ab__0_ @ 0x1800D573C (std--function_void___cdecl(std--shared_ptr_Spectre--Engine--Texture__enum_Spectre--Engine--Forma.c)
 *     ??0CreateTextureContext@DepthBufferD3D11@D3D11@Engine@Spectre@@QEAA@AEBU01234@@Z @ 0x1800D5864 (--0CreateTextureContext@DepthBufferD3D11@D3D11@Engine@Spectre@@QEAA@AEBU01234@@Z.c)
 *     ?CreateTextures@DepthBufferD3D11@D3D11@Engine@Spectre@@IEAAXUCreateTextureContext@1234@@Z @ 0x1800D65DC (-CreateTextures@DepthBufferD3D11@D3D11@Engine@Spectre@@IEAAXUCreateTextureContext@1234@@Z.c)
 *     ?CreateTexturesMultisampled@DepthBufferD3D11@D3D11@Engine@Spectre@@IEAAXUCreateTextureContext@1234@@Z @ 0x1800D6A74 (-CreateTexturesMultisampled@DepthBufferD3D11@D3D11@Engine@Spectre@@IEAAXUCreateTextureContext@12.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall Spectre::Engine::D3D11::DepthBufferD3D11::Create(__int64 a1, int a2, int a3, int a4, unsigned int a5)
{
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int16 v9; // cx
  _QWORD *v10; // rax
  __int64 v11; // r8
  struct Spectre::Engine::Engine *Engine; // rax
  __int64 *v13; // rax
  __int64 *v14; // r14
  __int64 v15; // rbx
  _QWORD *Name; // rax
  void **v17; // rax
  int v18; // r8d
  int v19; // r13d
  int v20; // r8d
  __int64 v21; // rbx
  void **v22; // rax
  Spectre::Engine::RenderDevice *v23; // rax
  _QWORD *v24; // rax
  void (__fastcall *v25)(__int64, _QWORD *); // r8
  __int64 v26; // r9
  BOOL v27; // edx
  Spectre::Engine::D3D11::DepthBufferD3D11::CreateTextureContext *TextureContext; // rax
  Spectre::Engine::D3D11::DepthBufferD3D11::CreateTextureContext *v29; // rax
  __int64 v30; // rbx
  __int64 (__fastcall *v31)(__int64, __int64, int *, __int64); // rdi
  int v32; // eax
  const char *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // [rsp+30h] [rbp-D0h] BYREF
  std::_Ref_count_base *v36; // [rsp+38h] [rbp-C8h]
  Spectre::Engine::RenderDevice *v37; // [rsp+50h] [rbp-B0h] BYREF
  std::_Ref_count_base *v38; // [rsp+58h] [rbp-A8h]
  Spectre::Engine::D3D11::RenderDeviceD3D11 *v39; // [rsp+70h] [rbp-90h] BYREF
  std::_Ref_count_base *v40; // [rsp+78h] [rbp-88h]
  int Format; // [rsp+80h] [rbp-80h] BYREF
  int v42; // [rsp+84h] [rbp-7Ch]
  __int128 v43; // [rsp+88h] [rbp-78h]
  __int64 v44; // [rsp+98h] [rbp-68h] BYREF
  std::_Ref_count_base *v45; // [rsp+A0h] [rbp-60h]
  _QWORD pExceptionObject[9]; // [rsp+B8h] [rbp-48h] BYREF
  int v47; // [rsp+100h] [rbp+0h] BYREF
  char v48; // [rsp+104h] [rbp+4h]
  bool v49; // [rsp+105h] [rbp+5h]
  bool v50; // [rsp+106h] [rbp+6h]
  _BYTE v51[56]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v52; // [rsp+140h] [rbp+40h]
  int v53; // [rsp+1A8h] [rbp+A8h] BYREF
  int v54; // [rsp+1B0h] [rbp+B0h] BYREF

  v54 = a3;
  v53 = a2;
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock(a1 + 72, &v37);
  if ( v38 )
    std::_Ref_count_base::_Decref(v38);
  if ( (unsigned int)(a4 - 1) > 1 )
  {
    std::string::string(&v44, (__int64)"Invalid format for DepthBuffer");
    v7 = std::string::string(
           &v37,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\depthbufferd3d11.cpp");
    Spectre::Engine::EngineException::EngineException(pExceptionObject, (__int64)v7, v8, (const char *)&v44, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock(a1 + 72, &v35);
  std::static_pointer_cast<Spectre::Engine::D3D11::TextureD3D11,Spectre::Engine::DeviceTexture>(&v39, &v35);
  if ( v36 )
    std::_Ref_count_base::_Decref(v36);
  v9 = a5;
  *(_BYTE *)(a1 + 256) = (a5 & 0x40) != 0;
  v52 = 0LL;
  v47 = a4;
  v48 = HIBYTE(v9) & 1;
  v49 = (v9 & 0x400) != 0;
  v50 = (v9 & 0x200) != 0;
  pExceptionObject[0] = a1;
  pExceptionObject[1] = &v53;
  pExceptionObject[2] = &v54;
  pExceptionObject[3] = &a5;
  pExceptionObject[4] = &v39;
  std::function_void___cdecl_std::shared_ptr_Spectre::Engine::Texture__enum_Spectre::Engine::Format_unsigned_int__::operator___lambda_5efd0f16faa6f6439fdb99826dc3e8ab__0_((__int64)v51);
  a5 = a5 & 0xFFFFF8BA | 1;
  if ( v49 && a4 != 1 )
  {
    std::string::string(
      &v44,
      (__int64)"Readable stencil requested for stencil-buffer format that does not support stencil");
    v10 = std::string::string(
            &v37,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\depthbufferd3d11.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v10,
      v11,
      (__int64)&v44,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  Engine = Spectre::Engine::RenderDevice::GetEngine(v37);
  v13 = Spectre::Engine::Engine::CreateResource<Spectre::Engine::Texture,>((__int64)Engine, &v35);
  v14 = (__int64 *)(a1 + 128);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 128), v13);
  if ( v36 )
    std::_Ref_count_base::_Decref(v36);
  v15 = *v14;
  Name = Spectre::Engine::RendererResource::GetName(a1, &v44);
  v17 = (void **)std::operator+<char>(&v35, Name, (__int64)"Shared Texture");
  Spectre::Engine::RendererResource::SetName(v15, v17);
  std::string::_Tidy_deallocate((__int64)&v44);
  Spectre::Engine::RendererResource::SetOption(*v14, 1, 0);
  v19 = v18 + 2;
  Spectre::Engine::RendererResource::SetOption(*v14, v18 + 2, v18);
  Spectre::Engine::RendererResource::SetOption(*v14, v20 + 4, v20);
  if ( v48 || v49 || v50 )
  {
    Spectre::Engine::RenderDevice::CreateResource<Spectre::Engine::DeviceSampler>((__int64)v37, &v44);
    v21 = v44;
    v22 = (void **)std::string::string(&v37, (__int64)"DepthBuffer Readable Sampler");
    Spectre::Engine::RendererResource::SetName(v21, v22);
    if ( v48 )
      std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(a1 + 208), &v44);
    if ( v49 )
      std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(a1 + 240), &v44);
    if ( v50 )
      std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(a1 + 224), &v44);
    std::make_shared<Spectre::Engine::SamplerStateDesc,>(&v37);
    v23 = v37;
    *(_DWORD *)v37 = 0;
    *((_DWORD *)v23 + 1) = v19;
    *((_DWORD *)v23 + 2) = v19;
    *((_DWORD *)v23 + 3) = v19;
    v24 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
            &v35,
            &v37);
    v25(v26, v24);
    if ( v38 )
      std::_Ref_count_base::_Decref(v38);
    if ( v45 )
      std::_Ref_count_base::_Decref(v45);
  }
  v43 = 0LL;
  if ( (unsigned int)(a4 - 23) <= 1 )
    v27 = v19;
  else
    v27 = (a5 & 8) != 0;
  Format = Spectre::Engine::D3D11::D3DUtils::GetFormat(a4, v27);
  if ( *(_BYTE *)(a1 + 256) )
  {
    v42 = 5;
    TextureContext = Spectre::Engine::D3D11::DepthBufferD3D11::CreateTextureContext::CreateTextureContext(
                       (Spectre::Engine::D3D11::DepthBufferD3D11::CreateTextureContext *)pExceptionObject,
                       (const struct Spectre::Engine::D3D11::DepthBufferD3D11::CreateTextureContext *)&v47);
    Spectre::Engine::D3D11::DepthBufferD3D11::CreateTexturesMultisampled(a1, TextureContext);
  }
  else
  {
    v42 = 3;
    v29 = Spectre::Engine::D3D11::DepthBufferD3D11::CreateTextureContext::CreateTextureContext(
            (Spectre::Engine::D3D11::DepthBufferD3D11::CreateTextureContext *)pExceptionObject,
            (const struct Spectre::Engine::D3D11::DepthBufferD3D11::CreateTextureContext *)&v47);
    Spectre::Engine::D3D11::DepthBufferD3D11::CreateTextures(a1, v29);
  }
  Spectre::Engine::D3D11::RenderDeviceD3D11::GetDevice((__int64)v39, &v35);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    &v44,
    (_QWORD *)(a1 + 96));
  Spectre::Utils::spectre_safe_pointer_cast<Spectre::Engine::D3D11::TextureD3D11,Spectre::Engine::DeviceTexture>((__int64)&v37);
  Spectre::Engine::D3D11::TextureD3D11::GetTexture((__int64)v37, &v44);
  v30 = v35;
  v31 = *(__int64 (__fastcall **)(__int64, __int64, int *, __int64))(*(_QWORD *)v35 + 80LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 112));
  v32 = v31(v30, v44, &Format, a1 + 112);
  Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(v39, v32);
  v33 = (const char *)Spectre::Engine::RendererResource::GetName(a1, pExceptionObject);
  if ( *((_QWORD *)v33 + 3) >= 0x10uLL )
    v33 = *(const char **)v33;
  D3D11_SetDebugName(*(struct ID3D11DeviceChild **)(a1 + 112), v33);
  std::string::_Tidy_deallocate((__int64)pExceptionObject);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v44);
  if ( v38 )
    std::_Ref_count_base::_Decref(v38);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
  std::_Func_class<void,>::_Tidy((__int64)v51, v34);
  if ( v40 )
    std::_Ref_count_base::_Decref(v40);
}
