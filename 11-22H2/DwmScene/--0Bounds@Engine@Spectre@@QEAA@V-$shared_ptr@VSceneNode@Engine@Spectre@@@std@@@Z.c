/*
 * XREFs of ??0Bounds@Engine@Spectre@@QEAA@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x180049FAC
 * Callers:
 *     ??$make_shared@VBounds@Engine@Spectre@@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@YA?AV?$shared_ptr@VBounds@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@0@@Z @ 0x1800141DC (--$make_shared@VBounds@Engine@Spectre@@V-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@YA-A.c)
 *     ??$make_shared@VBounds@Engine@Spectre@@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@YA?AV?$shared_ptr@VBounds@Engine@Spectre@@@0@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@0@@Z @ 0x180049F10 (--$make_shared@VBounds@Engine@Spectre@@AEAV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@Y.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?SetAttribute@SceneNode@Engine@Spectre@@QEAAXW4ESceneAttribute@23@_N@Z @ 0x18003D348 (-SetAttribute@SceneNode@Engine@Spectre@@QEAAXW4ESceneAttribute@23@_N@Z.c)
 *     ??0Component@Engine@Spectre@@IEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@4@@Z @ 0x180081040 (--0Component@Engine@Spectre@@IEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@st.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Spectre::Engine::Bounds::Bounds(__int64 a1, Spectre::Engine::SceneNode **a2)
{
  std::_Ref_count_base *v4; // rcx
  _QWORD v6[4]; // [rsp+40h] [rbp-38h] BYREF

  std::string::string(v6, (__int64)"Bounds");
  Spectre::Engine::Component::Component(a1, v6, a2);
  std::string::_Tidy_deallocate((__int64)v6);
  *(_QWORD *)a1 = &Spectre::Engine::Bounds::`vftable';
  *(_QWORD *)(a1 + 88) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 100) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *(_DWORD *)(a1 + 108) = 0;
  Spectre::Engine::SceneNode::SetAttribute(*a2, 3, 1);
  v4 = a2[1];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  return a1;
}
