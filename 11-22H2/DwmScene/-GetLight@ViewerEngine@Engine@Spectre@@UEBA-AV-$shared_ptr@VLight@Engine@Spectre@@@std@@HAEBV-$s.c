/*
 * XREFs of ?GetLight@ViewerEngine@Engine@Spectre@@UEBA?AV?$shared_ptr@VLight@Engine@Spectre@@@std@@HAEBV?$shared_ptr@VScene@Engine@Spectre@@@5@@Z @ 0x180066D10
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$GetCustomData@UViewerSceneData@ViewerEngine@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAAEAUViewerSceneData@ViewerEngine@12@XZ @ 0x180062848 (--$GetCustomData@UViewerSceneData@ViewerEngine@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAAEAUVi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Spectre::Engine::ViewerEngine::GetLight(__int64 a1, _QWORD *a2, int a3, __int64 *a4)
{
  __int64 v4; // rdi
  __int64 v7; // rax

  v4 = a3;
  if ( a3 < 0 || a3 >= (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 24LL))(a1, a4) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v7 = Spectre::Engine::Scene::GetCustomData<Spectre::Engine::ViewerEngine::ViewerSceneData>(*a4);
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
      a2,
      (_QWORD *)(v7 + 8 + 16 * v4));
  }
  return a2;
}
