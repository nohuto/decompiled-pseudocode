/*
 * XREFs of ?RecreateDepthSampler@ShadowMapCamera@Engine@Spectre@@AEAAXXZ @ 0x18008E8DC
 * Callers:
 *     ?CreateResources@ShadowMapCamera@Engine@Spectre@@UEAAXXZ @ 0x18008E0E0 (-CreateResources@ShadowMapCamera@Engine@Spectre@@UEAAXXZ.c)
 *     ?SetZDirection@ShadowMapCamera@Engine@Spectre@@QEAAXW4ZDirection@123@@Z @ 0x18008ECAC (-SetZDirection@ShadowMapCamera@Engine@Spectre@@QEAAXW4ZDirection@123@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$CreateResource@VSampler@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VSampler@Engine@Spectre@@@std@@XZ @ 0x1800161AC (--$CreateResource@VSampler@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr_ea_1800161AC.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@AEBV10@QEBD@Z @ 0x18001C600 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C600.c)
 *     ?SetName@RendererResource@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800297A4 (-SetName@RendererResource@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 *     ?CreateSampler@Sampler@Engine@Spectre@@UEAAXAEBUSamplerStateDesc@23@PEAVRenderDevice@23@@Z @ 0x1800548D0 (-CreateSampler@Sampler@Engine@Spectre@@UEAAXAEBUSamplerStateDesc@23@PEAVRenderDevice@23@@Z.c)
 *     ?GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ @ 0x18008139C (-GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ.c)
 */

void __fastcall Spectre::Engine::ShadowMapCamera::RecreateDepthSampler(Spectre::Engine::ShadowMapCamera *this)
{
  struct Spectre::Engine::Engine *Engine; // rax
  __int64 *v3; // rax
  __int64 *v4; // rsi
  __int64 v5; // rbx
  char *v6; // rax
  int v7; // eax
  bool v8; // zf
  Spectre::Engine::Sampler *v9; // rcx
  std::_Ref_count_base *v10[2]; // [rsp+20h] [rbp-40h] BYREF
  int v11; // [rsp+30h] [rbp-30h]
  int v12; // [rsp+34h] [rbp-2Ch]
  int v13; // [rsp+38h] [rbp-28h]
  __int128 v14; // [rsp+3Ch] [rbp-24h]
  int v15; // [rsp+4Ch] [rbp-14h]
  float v16; // [rsp+50h] [rbp-10h]

  Engine = Spectre::Engine::Component::GetEngine(this);
  v3 = Spectre::Engine::Engine::CreateResource<Spectre::Engine::Sampler,>((__int64)Engine, v10);
  v4 = (__int64 *)((char *)this + 1816);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 227, v3);
  if ( v10[1] )
    std::_Ref_count_base::_Decref(v10[1]);
  v5 = *v4;
  v6 = std::operator+<char>((char *)v10, (_QWORD *)this + 3, " DepthSampler");
  Spectre::Engine::RendererResource::SetName(v5, (void **)v6);
  v11 = 0;
  v15 = 0;
  v7 = 3;
  v12 = 0;
  v8 = *((_DWORD *)this + 486) == 1;
  v16 = FLOAT_3_4028235e38;
  if ( v8 )
    v7 = 6;
  v9 = (Spectre::Engine::Sampler *)*v4;
  v14 = Spectre::Utils::Math::Color::Black;
  v13 = v7;
  *(__m128i *)v10 = _mm_load_si128((const __m128i *)&_xmm);
  Spectre::Engine::Sampler::CreateSampler(v9, (const struct Spectre::Engine::SamplerStateDesc *)v10, 0LL);
}
