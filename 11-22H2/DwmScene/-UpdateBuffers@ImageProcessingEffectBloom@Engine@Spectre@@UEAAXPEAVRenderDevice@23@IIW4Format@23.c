/*
 * XREFs of ?UpdateBuffers@ImageProcessingEffectBloom@Engine@Spectre@@UEAAXPEAVRenderDevice@23@IIW4Format@23@I@Z @ 0x180096430
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$CreateResource@VFrameBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@@Z @ 0x18001085C (--$CreateResource@VFrameBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr@VFrameBu.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ @ 0x180026598 (-GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?SetName@RendererResource@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800297A4 (-SetName@RendererResource@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 */

void __fastcall Spectre::Engine::ImageProcessingEffectBloom::UpdateBuffers(
        __int64 a1,
        Spectre::Engine::RenderDevice *a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6)
{
  struct Spectre::Engine::Engine *Engine; // rax
  __int64 v11; // rbx
  void **v12; // rax
  __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  std::_Ref_count_base *v14; // [rsp+38h] [rbp-30h]

  Engine = Spectre::Engine::RenderDevice::GetEngine(a2);
  Spectre::Engine::Engine::CreateResource<Spectre::Engine::FrameBuffer,>((__int64)Engine, &v13);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 232), &v13);
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  v11 = *(_QWORD *)(a1 + 232);
  v12 = (void **)std::string::string(&v13, (__int64)"ImageProcessingEffectBloom");
  Spectre::Engine::RendererResource::SetName(v11, v12);
  Spectre::Engine::FrameBuffer::Create(*(Spectre::Engine::FrameBuffer **)(a1 + 232), a3, a4, a5, a6, a2);
}
