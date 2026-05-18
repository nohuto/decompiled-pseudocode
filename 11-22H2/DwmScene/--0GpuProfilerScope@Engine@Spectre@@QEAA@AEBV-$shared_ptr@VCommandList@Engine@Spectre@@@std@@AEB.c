/*
 * XREFs of ??0GpuProfilerScope@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z @ 0x1800A2194
 * Callers:
 *     ?RenderEffects@Camera@Engine@Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005BF40 (-RenderEffects@Camera@Engine@Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@.c)
 *     ?RenderScene@Camera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005C210 (-RenderScene@Camera@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AE.c)
 *     ?ProcessScene@ImageProcessingManager@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@_N@Z @ 0x1800735A4 (-ProcessScene@ImageProcessingManager@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VIRenderOutput@Engine.c)
 *     ?ResolveMultisampledInput@ImageProcessingManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@@Z @ 0x1800739CC (-ResolveMultisampledInput@ImageProcessingManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VTexture@En.c)
 *     ?RenderMesh@ImageProcessingCamera@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV?$shared_ptr@VMeshInstance@Engine@Spectre@@@5@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x180097A20 (-RenderMesh@ImageProcessingCamera@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spe.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??4?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800320E0 (--4-$weak_ptr@VRendererResource@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?lock@?$weak_ptr@VGpuProfiler@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VGpuProfiler@Engine@Spectre@@@2@XZ @ 0x18003888C (-lock@-$weak_ptr@VGpuProfiler@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VGpuProfiler@Engine@Spec.c)
 *     ?GetGpuProfiler@CommandList@Engine@Spectre@@QEBA?BV?$weak_ptr@VGpuProfiler@Engine@Spectre@@@std@@XZ @ 0x1800393A8 (-GetGpuProfiler@CommandList@Engine@Spectre@@QEBA-BV-$weak_ptr@VGpuProfiler@Engine@Spectre@@@std@.c)
 *     ?BeginTimeSpanMarker@GpuProfiler@Engine@Spectre@@QEAA?AV?$weak_ptr@VITimeSpanMarker@GpuProfilerFrame@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@5@@Z @ 0x1800A10AC (-BeginTimeSpanMarker@GpuProfiler@Engine@Spectre@@QEAA-AV-$weak_ptr@VITimeSpanMarker@GpuProfilerF.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall Spectre::Engine::GpuProfilerScope::GpuProfilerScope(_QWORD *a1, __int64 *a2)
{
  _QWORD *GpuProfiler; // rax
  __int64 *v4; // rax
  __int64 v6; // [rsp+20h] [rbp-38h] BYREF
  std::_Ref_count_base *v7; // [rsp+28h] [rbp-30h]
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  std::_Ref_count_base *v9; // [rsp+38h] [rbp-20h]
  __int64 v10; // [rsp+40h] [rbp-18h] BYREF
  std::_Ref_count_base *v11; // [rsp+48h] [rbp-10h]

  *a1 = 0LL;
  a1[1] = 0LL;
  GpuProfiler = Spectre::Engine::CommandList::GetGpuProfiler(*a2, &v8);
  std::weak_ptr<Spectre::Engine::GpuProfiler>::lock((__int64)GpuProfiler, &v6);
  if ( v9 )
    std::_Ref_count_base::_Decwref(v9);
  if ( std::operator!=<Spectre::Engine::Scene>(&v6) )
  {
    v4 = Spectre::Engine::GpuProfiler::BeginTimeSpanMarker(v6, &v10);
    std::weak_ptr<Spectre::Engine::RendererResource>::operator=(a1, v4);
    if ( v11 )
      std::_Ref_count_base::_Decwref(v11);
  }
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  return a1;
}
