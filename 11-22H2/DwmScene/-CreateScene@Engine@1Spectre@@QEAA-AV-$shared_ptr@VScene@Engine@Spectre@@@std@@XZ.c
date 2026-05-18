/*
 * XREFs of ?CreateScene@Engine@1Spectre@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x1800332A4
 * Callers:
 *     ?CreateSceneStandardContent@Engine@1Spectre@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x180033324 (-CreateSceneStandardContent@Engine@1Spectre@@QEAA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$AddCustomData@UEngineSceneData@Engine@2Spectre@@@Scene@Engine@Spectre@@QEAAAEAUEngineSceneData@112@XZ @ 0x18002DBBC (--$AddCustomData@UEngineSceneData@Engine@2Spectre@@@Scene@Engine@Spectre@@QEAAAEAUEngineSceneDat.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@1@QEAV21@AEBV21@@Z @ 0x18002E528 (--$_Emplace_reallocate@AEBV-$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@-$vector@V-$shared_p.c)
 *     ?CreateInstance@Scene@Engine@Spectre@@SA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@PEAV223@@Z @ 0x180040794 (-CreateInstance@Scene@Engine@Spectre@@SA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@PEAV223@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Spectre::Engine::Engine::CreateScene(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rcx

  Spectre::Engine::Scene::CreateInstance(a2, a1);
  Spectre::Engine::Scene::AddCustomData<Spectre::Engine::Engine::EngineSceneData>(*a2);
  v4 = *(_QWORD **)(a1 + 712);
  if ( v4 == *(_QWORD **)(a1 + 720) )
  {
    std::vector<std::shared_ptr<Spectre::Engine::FrameBuffer>>::_Emplace_reallocate<std::shared_ptr<Spectre::Engine::FrameBuffer> const &>(
      (_QWORD *)(a1 + 704),
      *(char **)(a1 + 712),
      a2);
  }
  else
  {
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(v4, a2);
    *(_QWORD *)(a1 + 712) += 16LL;
  }
  return a2;
}
