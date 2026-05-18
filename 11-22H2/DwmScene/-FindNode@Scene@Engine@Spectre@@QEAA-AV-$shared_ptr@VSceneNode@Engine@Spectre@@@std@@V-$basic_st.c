/*
 * XREFs of ?FindNode@Scene@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@_K@Z @ 0x180040D6C
 * Callers:
 *     ?FindClone@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$shared_ptr@VScene@Engine@Spectre@@@5@V45@@Z @ 0x1800669E0 (-FindClone@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V-$shared_.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ?FindNode@Scene@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$shared_ptr@VSceneLayer@Engine@Spectre@@@5@_K@Z @ 0x180040DF4 (-FindNode@Scene@Engine@Spectre@@QEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V-$shared_p.c)
 *     ?GetLayer@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x180041040 (-GetLayer@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V-$basic_s.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Spectre::Engine::Scene::FindNode(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rax
  __int64 Layer; // rax
  _BYTE v9[16]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v10[5]; // [rsp+38h] [rbp-60h] BYREF

  v10[4] = a3;
  v6 = std::wstring::wstring(v10, a3);
  Layer = Spectre::Engine::Scene::GetLayer(a1, v9, v6);
  Spectre::Engine::Scene::FindNode(a1, a2, Layer);
  std::wstring::_Tidy_deallocate(a3);
  return a2;
}
