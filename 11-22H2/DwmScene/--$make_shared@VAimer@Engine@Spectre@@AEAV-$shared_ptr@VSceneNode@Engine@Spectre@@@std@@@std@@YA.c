/*
 * XREFs of ??$make_shared@VAimer@Engine@Spectre@@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@YA?AV?$shared_ptr@VAimer@Engine@Spectre@@@0@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@0@@Z @ 0x1800964F0
 * Callers:
 *     ?Clone@Aimer@Engine@Spectre@@UEBA?AV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV?$shared_ptr@VSceneNode@Engine@Spectre@@@5@@Z @ 0x1800966D0 (-Clone@Aimer@Engine@Spectre@@UEBA-AV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV-$shared_.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??$_Set_ptr_rep_and_enable_shared@VAimer@Engine@Spectre@@@?$shared_ptr@VAimer@Engine@Spectre@@@std@@AEAAXQEAVAimer@Engine@Spectre@@QEAV_Ref_count_base@1@@Z @ 0x180062CB4 (--$_Set_ptr_rep_and_enable_shared@VAimer@Engine@Spectre@@@-$shared_ptr@VAimer@Engine@Spectre@@@s.c)
 *     ??0Aimer@Engine@Spectre@@QEAA@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18009658C (--0Aimer@Engine@Spectre@@QEAA@V-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<Spectre::Engine::Aimer,std::shared_ptr<Spectre::Engine::SceneNode> &>(
        _QWORD *a1,
        _QWORD *a2)
{
  _DWORD *v4; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rax
  _QWORD v8[4]; // [rsp+28h] [rbp-20h] BYREF

  v4 = operator new(0xB8uLL);
  v5 = (__int64)v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::Aimer>::`vftable';
    v6 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           v8,
           a2);
    Spectre::Engine::Aimer::Aimer(v5 + 16, v6);
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  std::shared_ptr<Spectre::Engine::Aimer>::_Set_ptr_rep_and_enable_shared<Spectre::Engine::Aimer>(a1, v5 + 16, v5);
  return a1;
}
