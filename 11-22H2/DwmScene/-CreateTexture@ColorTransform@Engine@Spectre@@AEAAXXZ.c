/*
 * XREFs of ?CreateTexture@ColorTransform@Engine@Spectre@@AEAAXXZ @ 0x18008F910
 * Callers:
 *     ?Generate@ColorTransform@Engine@Spectre@@QEAAX_KV?$function@$$A6A?AUColor@Math@Utils@Spectre@@U1234@@Z@std@@@Z @ 0x18008FD48 (-Generate@ColorTransform@Engine@Spectre@@QEAAX_KV-$function@$$A6A-AUColor@Math@Utils@Spectre@@U1.c)
 *     ?Import@ColorTransform@Engine@Spectre@@QEAAXPEBX_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18009003C (-Import@ColorTransform@Engine@Spectre@@QEAAXPEBX_KAEBV-$basic_string@DU-$char_traits@D@std@@V-$a.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180013300 (-_Tidy@-$vector@V-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VLigh.c)
 *     ??$CreateResource@VTexture@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x180016268 (--$CreateResource@VTexture@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr_ea_180016268.c)
 *     ?GetID@RenderDevice@Engine@Spectre@@QEBA?AW4RenderDeviceID@23@XZ @ 0x1800265D0 (-GetID@RenderDevice@Engine@Spectre@@QEBA-AW4RenderDeviceID@23@XZ.c)
 *     ?SetName@RendererResource@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800297A4 (-SetName@RendererResource@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 *     ?SafeGetDeviceList@Engine@1Spectre@@QEAA?AV?$vector@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x1800364DC (-SafeGetDeviceList@Engine@1Spectre@@QEAA-AV-$vector@V-$shared_ptr@VRenderDevice@Engine@Spectre@@.c)
 *     ??0EngineNotImplException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18004AC7C (--0EngineNotImplException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 *     ?Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z @ 0x180055E20 (-Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z.c)
 *     ?GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ @ 0x18008139C (-GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::ColorTransform::CreateTexture(Spectre::Engine::ColorTransform *this)
{
  struct Spectre::Engine::Engine *Engine; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rcx
  _QWORD *v8; // rax
  __int64 v9; // r8
  struct Spectre::Engine::Engine *v10; // rax
  __int64 *v11; // rax
  __int64 *v12; // rsi
  __int64 v13; // rbx
  void **v14; // rax
  rsize_t v15; // [rsp+48h] [rbp-69h]
  __int64 v16; // [rsp+58h] [rbp-59h] BYREF
  std::_Ref_count_base *v17; // [rsp+60h] [rbp-51h]
  _QWORD v18[3]; // [rsp+70h] [rbp-41h] BYREF
  _QWORD v19[4]; // [rsp+88h] [rbp-29h] BYREF
  _QWORD v20[4]; // [rsp+A8h] [rbp-9h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+C8h] [rbp+17h] BYREF

  Engine = Spectre::Engine::Component::GetEngine(this);
  Spectre::Engine::Engine::SafeGetDeviceList((__int64)Engine, v18);
  v3 = (_QWORD *)v18[0];
  v4 = (_QWORD *)v18[1];
  while ( v3 != v4 )
  {
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v16, v3);
    if ( (unsigned int)Spectre::Engine::RenderDevice::GetID(v16)
      && !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 96LL))(v5, 1LL) )
    {
      v6 = *((_QWORD *)this + 18);
      if ( !v6 || ((v6 - 1) & v6) != 0 )
      {
        std::string::string(
          v20,
          (__int64)"ColorTransform::CreateResources() -- volume texture must be power of two below feature level 10.0");
        v8 = std::string::string(
               v19,
               (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\en"
                        "gine\\colortransform.cpp");
        Spectre::Engine::EngineNotImplException::EngineNotImplException(pExceptionObject, (__int64)v8, v9, (__int64)v20);
        throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
      }
    }
    if ( v17 )
      std::_Ref_count_base::_Decref(v17);
    v3 += 2;
  }
  v10 = Spectre::Engine::Component::GetEngine(this);
  v11 = Spectre::Engine::Engine::CreateResource<Spectre::Engine::Texture,>((__int64)v10, &v16);
  v12 = (__int64 *)((char *)this + 96);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 12, v11);
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
  v13 = *v12;
  v14 = (void **)std::string::string(v20, (__int64)"ColorTransform");
  Spectre::Engine::RendererResource::SetName(v13, v14);
  LODWORD(v15) = (*((_QWORD *)this + 15) - *((_QWORD *)this + 14)) & 0xFFFFFFFC;
  Spectre::Engine::Texture::Create(
    *v12,
    *((_DWORD *)this + 36),
    *((_DWORD *)this + 36),
    *((_DWORD *)this + 36),
    0x10u,
    0,
    1,
    *((void **)this + 14),
    v15,
    0LL);
  std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::_Tidy((__int64)v18);
}
