/*
 * XREFs of ?AttachDevice@Camera@Engine@Spectre@@UEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18005A170
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$CreateResource@VSampler@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VSampler@Engine@Spectre@@@std@@XZ @ 0x1800161AC (--$CreateResource@VSampler@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr_ea_1800161AC.c)
 *     ?CreateCommandList@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEBVState@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x18002612C (-CreateCommandList@RenderDevice@Engine@Spectre@@QEAA-AV-$shared_ptr@VCommandList@Engine@Spectre@.c)
 *     ?GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ @ 0x180026598 (-GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?GetID@RenderDevice@Engine@Spectre@@QEBA?AW4RenderDeviceID@23@XZ @ 0x1800265D0 (-GetID@RenderDevice@Engine@Spectre@@QEBA-AW4RenderDeviceID@23@XZ.c)
 *     ?SetName@RendererResource@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800297A4 (-SetName@RendererResource@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 *     ?VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A384 (-VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ.c)
 *     ??$CreateResource@VRenderState@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VRenderState@Engine@Spectre@@@std@@XZ @ 0x180043528 (--$CreateResource@VRenderState@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ea_180043528.c)
 *     ??$_Find@W4RenderDeviceID@Engine@Spectre@@@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@PEAX@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180043548 (--$_Find@W4RenderDeviceID@Engine@Spectre@@@-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spect.c)
 *     ??$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@?$map@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@@std@@PEAX@std@@_N@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x1800541F0 (--$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@-$map@W4RenderDeviceID@Engi_ea_1800541F0.c)
 *     ?CreateSampler@Sampler@Engine@Spectre@@UEAAXAEBUSamplerStateDesc@23@PEAVRenderDevice@23@@Z @ 0x1800548D0 (-CreateSampler@Sampler@Engine@Spectre@@UEAAXAEBUSamplerStateDesc@23@PEAVRenderDevice@23@@Z.c)
 *     ??0State@Engine@Spectre@@QEAA@XZ @ 0x18005966C (--0State@Engine@Spectre@@QEAA@XZ.c)
 *     ??1State@Engine@Spectre@@QEAA@XZ @ 0x180059A20 (--1State@Engine@Spectre@@QEAA@XZ.c)
 *     ?Create@RenderState@Engine@Spectre@@UEAAXAEBURenderStateDesc@23@PEAVRenderDevice@23@@Z @ 0x180088360 (-Create@RenderState@Engine@Spectre@@UEAAXAEBURenderStateDesc@23@PEAVRenderDevice@23@@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Spectre::Engine::Camera::AttachDevice(__int64 a1, __int64 *a2)
{
  std::_Ref_count_base *v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned int ID; // r14d
  __int64 *Engine; // rax
  __int64 *v9; // rax
  struct Spectre::Engine::Engine *v10; // rax
  Spectre::Engine::Sampler *v11; // rbx
  void **v12; // rax
  __int64 *v13; // rbx
  __int64 v14; // r15
  __int64 *v15; // rbx
  __int64 v16; // rax
  std::_Ref_count_base *v17; // rcx
  unsigned int v18; // [rsp+20h] [rbp-E0h] BYREF
  std::_Ref_count_base *v19; // [rsp+28h] [rbp-D8h]
  Spectre::Engine::Sampler *v20; // [rsp+30h] [rbp-D0h] BYREF
  std::_Ref_count_base *v21; // [rsp+38h] [rbp-C8h]
  int v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+44h] [rbp-BCh]
  int v24; // [rsp+48h] [rbp-B8h]
  int v25; // [rsp+4Ch] [rbp-B4h]
  int v26; // [rsp+50h] [rbp-B0h]
  int v27; // [rsp+54h] [rbp-ACh]
  int v28; // [rsp+58h] [rbp-A8h]
  __int128 v29; // [rsp+5Ch] [rbp-A4h]
  __int128 v30; // [rsp+6Ch] [rbp-94h]
  int v31; // [rsp+7Ch] [rbp-84h]
  char v32; // [rsp+80h] [rbp-80h]
  int v33; // [rsp+84h] [rbp-7Ch]
  __int64 *v34; // [rsp+88h] [rbp-78h]
  __int64 v35; // [rsp+90h] [rbp-70h] BYREF
  std::_Ref_count_base *v36; // [rsp+98h] [rbp-68h]
  _QWORD v37[4]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v38[448]; // [rsp+C0h] [rbp-40h] BYREF
  char v39; // [rsp+280h] [rbp+180h] BYREF
  Spectre::Engine::RenderState *v40; // [rsp+390h] [rbp+290h] BYREF

  v34 = a2;
  v4 = (std::_Ref_count_base *)std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
                                 &v20,
                                 a2)[1];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  v5 = *a2;
  ID = Spectre::Engine::RenderDevice::GetID(*a2);
  if ( ID )
  {
    v18 = Spectre::Engine::RenderDevice::GetID(v6);
    if ( std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::_Find<enum Spectre::Engine::RenderDeviceID>(
           a1 + 448,
           (__int64)&v18) == *(_QWORD *)(a1 + 448) )
    {
      Spectre::Engine::Lockable::VerifyWriteAccess((Spectre::Engine::Lockable *)(v5 + 24));
      Spectre::Engine::State::State((Spectre::Engine::State *)v38);
      Engine = (__int64 *)Spectre::Engine::RenderDevice::GetEngine((Spectre::Engine::RenderDevice *)*a2);
      v9 = (__int64 *)Spectre::Engine::Engine::CreateResource<Spectre::Engine::RenderState,>(Engine, (__int64)&v18);
      std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(&v40, v9);
      if ( v19 )
        std::_Ref_count_base::_Decref(v19);
      memset_0(&v22, 0, 0x48uLL);
      v23 = 2;
      v24 = 0;
      v25 = 0;
      v26 = 0;
      v27 = 0;
      LOBYTE(v28) = 0;
      v29 = 0LL;
      v30 = 0LL;
      v31 = 65793;
      v32 = 1;
      v33 = 3;
      Spectre::Engine::RenderState::Create(v40, (const struct Spectre::Engine::RenderStateDesc *)&v22, 0LL);
      v10 = Spectre::Engine::RenderDevice::GetEngine((Spectre::Engine::RenderDevice *)*a2);
      Spectre::Engine::Engine::CreateResource<Spectre::Engine::Sampler,>((__int64)v10, &v20);
      v23 = 0;
      v24 = 0;
      v25 = 0;
      v26 = 0;
      v27 = 1;
      v28 = 7;
      LODWORD(v30) = 0;
      *((float *)&v30 + 1) = FLOAT_3_4028235e38;
      v22 = 2;
      v29 = 0LL;
      v11 = v20;
      v12 = (void **)std::string::string(v37, (__int64)"Camera Default Sampler");
      Spectre::Engine::RendererResource::SetName((__int64)v11, v12);
      Spectre::Engine::Sampler::CreateSampler(v20, (const struct Spectre::Engine::SamplerStateDesc *)&v22, 0LL);
      v13 = (__int64 *)&v39;
      v14 = 16LL;
      do
      {
        std::shared_ptr<Spectre::Engine::Light>::operator=(v13, &v20);
        v13 += 2;
        --v14;
      }
      while ( v14 );
      v15 = Spectre::Engine::RenderDevice::CreateCommandList(*a2, &v35, (__int64)v38, a1 + 24);
      v18 = ID;
      v16 = std::map<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceShader>>::_Try_emplace<enum Spectre::Engine::RenderDeviceID const &,>(
              (__int64 *)(a1 + 448),
              (__int64)v37,
              &v18);
      std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(*(_QWORD *)v16 + 40LL), v15);
      if ( v36 )
        std::_Ref_count_base::_Decref(v36);
      if ( v21 )
        std::_Ref_count_base::_Decref(v21);
      Spectre::Engine::State::~State((Spectre::Engine::State *)v38);
    }
  }
  v17 = (std::_Ref_count_base *)a2[1];
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
}
