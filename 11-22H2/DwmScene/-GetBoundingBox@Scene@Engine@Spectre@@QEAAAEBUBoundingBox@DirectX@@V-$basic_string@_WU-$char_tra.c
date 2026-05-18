/*
 * XREFs of ?GetBoundingBox@Scene@Engine@Spectre@@QEAAAEBUBoundingBox@DirectX@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x180040F90
 * Callers:
 *     ?GetAxisAlignedBoundingBox@SpectreWorld@@UEBAXPEAUD2D_VECTOR_3F@@0@Z @ 0x18001BE80 (-GetAxisAlignedBoundingBox@SpectreWorld@@UEBAXPEAUD2D_VECTOR_3F@@0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ?VerifyReadAccess@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A2FC (-VerifyReadAccess@Lockable@Engine@Spectre@@QEBAXXZ.c)
 *     ?GetLayer@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x180041040 (-GetLayer@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V-$basic_s.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Spectre::Engine::Scene::GetBoundingBox(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rbx
  _BYTE v7[8]; // [rsp+20h] [rbp-48h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-40h]
  _QWORD v9[5]; // [rsp+30h] [rbp-38h] BYREF

  v9[4] = a2;
  Spectre::Engine::Lockable::VerifyReadAccess((Spectre::Engine::Lockable *)(a1 + 16));
  v4 = std::wstring::wstring(v9, a2);
  v5 = *(_QWORD *)Spectre::Engine::Scene::GetLayer(a1, v7, v4);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  std::wstring::_Tidy_deallocate(a2);
  return v5 + 48;
}
