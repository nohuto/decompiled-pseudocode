/*
 * XREFs of ??$make_shared@UViewerSceneData@ViewerEngine@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@UViewerSceneData@ViewerEngine@Engine@Spectre@@@0@XZ @ 0x180063784
 * Callers:
 *     ??$AddCustomData@UViewerSceneData@ViewerEngine@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAAEAUViewerSceneData@ViewerEngine@12@XZ @ 0x180061D78 (--$AddCustomData@UViewerSceneData@ViewerEngine@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAAEAUVi.c)
 *     ?Clone@ViewerSceneData@ViewerEngine@Engine@Spectre@@UEAA?AV?$shared_ptr@USceneCustomData@Engine@Spectre@@@std@@AEBVScene@34@AEAV734@@Z @ 0x1800657E0 (-Clone@ViewerSceneData@ViewerEngine@Engine@Spectre@@UEAA-AV-$shared_ptr@USceneCustomData@Engine@.c)
 * Callees:
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0ViewerSceneData@ViewerEngine@Engine@Spectre@@QEAA@XZ @ 0x180063E74 (--0ViewerSceneData@ViewerEngine@Engine@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<Spectre::Engine::ViewerEngine::ViewerSceneData,>(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdi

  v2 = operator new(0x158uLL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::ViewerEngine::ViewerSceneData>::`vftable';
    memset_0(v2 + 4, 0, 0x148uLL);
    Spectre::Engine::ViewerEngine::ViewerSceneData::ViewerSceneData((Spectre::Engine::ViewerEngine::ViewerSceneData *)(v3 + 4));
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
