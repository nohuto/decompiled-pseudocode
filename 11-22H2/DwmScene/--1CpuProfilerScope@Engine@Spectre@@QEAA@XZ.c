/*
 * XREFs of ??1CpuProfilerScope@Engine@Spectre@@QEAA@XZ @ 0x180031C70
 * Callers:
 *     ?FrameTick@Engine@1Spectre@@UEAAXAEAV?$unique_lock@VMutex@Engine@Spectre@@@std@@@Z @ 0x180033C20 (-FrameTick@Engine@1Spectre@@UEAAXAEAV-$unique_lock@VMutex@Engine@Spectre@@@std@@@Z.c)
 *     ?PostRenderScene@Engine@1Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@4@@Z @ 0x180035470 (-PostRenderScene@Engine@1Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV-$share.c)
 *     ?PresentFrame@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@4@AEAV?$unique_lock@VMutex@Engine@Spectre@@@4@22@Z @ 0x18003565C (-PresentFrame@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV-$s.c)
 *     ?RemoveInvalidDevices@Engine@1Spectre@@IEAAXXZ @ 0x180035CAC (-RemoveInvalidDevices@Engine@1Spectre@@IEAAXXZ.c)
 *     ?RenderContent@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@4@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@4@@Z @ 0x180035E98 (-RenderContent@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV-$vector@.c)
 *     ?RenderDisplays@Engine@1Spectre@@IEAAXXZ @ 0x18003633C (-RenderDisplays@Engine@1Spectre@@IEAAXXZ.c)
 *     ?UpdateFrameTime@Engine@1Spectre@@IEAAXXZ @ 0x180036FD0 (-UpdateFrameTime@Engine@1Spectre@@IEAAXXZ.c)
 *     ?UpdateScene@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x1800375F8 (-UpdateScene@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@@Z.c)
 *     ?UpdateScenes@Engine@1Spectre@@MEAAXXZ @ 0x180037A80 (-UpdateScenes@Engine@1Spectre@@MEAAXXZ.c)
 *     ?RenderEffects@Camera@Engine@Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005BF40 (-RenderEffects@Camera@Engine@Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@.c)
 *     ?RenderScene@Camera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005C210 (-RenderScene@Camera@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AE.c)
 *     ?PostRenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180067130 (-PostRenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@.c)
 *     ?PreRenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180067590 (-PreRenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@.c)
 *     ?RenderMesh@ImageProcessingCamera@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV?$shared_ptr@VMeshInstance@Engine@Spectre@@@5@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x180097A20 (-RenderMesh@ImageProcessingCamera@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spe.c)
 *     _Spectre::Engine::ImageProcessingCamera::RenderMesh_::_1_::dtor$5 @ 0x1800E5BAB (_Spectre--Engine--ImageProcessingCamera--RenderMesh_--_1_--dtor$5.c)
 *     _Spectre::UpdateScenes::Engine::UpdateScenes_::_1_::dtor$11 @ 0x1800E5D55 (_Spectre--UpdateScenes--Engine--UpdateScenes_--_1_--dtor$11.c)
 *     _Spectre::PresentFrame::Engine::PresentFrame_::_1_::dtor$11 @ 0x1800E5DC1 (_Spectre--PresentFrame--Engine--PresentFrame_--_1_--dtor$11.c)
 *     _Spectre::RenderContent::Engine::RenderContent_::_1_::dtor$5 @ 0x1800E5E51 (_Spectre--RenderContent--Engine--RenderContent_--_1_--dtor$5.c)
 *     _Spectre::RenderContent::Engine::RenderContent_::_1_::dtor$28 @ 0x1800E5E99 (_Spectre--RenderContent--Engine--RenderContent_--_1_--dtor$28.c)
 *     _Spectre::Engine::ViewerEngine::PreRenderScene_::_1_::dtor$5 @ 0x1800E6048 (_Spectre--Engine--ViewerEngine--PreRenderScene_--_1_--dtor$5.c)
 *     _Spectre::UpdateScene::Engine::UpdateScene_::_1_::dtor$8 @ 0x1800E610E (_Spectre--UpdateScene--Engine--UpdateScene_--_1_--dtor$8.c)
 *     _Spectre::UpdateScene::Engine::UpdateScene_::_1_::dtor$29 @ 0x1800E6144 (_Spectre--UpdateScene--Engine--UpdateScene_--_1_--dtor$29.c)
 *     _Spectre::UpdateScenes::Engine::UpdateScenes_::_1_::dtor$5 @ 0x1800E617A (_Spectre--UpdateScenes--Engine--UpdateScenes_--_1_--dtor$5.c)
 *     _Spectre::Engine::Camera::RenderEffects_::_1_::dtor$4 @ 0x1800E79BA (_Spectre--Engine--Camera--RenderEffects_--_1_--dtor$4.c)
 *     _Spectre::Engine::Camera::RenderScene_::_1_::dtor$12 @ 0x1800E7A14 (_Spectre--Engine--Camera--RenderScene_--_1_--dtor$12.c)
 *     _Spectre::Engine::Camera::RenderScene_::_1_::dtor$28 @ 0x1800E7AA4 (_Spectre--Engine--Camera--RenderScene_--_1_--dtor$28.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VGpuProfiler@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VGpuProfiler@Engine@Spectre@@@2@XZ @ 0x18003888C (-lock@-$weak_ptr@VGpuProfiler@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VGpuProfiler@Engine@Spec.c)
 *     ?EndTimeSpanMarker@CpuProfiler@Engine@Spectre@@QEAAX_K@Z @ 0x1800A02C0 (-EndTimeSpanMarker@CpuProfiler@Engine@Spectre@@QEAAX_K@Z.c)
 */

void __fastcall Spectre::Engine::CpuProfilerScope::~CpuProfilerScope(Spectre::Engine::CpuProfilerScope *this)
{
  std::_Ref_count_base *v2; // rcx
  Spectre::Engine::CpuProfiler *v3; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v4; // [rsp+28h] [rbp-10h]

  std::weak_ptr<Spectre::Engine::GpuProfiler>::lock(this, &v3);
  if ( v3 )
    Spectre::Engine::CpuProfiler::EndTimeSpanMarker(v3, *((_QWORD *)this + 2));
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
}
