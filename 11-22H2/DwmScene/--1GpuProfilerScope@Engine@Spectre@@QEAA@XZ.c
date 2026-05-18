/*
 * XREFs of ??1GpuProfilerScope@Engine@Spectre@@QEAA@XZ @ 0x1800A224C
 * Callers:
 *     ?RenderEffects@Camera@Engine@Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005BF40 (-RenderEffects@Camera@Engine@Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@.c)
 *     ?RenderScene@Camera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005C210 (-RenderScene@Camera@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AE.c)
 *     ?ProcessScene@ImageProcessingManager@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@_N@Z @ 0x1800735A4 (-ProcessScene@ImageProcessingManager@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VIRenderOutput@Engine.c)
 *     ?ResolveMultisampledInput@ImageProcessingManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@@Z @ 0x1800739CC (-ResolveMultisampledInput@ImageProcessingManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VTexture@En.c)
 *     ?RenderMesh@ImageProcessingCamera@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV?$shared_ptr@VMeshInstance@Engine@Spectre@@@5@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x180097A20 (-RenderMesh@ImageProcessingCamera@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spe.c)
 *     _Spectre::Engine::Camera::RenderEffects_::_1_::dtor$2 @ 0x1800E7996 (_Spectre--Engine--Camera--RenderEffects_--_1_--dtor$2.c)
 *     _Spectre::Engine::Camera::RenderScene_::_1_::dtor$10 @ 0x1800E79F0 (_Spectre--Engine--Camera--RenderScene_--_1_--dtor$10.c)
 *     _Spectre::Engine::Camera::RenderScene_::_1_::dtor$26 @ 0x1800E7A80 (_Spectre--Engine--Camera--RenderScene_--_1_--dtor$26.c)
 *     _Spectre::Engine::ImageProcessingManager::ProcessScene_::_1_::dtor$14 @ 0x1800E863A (_Spectre--Engine--ImageProcessingManager--ProcessScene_--_1_--dtor$14.c)
 *     _Spectre::Engine::ImageProcessingManager::ResolveMultisampledInput_::_1_::dtor$2 @ 0x1800E864C (_Spectre--Engine--ImageProcessingManager--ResolveMultisampledInput_--_1_--dtor$2.c)
 *     _Spectre::Engine::ImageProcessingCamera::RenderMesh_::_1_::dtor$3 @ 0x1800EAC09 (_Spectre--Engine--ImageProcessingCamera--RenderMesh_--_1_--dtor$3.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ?lock@?$weak_ptr@VGpuProfiler@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VGpuProfiler@Engine@Spectre@@@2@XZ @ 0x18003888C (-lock@-$weak_ptr@VGpuProfiler@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VGpuProfiler@Engine@Spec.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::GpuProfilerScope::~GpuProfilerScope(Spectre::Engine::GpuProfilerScope *this)
{
  std::_Ref_count_base *v2; // rcx
  void (__fastcall ***v3)(_QWORD); // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v4; // [rsp+28h] [rbp-10h]

  std::weak_ptr<Spectre::Engine::GpuProfiler>::lock((__int64)this, &v3);
  if ( std::operator!=<Spectre::Engine::Scene>(&v3) )
    (**v3)(v3);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
}
