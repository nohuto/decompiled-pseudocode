/*
 * XREFs of ??0ColorTransform@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18008F4C8
 * Callers:
 *     ??$AddComponent@VColorTransform@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VColorTransform@Engine@Spectre@@@std@@XZ @ 0x180061948 (--$AddComponent@VColorTransform@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@V.c)
 *     ?Clone@ColorTransform@Engine@Spectre@@UEBA?AV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV?$shared_ptr@VSceneNode@Engine@Spectre@@@5@@Z @ 0x18008F740 (-Clone@ColorTransform@Engine@Spectre@@UEBA-AV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0Component@Engine@Spectre@@IEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@4@@Z @ 0x180081040 (--0Component@Engine@Spectre@@IEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@st.c)
 *     ?ResetToSize@ColorTransform@Engine@Spectre@@QEAAX_K@Z @ 0x180090F2C (-ResetToSize@ColorTransform@Engine@Spectre@@QEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=5
Spectre::Engine::ColorTransform *__fastcall Spectre::Engine::ColorTransform::ColorTransform(
        Spectre::Engine::ColorTransform *this,
        _QWORD *a2)
{
  unsigned __int64 v4; // rdx
  _QWORD v6[4]; // [rsp+28h] [rbp-30h] BYREF

  std::string::string(v6, (__int64)"ColorTransform");
  Spectre::Engine::Component::Component((__int64)this, (__int64)v6, a2);
  std::string::_Tidy_deallocate((__int64)v6);
  *(_QWORD *)this = &Spectre::Engine::ColorTransform::`vftable';
  *((_BYTE *)this + 88) = 1;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 1065353216;
  Spectre::Engine::ColorTransform::ResetToSize(this, v4);
  return this;
}
