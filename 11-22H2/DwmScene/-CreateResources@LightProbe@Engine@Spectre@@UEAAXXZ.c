/*
 * XREFs of ?CreateResources@LightProbe@Engine@Spectre@@UEAAXXZ @ 0x180051A50
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$CreateResource@VSampler@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VSampler@Engine@Spectre@@@std@@XZ @ 0x1800161AC (--$CreateResource@VSampler@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr_ea_1800161AC.c)
 *     ?SetName@RendererResource@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800297A4 (-SetName@RendererResource@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 *     ?SetAmbient@LightProbe@Engine@Spectre@@QEAAXUColor@Math@Utils@3@@Z @ 0x180051B8C (-SetAmbient@LightProbe@Engine@Spectre@@QEAAXUColor@Math@Utils@3@@Z.c)
 *     ?CreateSampler@Sampler@Engine@Spectre@@UEAAXAEBUSamplerStateDesc@23@PEAVRenderDevice@23@@Z @ 0x1800548D0 (-CreateSampler@Sampler@Engine@Spectre@@UEAAXAEBUSamplerStateDesc@23@PEAVRenderDevice@23@@Z.c)
 *     ?GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ @ 0x18008139C (-GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ.c)
 */

void __fastcall Spectre::Engine::LightProbe::CreateResources(Spectre::Engine::LightProbe *this)
{
  __int64 *v1; // rsi
  struct Spectre::Engine::Engine *Engine; // rax
  __int64 *v4; // rax
  __int64 v5; // rbx
  void **v6; // rax
  Spectre::Engine::Sampler *v7; // rcx
  std::_Ref_count_base *v8[2]; // [rsp+20h] [rbp-40h] BYREF
  int v9; // [rsp+30h] [rbp-30h]
  int v10; // [rsp+34h] [rbp-2Ch]
  int v11; // [rsp+38h] [rbp-28h]
  __int128 v12; // [rsp+3Ch] [rbp-24h]
  int v13; // [rsp+4Ch] [rbp-14h]
  float v14; // [rsp+50h] [rbp-10h]

  v1 = (__int64 *)((char *)this + 512);
  if ( !*((_QWORD *)this + 64) )
  {
    Engine = Spectre::Engine::Component::GetEngine(this);
    v4 = Spectre::Engine::Engine::CreateResource<Spectre::Engine::Sampler,>((__int64)Engine, v8);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v1, v4);
    if ( v8[1] )
      std::_Ref_count_base::_Decref(v8[1]);
    v5 = *v1;
    v6 = (void **)std::string::string(v8, (__int64)"Light Probe Sampler");
    Spectre::Engine::RendererResource::SetName(v5, v6);
    v8[1] = 0LL;
    v9 = 0;
    v13 = 0;
    v7 = (Spectre::Engine::Sampler *)*v1;
    v14 = FLOAT_3_4028235e38;
    v12 = 0LL;
    v11 = 7;
    v8[0] = (std::_Ref_count_base *)3;
    v10 = 8;
    Spectre::Engine::Sampler::CreateSampler(v7, (const struct Spectre::Engine::SamplerStateDesc *)v8, 0LL);
  }
  *(_OWORD *)v8 = Spectre::Utils::Math::Color::Black;
  Spectre::Engine::LightProbe::SetAmbient(this, v8);
}
