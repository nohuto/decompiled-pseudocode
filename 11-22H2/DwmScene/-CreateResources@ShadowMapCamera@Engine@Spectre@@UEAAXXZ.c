/*
 * XREFs of ?CreateResources@ShadowMapCamera@Engine@Spectre@@UEAAXXZ @ 0x18008E0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$CreateResource@VSampler@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VSampler@Engine@Spectre@@@std@@XZ @ 0x1800161AC (--$CreateResource@VSampler@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr_ea_1800161AC.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@AEBV10@QEBD@Z @ 0x18001C600 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C600.c)
 *     ?SetName@RendererResource@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800297A4 (-SetName@RendererResource@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 *     ?GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ @ 0x18008139C (-GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?RecreateDepthBuffer@ShadowMapCamera@Engine@Spectre@@AEAAXXZ @ 0x18008E838 (-RecreateDepthBuffer@ShadowMapCamera@Engine@Spectre@@AEAAXXZ.c)
 *     ?RecreateDepthSampler@ShadowMapCamera@Engine@Spectre@@AEAAXXZ @ 0x18008E8DC (-RecreateDepthSampler@ShadowMapCamera@Engine@Spectre@@AEAAXXZ.c)
 */

void __fastcall Spectre::Engine::ShadowMapCamera::CreateResources(Spectre::Engine::ShadowMapCamera *this)
{
  struct Spectre::Engine::Engine *Engine; // rax
  __int64 *v3; // rax
  __int64 v4; // rbx
  char *v5; // rax
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v7; // [rsp+28h] [rbp-20h]

  Spectre::Engine::ShadowMapCamera::RecreateDepthBuffer(this);
  *((_BYTE *)this + 465) |= 2u;
  Spectre::Engine::ShadowMapCamera::RecreateDepthSampler(this);
  if ( !*((_QWORD *)this + 237) )
  {
    Engine = Spectre::Engine::Component::GetEngine(this);
    v3 = Spectre::Engine::Engine::CreateResource<Spectre::Engine::Sampler,>((__int64)Engine, &v6);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 237, v3);
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
    v4 = *((_QWORD *)this + 237);
    v5 = std::operator+<char>((char *)&v6, (_QWORD *)this + 3, " ColorSampler");
    Spectre::Engine::RendererResource::SetName(v4, (void **)v5);
  }
  Spectre::Engine::ShadowMapCamera::RecreateColorSampler(this);
}
