/*
 * XREFs of ??$make_shared@VBounds@Engine@Spectre@@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@YA?AV?$shared_ptr@VBounds@Engine@Spectre@@@0@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@0@@Z @ 0x180049F10
 * Callers:
 *     ?Clone@Bounds@Engine@Spectre@@UEBA?AV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV?$shared_ptr@VSceneNode@Engine@Spectre@@@5@@Z @ 0x18004A110 (-Clone@Bounds@Engine@Spectre@@UEBA-AV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV-$shared.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Set_ptr_rep_and_enable_shared@VBounds@Engine@Spectre@@@?$shared_ptr@VBounds@Engine@Spectre@@@std@@AEAAXQEAVBounds@Engine@Spectre@@QEAV_Ref_count_base@1@@Z @ 0x180013EDC (--$_Set_ptr_rep_and_enable_shared@VBounds@Engine@Spectre@@@-$shared_ptr@VBounds@Engine@Spectre@@.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0Bounds@Engine@Spectre@@QEAA@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x180049FAC (--0Bounds@Engine@Spectre@@QEAA@V-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<Spectre::Engine::Bounds,std::shared_ptr<Spectre::Engine::SceneNode> &>(
        _QWORD *a1,
        _QWORD *a2)
{
  _DWORD *v4; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rax
  _QWORD v8[4]; // [rsp+28h] [rbp-20h] BYREF

  v4 = operator new(0x80uLL);
  v5 = (__int64)v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::Bounds>::`vftable';
    v6 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           v8,
           a2);
    Spectre::Engine::Bounds::Bounds(v5 + 16, v6);
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  std::shared_ptr<Spectre::Engine::Bounds>::_Set_ptr_rep_and_enable_shared<Spectre::Engine::Bounds>(a1, v5 + 16, v5);
  return a1;
}
