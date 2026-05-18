/*
 * XREFs of ?OnLayerModified@Scene@Engine@Spectre@@QEAAXV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x18004181C
 * Callers:
 *     ?UpdateBounds@SpectreMeshComponent@@UEAAJXZ @ 0x1800148B0 (-UpdateBounds@SpectreMeshComponent@@UEAAJXZ.c)
 *     ?SetLocalTransform@SpectreNode@@UEAAJAEBUXMMATRIX@DirectX@@@Z @ 0x180015090 (-SetLocalTransform@SpectreNode@@UEAAJAEBUXMMATRIX@DirectX@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ??4?$atomic@_N@std@@QEAA_N_N@Z @ 0x180040168 (--4-$atomic@_N@std@@QEAA_N_N@Z.c)
 *     ?GetLayer@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x180041040 (-GetLayer@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V-$basic_s.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Spectre::Engine::Scene::OnLayerModified(__int64 a1, __int64 a2)
{
  std::_Ref_count_base *v4; // rax
  _QWORD *Layer; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // [rsp+20h] [rbp-48h] BYREF
  std::_Ref_count_base *v11; // [rsp+28h] [rbp-40h]
  _QWORD v12[5]; // [rsp+30h] [rbp-38h] BYREF

  v12[4] = a2;
  v4 = (std::_Ref_count_base *)std::wstring::wstring(v12, a2);
  Layer = Spectre::Engine::Scene::GetLayer(a1, &v10, v4);
  LOBYTE(v6) = 1;
  std::atomic<bool>::operator=(*Layer + 72LL, v6, v7, v8);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  return std::wstring::_Tidy_deallocate(a2);
}
