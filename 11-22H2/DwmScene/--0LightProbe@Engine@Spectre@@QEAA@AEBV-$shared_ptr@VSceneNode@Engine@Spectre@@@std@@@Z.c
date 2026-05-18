/*
 * XREFs of ??0LightProbe@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x1800510A8
 * Callers:
 *     ?Clone@LightProbe@Engine@Spectre@@UEBA?AV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV?$shared_ptr@VSceneNode@Engine@Spectre@@@5@@Z @ 0x180051690 (-Clone@LightProbe@Engine@Spectre@@UEBA-AV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV-$sh.c)
 *     ??$AddComponent@VLightProbe@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@XZ @ 0x180061A68 (--$AddComponent@VLightProbe@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VLigh.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??$CreateResource@VTexture@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x180016268 (--$CreateResource@VTexture@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr_ea_180016268.c)
 *     ??0Component@Engine@Spectre@@IEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@4@@Z @ 0x180081040 (--0Component@Engine@Spectre@@IEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@st.c)
 *     ?GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ @ 0x18008139C (-GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ??0SphericalHarmonics@Engine@Spectre@@QEAA@XZ @ 0x1800A3994 (--0SphericalHarmonics@Engine@Spectre@@QEAA@XZ.c)
 *     ??0SphericalPolynomial@Engine@Spectre@@QEAA@XZ @ 0x1800A3CF8 (--0SphericalPolynomial@Engine@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
Spectre::Engine::Component *__fastcall Spectre::Engine::LightProbe::LightProbe(
        Spectre::Engine::Component *this,
        __int64 a2)
{
  struct Spectre::Engine::Engine *Engine; // rax
  _QWORD v6[4]; // [rsp+28h] [rbp-30h] BYREF

  std::string::string(v6, (__int64)"LightProbe");
  Spectre::Engine::Component::Component(this, v6, a2);
  std::string::_Tidy_deallocate((__int64)v6);
  *(_QWORD *)this = &Spectre::Engine::LightProbe::`vftable';
  *((_BYTE *)this + 88) = 1;
  *(_OWORD *)((char *)this + 92) = Spectre::Utils::Math::Quaternion::Identity;
  Spectre::Engine::SphericalHarmonics::SphericalHarmonics((Spectre::Engine::Component *)((char *)this + 108));
  Spectre::Engine::SphericalPolynomial::SphericalPolynomial((Spectre::Engine::Component *)((char *)this + 256));
  *((_QWORD *)this + 50) = 0LL;
  *((_DWORD *)this + 102) = 0;
  *(_QWORD *)((char *)this + 412) = 1065353216LL;
  *(_QWORD *)((char *)this + 420) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  Engine = Spectre::Engine::Component::GetEngine(this);
  Spectre::Engine::Engine::CreateResource<Spectre::Engine::Texture,>((__int64)Engine, (_QWORD *)this + 56);
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_OWORD *)this + 31) = Spectre::Utils::Math::Color::Black;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_DWORD *)this + 132) = 1065353216;
  return this;
}
