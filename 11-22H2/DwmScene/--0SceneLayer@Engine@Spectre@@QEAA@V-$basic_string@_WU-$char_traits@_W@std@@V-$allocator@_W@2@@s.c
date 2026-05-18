/*
 * XREFs of ??0SceneLayer@Engine@Spectre@@QEAA@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@4@@Z @ 0x18003FCA4
 * Callers:
 *     ??$make_shared@VSceneLayer@Engine@Spectre@@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@5@@std@@YA?AV?$shared_ptr@VSceneLayer@Engine@Spectre@@@0@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@0@@Z @ 0x18003F944 (--$make_shared@VSceneLayer@Engine@Spectre@@AEAV-$basic_string@_WU-$char_traits@_W@std@@V-$alloca.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ??0SpinLock@Engine@Spectre@@QEAA@XZ @ 0x1800315CC (--0SpinLock@Engine@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Spectre::Engine::SceneLayer::SceneLayer(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // r8

  std::wstring::wstring((_QWORD *)a1, a2);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    (_QWORD *)(a1 + 32),
    a3);
  *(_QWORD *)(a1 + 48) = Spectre::Utils::Math::Vector3::Zero;
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 60) = Spectre::Utils::Math::Vector3::Zero;
  *(_DWORD *)(a1 + 68) = 0;
  *(_BYTE *)(a1 + 72) = 1;
  Spectre::Engine::SpinLock::SpinLock((Spectre::Engine::SpinLock *)(a1 + 76), 0LL, v6);
  *(_BYTE *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  std::wstring::_Tidy_deallocate(a2);
  return a1;
}
