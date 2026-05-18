/*
 * XREFs of ??$make_shared@VMeshInstance@Engine@Spectre@@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@YA?AV?$shared_ptr@VMeshInstance@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@0@@Z @ 0x180014288
 * Callers:
 *     ??$AddComponent@VMeshInstance@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VMeshInstance@Engine@Spectre@@@std@@XZ @ 0x180013D44 (--$AddComponent@VMeshInstance@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VMe.c)
 * Callees:
 *     ??$_Set_ptr_rep_and_enable_shared@VMeshInstance@Engine@Spectre@@@?$shared_ptr@VMeshInstance@Engine@Spectre@@@std@@AEAAXQEAVMeshInstance@Engine@Spectre@@QEAV_Ref_count_base@1@@Z @ 0x180013F50 (--$_Set_ptr_rep_and_enable_shared@VMeshInstance@Engine@Spectre@@@-$shared_ptr@VMeshInstance@Engi.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0MeshInstance@Engine@Spectre@@QEAA@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18004AD2C (--0MeshInstance@Engine@Spectre@@QEAA@V-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<Spectre::Engine::MeshInstance,std::shared_ptr<Spectre::Engine::SceneNode>>(
        _QWORD *a1,
        _QWORD *a2)
{
  _DWORD *v4; // rax
  __int64 v5; // rbx

  v4 = operator new(0xD0uLL);
  v5 = (__int64)v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::MeshInstance>::`vftable';
    *a2 = 0LL;
    a2[1] = 0LL;
    Spectre::Engine::MeshInstance::MeshInstance((Spectre::Engine::MeshInstance *)(v4 + 4));
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  std::shared_ptr<Spectre::Engine::MeshInstance>::_Set_ptr_rep_and_enable_shared<Spectre::Engine::MeshInstance>(
    a1,
    v5 + 16,
    v5);
  return a1;
}
