/*
 * XREFs of ?Load@Sampler@Engine@Spectre@@UEAAXPEBUSamplerDefinition@Framework@3@I@Z @ 0x180054AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180013300 (-_Tidy@-$vector@V-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VLigh.c)
 *     ?GetID@RenderDevice@Engine@Spectre@@QEBA?AW4RenderDeviceID@23@XZ @ 0x1800265D0 (-GetID@RenderDevice@Engine@Spectre@@QEBA-AW4RenderDeviceID@23@XZ.c)
 *     ?GetEngine@SharedResource@Engine@Spectre@@UEBAPEAV223@XZ @ 0x1800295B0 (-GetEngine@SharedResource@Engine@Spectre@@UEBAPEAV223@XZ.c)
 *     ?SafeGetDeviceList@Engine@1Spectre@@QEAA?AV?$vector@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x1800364DC (-SafeGetDeviceList@Engine@1Spectre@@QEAA-AV-$vector@V-$shared_ptr@VRenderDevice@Engine@Spectre@@.c)
 *     ??$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@?$map@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@@std@@PEAX@std@@_N@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x1800541F0 (--$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@-$map@W4RenderDeviceID@Engi_ea_1800541F0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::Sampler::Load(
        Spectre::Engine::Sampler *this,
        const struct Spectre::Framework::SamplerDefinition *a2)
{
  struct Spectre::Engine::Engine *Engine; // rax
  unsigned int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // [rsp+20h] [rbp-50h] BYREF
  std::_Ref_count_base *v10; // [rsp+28h] [rbp-48h]
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  std::_Ref_count_base *v12; // [rsp+38h] [rbp-38h]
  _BYTE v13[16]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v14; // [rsp+50h] [rbp-20h] BYREF
  __int64 v15; // [rsp+58h] [rbp-18h]
  unsigned int ID; // [rsp+98h] [rbp+28h] BYREF

  Engine = Spectre::Engine::SharedResource::GetEngine(this);
  Spectre::Engine::Engine::SafeGetDeviceList((__int64)Engine, &v14);
  v5 = 0;
  v6 = v14;
  if ( (v15 - v14) >> 4 )
  {
    v7 = 0LL;
    do
    {
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
        &v11,
        (_QWORD *)(v6 + 16 * v7));
      ID = Spectre::Engine::RenderDevice::GetID(v11);
      v8 = std::map<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceShader>>::_Try_emplace<enum Spectre::Engine::RenderDeviceID const &,>(
             (__int64 *)this + 16,
             (__int64)v13,
             &ID);
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
        &v9,
        (_QWORD *)(*(_QWORD *)v8 + 40LL));
      if ( v9 )
        (*(void (__fastcall **)(__int64, const struct Spectre::Framework::SamplerDefinition *))(*(_QWORD *)v9 + 40LL))(
          v9,
          a2);
      if ( v10 )
        std::_Ref_count_base::_Decref(v10);
      if ( v12 )
        std::_Ref_count_base::_Decref(v12);
      ++v5;
      v6 = v14;
      v7 = v5;
    }
    while ( v5 < (unsigned __int64)((v15 - v14) >> 4) );
  }
  std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::_Tidy((__int64)&v14);
}
