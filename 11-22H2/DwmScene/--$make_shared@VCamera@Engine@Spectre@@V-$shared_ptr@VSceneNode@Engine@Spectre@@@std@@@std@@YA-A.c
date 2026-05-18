/*
 * XREFs of ??$make_shared@VCamera@Engine@Spectre@@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@YA?AV?$shared_ptr@VCamera@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@0@@Z @ 0x180030150
 * Callers:
 *     ??$AddComponent@VCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VCamera@Engine@Spectre@@@std@@XZ @ 0x18002DAEC (--$AddComponent@VCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VCamera@E.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??$_Set_ptr_rep_and_enable_shared@VCamera@Engine@Spectre@@@?$shared_ptr@VCamera@Engine@Spectre@@@std@@AEAAXQEAVCamera@Engine@Spectre@@QEAV_Ref_count_base@1@@Z @ 0x18002F754 (--$_Set_ptr_rep_and_enable_shared@VCamera@Engine@Spectre@@@-$shared_ptr@VCamera@Engine@Spectre@@.c)
 *     ??0Camera@Engine@Spectre@@QEAA@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18005930C (--0Camera@Engine@Spectre@@QEAA@V-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<Spectre::Engine::Camera,std::shared_ptr<Spectre::Engine::SceneNode>>(
        _QWORD *a1,
        _QWORD *a2)
{
  _DWORD *v4; // rax
  __int64 v5; // rbx

  v4 = operator new(0x6F8uLL);
  v5 = (__int64)v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::Camera>::`vftable';
    *a2 = 0LL;
    a2[1] = 0LL;
    Spectre::Engine::Camera::Camera((Spectre::Engine::Camera *)(v4 + 4));
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  std::shared_ptr<Spectre::Engine::Camera>::_Set_ptr_rep_and_enable_shared<Spectre::Engine::Camera>(a1, v5 + 16, v5);
  return a1;
}
