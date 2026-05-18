/*
 * XREFs of ?RecreateDepthBuffer@ShadowMapCamera@Engine@Spectre@@AEAAXXZ @ 0x18008E838
 * Callers:
 *     ?ApplyRenderState@ShadowMapCamera@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18008DB9C (-ApplyRenderState@ShadowMapCamera@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spe.c)
 *     ?CreateResources@ShadowMapCamera@Engine@Spectre@@UEAAXXZ @ 0x18008E0E0 (-CreateResources@ShadowMapCamera@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@AEBV10@QEBD@Z @ 0x18001C600 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C600.c)
 *     ??$CreateResource@VDepthBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@XZ @ 0x1800248C4 (--$CreateResource@VDepthBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ea_1800248C4.c)
 *     ?SetName@RendererResource@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800297A4 (-SetName@RendererResource@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 *     ?Create@DepthBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z @ 0x18006F640 (-Create@DepthBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z.c)
 *     ?GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ @ 0x18008139C (-GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ.c)
 */

void __fastcall Spectre::Engine::ShadowMapCamera::RecreateDepthBuffer(Spectre::Engine::ShadowMapCamera *this)
{
  struct Spectre::Engine::Engine *Engine; // rax
  __int64 *v3; // rax
  __int64 **v4; // rsi
  __int64 *v5; // rbx
  char *v6; // rax
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  std::_Ref_count_base *v8; // [rsp+38h] [rbp-20h]

  Engine = Spectre::Engine::Component::GetEngine(this);
  v3 = Spectre::Engine::Engine::CreateResource<Spectre::Engine::DepthBuffer,>((__int64)Engine, &v7);
  v4 = (__int64 **)((char *)this + 1832);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 229, v3);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  v5 = *v4;
  v6 = std::operator+<char>((char *)&v7, (_QWORD *)this + 3, " DepthBuffer");
  Spectre::Engine::RendererResource::SetName((__int64)v5, (void **)v6);
  Spectre::Engine::DepthBuffer::Create(*v4, *((_DWORD *)this + 485), *((_DWORD *)this + 485), 1u, 0, 0LL);
}
