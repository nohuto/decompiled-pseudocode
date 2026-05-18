/*
 * XREFs of ??1PerformanceScope@Utils@Spectre@@QEAA@XZ @ 0x18001FE24
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
 *     ?PostRenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180067130 (-PostRenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@.c)
 *     ?PreRenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180067590 (-PreRenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@.c)
 *     _Spectre::Engine::ViewerEngine::PostRenderScene_::_1_::dtor$1 @ 0x1800E5B75 (_Spectre--Engine--ViewerEngine--PostRenderScene_--_1_--dtor$1.c)
 *     _Spectre::RemoveInvalidDevices::Engine::RemoveInvalidDevices_::_1_::dtor$1 @ 0x1800E5D31 (_Spectre--RemoveInvalidDevices--Engine--RemoveInvalidDevices_--_1_--dtor$1.c)
 *     _Spectre::PresentFrame::Engine::PresentFrame_::_1_::dtor$1 @ 0x1800E5D67 (_Spectre--PresentFrame--Engine--PresentFrame_--_1_--dtor$1.c)
 *     _Spectre::UpdateFrameTime::Engine::UpdateFrameTime_::_1_::dtor$1 @ 0x1800E5D8B (_Spectre--UpdateFrameTime--Engine--UpdateFrameTime_--_1_--dtor$1.c)
 *     _Spectre::RenderContent::Engine::RenderContent_::_1_::dtor$1 @ 0x1800E5E1B (_Spectre--RenderContent--Engine--RenderContent_--_1_--dtor$1.c)
 *     _Spectre::RenderContent::Engine::RenderContent_::_1_::dtor$24 @ 0x1800E5E63 (_Spectre--RenderContent--Engine--RenderContent_--_1_--dtor$24.c)
 *     _Spectre::UpdateScene::Engine::UpdateScene_::_1_::dtor$4 @ 0x1800E60FC (_Spectre--UpdateScene--Engine--UpdateScene_--_1_--dtor$4.c)
 *     _Spectre::Engine::ViewerEngine::PreRenderScene_::_1_::dtor$1 @ 0x1800E6120 (_Spectre--Engine--ViewerEngine--PreRenderScene_--_1_--dtor$1.c)
 *     _Spectre::UpdateScenes::Engine::UpdateScenes_::_1_::dtor$1 @ 0x1800E6168 (_Spectre--UpdateScenes--Engine--UpdateScenes_--_1_--dtor$1.c)
 *     _Spectre::UpdateScenes::Engine::UpdateScenes_::_1_::dtor$7 @ 0x1800E618C (_Spectre--UpdateScenes--Engine--UpdateScenes_--_1_--dtor$7.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?AddMark@PerformanceLogger@Utils@Spectre@@QEBAXHPEBDH00@Z @ 0x180020014 (-AddMark@PerformanceLogger@Utils@Spectre@@QEBAXHPEBDH00@Z.c)
 *     ?AddTimeSpan@PerformanceLogger@Utils@Spectre@@QEBAXPEBDH00V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z @ 0x1800200DC (-AddTimeSpan@PerformanceLogger@Utils@Spectre@@QEBAXPEBDH00V-$time_point@Usteady_clock@chrono@std.c)
 */

void __fastcall Spectre::Utils::PerformanceScope::~PerformanceScope(Spectre::Utils::PerformanceScope *this)
{
  std::_Ref_count_base *v2; // rcx

  if ( *((_BYTE *)this + 48) )
    Spectre::Utils::PerformanceLogger::AddTimeSpan(
      *(_QWORD *)this,
      *((_QWORD *)this + 3),
      *((_DWORD *)this + 4),
      *((_QWORD *)this + 4),
      *((_QWORD *)this + 5),
      *((_QWORD *)this + 7));
  else
    Spectre::Utils::PerformanceLogger::AddMark(
      *(Spectre::Utils::PerformanceLogger **)this,
      2,
      *((const char **)this + 3),
      *((_DWORD *)this + 4),
      *((const char **)this + 4),
      *((const char **)this + 5));
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
