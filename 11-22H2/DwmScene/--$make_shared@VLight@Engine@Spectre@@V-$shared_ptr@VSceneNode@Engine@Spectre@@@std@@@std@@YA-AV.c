/*
 * XREFs of ??$make_shared@VLight@Engine@Spectre@@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@YA?AV?$shared_ptr@VLight@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@0@@Z @ 0x180012394
 * Callers:
 *     ??$AddComponent@VLight@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VLight@Engine@Spectre@@@std@@XZ @ 0x180011E04 (--$AddComponent@VLight@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VLight@Eng.c)
 * Callees:
 *     ??$_Set_ptr_rep_and_enable_shared@VLight@Engine@Spectre@@@?$shared_ptr@VLight@Engine@Spectre@@@std@@AEAAXQEAVLight@Engine@Spectre@@QEAV_Ref_count_base@1@@Z @ 0x1800121A8 (--$_Set_ptr_rep_and_enable_shared@VLight@Engine@Spectre@@@-$shared_ptr@VLight@Engine@Spectre@@@s.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0Light@Engine@Spectre@@QEAA@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x180042DFC (--0Light@Engine@Spectre@@QEAA@V-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<Spectre::Engine::Light,std::shared_ptr<Spectre::Engine::SceneNode>>(
        _QWORD *a1,
        _QWORD *a2)
{
  _DWORD *v4; // rax
  __int64 v5; // rbx

  v4 = operator new(0x98uLL);
  v5 = (__int64)v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::Light>::`vftable';
    *a2 = 0LL;
    a2[1] = 0LL;
    Spectre::Engine::Light::Light((Spectre::Engine::Light *)(v4 + 4));
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  std::shared_ptr<Spectre::Engine::Light>::_Set_ptr_rep_and_enable_shared<Spectre::Engine::Light>(a1, v5 + 16, v5);
  return a1;
}
