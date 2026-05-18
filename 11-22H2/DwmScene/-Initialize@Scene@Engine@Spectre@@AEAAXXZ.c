/*
 * XREFs of ?Initialize@Scene@Engine@Spectre@@AEAAXXZ @ 0x1800413C0
 * Callers:
 *     ?CreateInstance@Scene@Engine@Spectre@@SA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@PEAV223@@Z @ 0x180040794 (-CreateInstance@Scene@Engine@Spectre@@SA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@PEAV223@@Z.c)
 *     ?CreateInstance@Scene@Engine@Spectre@@SA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@PEAV223@W4ThreadingMode@Lockable@23@@Z @ 0x180040828 (-CreateInstance@Scene@Engine@Spectre@@SA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@PEAV223@W4T.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?CreateLayer@Scene@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x1800408BC (-CreateLayer@Scene@Engine@Spectre@@QEAA-AV-$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V-$basi.c)
 */

void __fastcall Spectre::Engine::Scene::Initialize(Spectre::Engine::Scene *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // [rsp+20h] [rbp-30h] BYREF
  std::_Ref_count_base *v9; // [rsp+28h] [rbp-28h]
  _QWORD v10[4]; // [rsp+30h] [rbp-20h] BYREF

  v2 = std::wstring::wstring(v10, (__int64)&Spectre::Engine::SceneLayerStandardID::kBackground);
  Spectre::Engine::Scene::CreateLayer((__int64)this, &v8, v2);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  v3 = std::wstring::wstring(v10, (__int64)&Spectre::Engine::SceneLayerStandardID::kForeground);
  Spectre::Engine::Scene::CreateLayer((__int64)this, &v8, v3);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  v4 = std::wstring::wstring(v10, (__int64)&Spectre::Engine::SceneLayerStandardID::kCameras);
  Spectre::Engine::Scene::CreateLayer((__int64)this, &v8, v4);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  v5 = std::wstring::wstring(v10, (__int64)&Spectre::Engine::SceneLayerStandardID::kLights);
  Spectre::Engine::Scene::CreateLayer((__int64)this, &v8, v5);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  v6 = std::wstring::wstring(v10, (__int64)&Spectre::Engine::SceneLayerStandardID::kEnvironment);
  Spectre::Engine::Scene::CreateLayer((__int64)this, &v8, v6);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  v7 = std::wstring::wstring(v10, (__int64)&Spectre::Engine::SceneLayerStandardID::kImageProcessing);
  Spectre::Engine::Scene::CreateLayer((__int64)this, &v8, v7);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
}
