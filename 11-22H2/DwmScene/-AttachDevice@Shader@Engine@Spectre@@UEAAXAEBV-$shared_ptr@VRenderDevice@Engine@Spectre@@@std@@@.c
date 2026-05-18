/*
 * XREFs of ?AttachDevice@Shader@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18008AC60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??$?8VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DD0 (--$-8VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetID@RenderDevice@Engine@Spectre@@QEBA?AW4RenderDeviceID@23@XZ @ 0x1800265D0 (-GetID@RenderDevice@Engine@Spectre@@QEBA-AW4RenderDeviceID@23@XZ.c)
 *     ?AttachDevice@SharedResource@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800294D0 (-AttachDevice@SharedResource@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@.c)
 *     ?lock@?$weak_ptr@VGpuProfiler@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VGpuProfiler@Engine@Spectre@@@2@XZ @ 0x18003888C (-lock@-$weak_ptr@VGpuProfiler@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VGpuProfiler@Engine@Spec.c)
 *     ??$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@?$map@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@@std@@PEAX@std@@_N@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x1800541F0 (--$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@-$map@W4RenderDeviceID@Engi_ea_1800541F0.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HJAEBV34@_N@Z @ 0x18006ED68 (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$a_ea_18006ED68.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Spectre::Engine::Shader::AttachDevice(__int64 a1, __int64 *a2)
{
  int ID; // ebx
  __int64 v5; // r8
  __int64 v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // [rsp+30h] [rbp-79h] BYREF
  __int64 v10; // [rsp+38h] [rbp-71h] BYREF
  std::_Ref_count_base *v11; // [rsp+40h] [rbp-69h]
  __int64 v12; // [rsp+58h] [rbp-51h] BYREF
  std::_Ref_count_base *v13; // [rsp+60h] [rbp-49h]
  _QWORD v14[4]; // [rsp+68h] [rbp-41h] BYREF
  _QWORD v15[4]; // [rsp+88h] [rbp-21h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+A8h] [rbp-1h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2) )
  {
    Spectre::Engine::SharedResource::AttachDevice(a1, a2);
    std::weak_ptr<Spectre::Engine::GpuProfiler>::lock(a1 + 120, &v12);
    if ( !v12 )
    {
      std::string::string(
        v15,
        (__int64)"Shader::AttachDevice() -- shader program no longer available for creating new device shader");
      v9 = std::string::string(
             v14,
             (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader.cpp");
      v7 = std::string::string(&v10, (__int64)v9);
      Spectre::Engine::EngineException::EngineException(
        pExceptionObject,
        (__int64)v7,
        v8,
        -2147418113,
        (const char *)v15,
        0);
      pExceptionObject[0] = &Spectre::Engine::EngineUnexpectedException::`vftable';
      std::string::_Tidy_deallocate((__int64)v9);
      throw (Spectre::Engine::EngineUnexpectedException *)pExceptionObject;
    }
    ID = Spectre::Engine::RenderDevice::GetID(*a2);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64 *))(*(_QWORD *)a1 + 48LL))(a1, &v10, v5, a2);
    LODWORD(v9) = ID;
    v6 = std::map<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceShader>>::_Try_emplace<enum Spectre::Engine::RenderDeviceID const &,>(
           (__int64 *)(a1 + 136),
           (__int64)v14,
           (unsigned int *)&v9);
    std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(*(_QWORD *)v6 + 40LL), &v10);
    if ( std::operator==<Spectre::Engine::Scene>(&v10) )
      *(_BYTE *)(a1 + 152) = 0;
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
  }
}
