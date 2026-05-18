/*
 * XREFs of ??0MeshInstance@Engine@Spectre@@QEAA@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18004AD2C
 * Callers:
 *     ??$make_shared@VMeshInstance@Engine@Spectre@@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@YA?AV?$shared_ptr@VMeshInstance@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@0@@Z @ 0x180014288 (--$make_shared@VMeshInstance@Engine@Spectre@@V-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@std.c)
 *     ??$make_shared@VMeshInstance@Engine@Spectre@@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@YA?AV?$shared_ptr@VMeshInstance@Engine@Spectre@@@0@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@0@@Z @ 0x18004ABB8 (--$make_shared@VMeshInstance@Engine@Spectre@@AEAV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?SetAttribute@SceneNode@Engine@Spectre@@QEAAXW4ESceneAttribute@23@_N@Z @ 0x18003D348 (-SetAttribute@SceneNode@Engine@Spectre@@QEAAXW4ESceneAttribute@23@_N@Z.c)
 *     ?SetMaterialCount@MeshInstance@Engine@Spectre@@QEAAX_K@Z @ 0x18004CB18 (-SetMaterialCount@MeshInstance@Engine@Spectre@@QEAAX_K@Z.c)
 *     ??0Component@Engine@Spectre@@IEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@4@@Z @ 0x180081040 (--0Component@Engine@Spectre@@IEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@st.c)
 */

// Hidden C++ exception states: #wind=8
Spectre::Engine::MeshInstance *__fastcall Spectre::Engine::MeshInstance::MeshInstance(
        Spectre::Engine::MeshInstance *this,
        Spectre::Engine::SceneNode **a2)
{
  std::_Ref_count_base *v4; // rcx
  _QWORD v6[4]; // [rsp+30h] [rbp-38h] BYREF

  std::string::string(v6, (__int64)"Mesh Instance");
  Spectre::Engine::Component::Component(this, v6, a2);
  std::string::_Tidy_deallocate((__int64)v6);
  *(_QWORD *)this = &Spectre::Engine::MeshInstance::`vftable';
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_BYTE *)this + 168) = -1;
  *(_OWORD *)((char *)this + 172) = Spectre::Utils::Math::Vector4::One;
  Spectre::Engine::SceneNode::SetAttribute(*a2, 3, 1);
  Spectre::Engine::MeshInstance::SetMaterialCount(this, 1uLL);
  v4 = a2[1];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  return this;
}
