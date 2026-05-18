/*
 * XREFs of ?AttachDevice@RenderState@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180088210
 * Callers:
 *     ?ApplyState@Material@Engine@Spectre@@QEAA?AU?$pair@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@VShaderTypeGroup@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@5@_N@Z @ 0x180043F18 (-ApplyState@Material@Engine@Spectre@@QEAA-AU-$pair@V-$shared_ptr@VShaderPipeline@Engine@Spectre@.c)
 *     ?AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180086B60 (-AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 *     ?Create@RenderState@Engine@Spectre@@UEAAXAEBURenderStateDesc@23@PEAVRenderDevice@23@@Z @ 0x180088360 (-Create@RenderState@Engine@Spectre@@UEAAXAEBURenderStateDesc@23@PEAVRenderDevice@23@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetID@RenderDevice@Engine@Spectre@@QEBA?AW4RenderDeviceID@23@XZ @ 0x1800265D0 (-GetID@RenderDevice@Engine@Spectre@@QEBA-AW4RenderDeviceID@23@XZ.c)
 *     ?AttachDevice@SharedResource@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800294D0 (-AttachDevice@SharedResource@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@.c)
 *     ?NotifyDeviceReady@SharedResource@Engine@Spectre@@IEAAXW4RenderDeviceID@23@@Z @ 0x180029680 (-NotifyDeviceReady@SharedResource@Engine@Spectre@@IEAAXW4RenderDeviceID@23@@Z.c)
 *     ??$_Find@W4RenderDeviceID@Engine@Spectre@@@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@PEAX@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180043548 (--$_Find@W4RenderDeviceID@Engine@Spectre@@@-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spect.c)
 *     ??$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@?$map@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@@std@@PEAX@std@@_N@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x1800541F0 (--$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@-$map@W4RenderDeviceID@Engi_ea_1800541F0.c)
 *     ??$CreateResource@VDeviceRenderState@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VDeviceRenderState@Engine@Spectre@@@std@@XZ @ 0x180087EE4 (--$CreateResource@VDeviceRenderState@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA-AV-$shar.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::RenderState::AttachDevice(__int64 a1, __int64 *a2)
{
  unsigned int ID; // esi
  _QWORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int128 v12; // [rsp+20h] [rbp-40h] BYREF
  _QWORD *v13; // [rsp+30h] [rbp-30h] BYREF
  std::_Ref_count_base *v14; // [rsp+38h] [rbp-28h]
  __int64 v15; // [rsp+40h] [rbp-20h] BYREF
  std::_Ref_count_base *v16; // [rsp+48h] [rbp-18h]
  _BYTE v17[16]; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v18; // [rsp+88h] [rbp+28h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2) )
  {
    ID = Spectre::Engine::RenderDevice::GetID(*a2);
    v18 = ID;
    if ( std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::_Find<enum Spectre::Engine::RenderDeviceID>(
           a1 + 128,
           (__int64)&v18) == *(_QWORD *)(a1 + 128) )
    {
      Spectre::Engine::SharedResource::AttachDevice(a1, a2);
      Spectre::Engine::RenderDevice::CreateResource<Spectre::Engine::DeviceRenderState>(*a2, (__int64 *)&v13);
      v5 = v13;
      v6 = *v13;
      v12 = 0LL;
      v7 = *(_QWORD *)(a1 + 120);
      if ( v7 )
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      v12 = *(_OWORD *)(a1 + 112);
      (*(void (__fastcall **)(_QWORD *, __int128 *))(v6 + 40))(v5, &v12);
      v18 = ID;
      std::map<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceShader>>::_Try_emplace<enum Spectre::Engine::RenderDeviceID const &,>(
        (__int64 *)(a1 + 128),
        (__int64)v17,
        &v18);
      v8 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
             &v15,
             &v13);
      v9 = *v8;
      *v8 = *(_QWORD *)(v10 + 40);
      *(_QWORD *)(v10 + 40) = v9;
      v11 = v8[1];
      v8[1] = *(_QWORD *)(v10 + 48);
      *(_QWORD *)(v10 + 48) = v11;
      if ( v16 )
        std::_Ref_count_base::_Decref(v16);
      Spectre::Engine::SharedResource::NotifyDeviceReady(a1, ID);
      if ( v14 )
        std::_Ref_count_base::_Decref(v14);
    }
  }
}
