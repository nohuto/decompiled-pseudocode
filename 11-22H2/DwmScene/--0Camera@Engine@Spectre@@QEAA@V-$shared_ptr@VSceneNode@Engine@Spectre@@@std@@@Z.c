/*
 * XREFs of ??0Camera@Engine@Spectre@@QEAA@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18005930C
 * Callers:
 *     ??$make_shared@VCamera@Engine@Spectre@@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@YA?AV?$shared_ptr@VCamera@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@0@@Z @ 0x180030150 (--$make_shared@VCamera@Engine@Spectre@@V-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@YA-A.c)
 *     ??$make_shared@VCamera@Engine@Spectre@@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@YA?AV?$shared_ptr@VCamera@Engine@Spectre@@@0@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@0@@Z @ 0x180059160 (--$make_shared@VCamera@Engine@Spectre@@AEAV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@Y.c)
 *     ??0ShadowMapCamera@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@I@Z @ 0x18008D604 (--0ShadowMapCamera@Engine@Spectre@@QEAA@AEBV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@I@Z.c)
 *     ??0ViewerCamera@Engine@Spectre@@QEAA@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x180091C94 (--0ViewerCamera@Engine@Spectre@@QEAA@V-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ??0ImageProcessingCamera@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x1800978B4 (--0ImageProcessingCamera@Engine@Spectre@@QEAA@AEBV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002945C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??4?$atomic@I@std@@QEAAII@Z @ 0x180059BFC (--4-$atomic@I@std@@QEAAII@Z.c)
 *     ?Reset@Camera@Engine@Spectre@@UEAAXXZ @ 0x18005CB80 (-Reset@Camera@Engine@Spectre@@UEAAXXZ.c)
 *     ??0Component@Engine@Spectre@@IEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@4@@Z @ 0x180081040 (--0Component@Engine@Spectre@@IEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@st.c)
 */

// Hidden C++ exception states: #wind=13
Spectre::Engine::Camera *__fastcall Spectre::Engine::Camera::Camera(Spectre::Engine::Camera *this, __int64 a2)
{
  char *v4; // rsi
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  char *v7; // r9
  std::_Ref_count_base *v8; // rcx
  _QWORD v10[4]; // [rsp+38h] [rbp-40h] BYREF

  std::string::string(v10, (__int64)"Camera");
  Spectre::Engine::Component::Component(this, v10, a2);
  std::string::_Tidy_deallocate((__int64)v10);
  *(_QWORD *)this = &Spectre::Engine::Camera::`vftable';
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 1;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = -1;
  *((_DWORD *)this + 43) = 0;
  *((_DWORD *)this + 44) = -1;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 15LL;
  *((_BYTE *)this + 184) = 0;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 15LL;
  *((_BYTE *)this + 216) = 0;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 15LL;
  *((_BYTE *)this + 248) = 0;
  v4 = (char *)this + 280;
  `vector constructor iterator'(
    (char *)this + 280,
    4LL,
    3LL,
    (void (__fastcall *)(char *))std::atomic<unsigned int>::atomic<unsigned int>);
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 76) = 0;
  *((_DWORD *)this + 77) = 1065353216;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_DWORD *)this + 91) = 1065353216;
  *((_DWORD *)this + 92) = 1065353216;
  *((_BYTE *)this + 388) = 0;
  *((_QWORD *)this + 50) = 0LL;
  *((_DWORD *)this + 102) = 0;
  *((_DWORD *)this + 103) = 3;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_DWORD *)this + 110) = 0;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  *((_QWORD *)this + 56) = v5;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  `vector constructor iterator'(
    (char *)this + 548,
    256LL,
    4LL,
    (void (__fastcall *)(char *))std::array<Spectre::Utils::Math::Matrix,4>::array<Spectre::Utils::Math::Matrix,4>);
  *(_QWORD *)((char *)this + 1572) = 0LL;
  *(_QWORD *)((char *)this + 1580) = 0LL;
  *(_QWORD *)((char *)this + 1588) = 0LL;
  *(_QWORD *)((char *)this + 1596) = 0LL;
  *(_QWORD *)((char *)this + 1604) = 0LL;
  *((_QWORD *)this + 202) = 0LL;
  *((_QWORD *)this + 203) = 0LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x58uLL);
  *v6 = v6;
  v6[1] = v6;
  v6[2] = v6;
  *((_WORD *)v6 + 12) = 257;
  *((_QWORD *)this + 202) = v6;
  *((_QWORD *)this + 204) = 0LL;
  *((_QWORD *)this + 205) = 0LL;
  *((_QWORD *)this + 206) = 0LL;
  *((_QWORD *)this + 207) = 0LL;
  *((_QWORD *)this + 208) = 0LL;
  *((_QWORD *)this + 209) = 0LL;
  *((_QWORD *)this + 210) = 0LL;
  *((_QWORD *)this + 211) = 0LL;
  *((_QWORD *)this + 212) = &std::nullptr_t `RTTI Type Descriptor';
  *((_QWORD *)this + 220) = 0LL;
  Spectre::Engine::Camera::Reset(this);
  v7 = (char *)this + 292;
  while ( v4 != v7 )
  {
    std::atomic<unsigned int>::operator=(v4);
    v4 += 4;
  }
  v8 = *(std::_Ref_count_base **)(a2 + 8);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  return this;
}
