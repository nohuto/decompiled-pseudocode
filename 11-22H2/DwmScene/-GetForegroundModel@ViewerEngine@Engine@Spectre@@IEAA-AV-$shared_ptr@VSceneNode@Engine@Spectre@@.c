/*
 * XREFs of ?GetForegroundModel@ViewerEngine@Engine@Spectre@@IEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@AEBV?$shared_ptr@VScene@Engine@Spectre@@@5@@Z @ 0x180066C20
 * Callers:
 *     ?UpdateModelFromCameraConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VViewerCamera@Engine@Spectre@@@std@@_N1@Z @ 0x18006B874 (-UpdateModelFromCameraConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VViewerCa.c)
 *     ?UpdateModelFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@_N@Z @ 0x18006BA5C (-UpdateModelFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@S.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetChildFirst@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ @ 0x18003BF78 (-GetChildFirst@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ.c)
 *     ?GetLayer@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x180041040 (-GetLayer@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V-$basic_s.c)
 *     ?GetParent@IConfigurationManager@Utils@Spectre@@QEBA?AV?$shared_ptr@VIConfigurationManager@Utils@Spectre@@@std@@XZ @ 0x180041390 (-GetParent@IConfigurationManager@Utils@Spectre@@QEBA-AV-$shared_ptr@VIConfigurationManager@Utils.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall Spectre::Engine::ViewerEngine::GetForegroundModel(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 *v4; // r8
  __int64 v5; // rbx
  std::_Ref_count_base *v6; // rax
  Spectre::Engine::SceneNode *v8; // [rsp+28h] [rbp-48h] BYREF
  std::_Ref_count_base *v9; // [rsp+30h] [rbp-40h]
  __int64 v10; // [rsp+38h] [rbp-38h] BYREF
  std::_Ref_count_base *v11; // [rsp+40h] [rbp-30h]
  _QWORD v12[5]; // [rsp+48h] [rbp-28h] BYREF

  if ( !std::operator!=<Spectre::Engine::Scene>(a3) )
  {
LABEL_12:
    *a2 = 0LL;
    a2[1] = 0LL;
    return a2;
  }
  v5 = *v4;
  v6 = (std::_Ref_count_base *)std::wstring::wstring(v12, (__int64)&Spectre::Engine::kSceneLayerDefaultID);
  Spectre::Engine::Scene::GetLayer(v5, &v10, v6);
  if ( !std::operator!=<Spectre::Engine::Scene>(&v10) )
  {
LABEL_10:
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    goto LABEL_12;
  }
  Spectre::Utils::IConfigurationManager::GetParent(v10, &v8);
  if ( !std::operator!=<Spectre::Engine::Scene>(&v8) )
  {
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    goto LABEL_10;
  }
  Spectre::Engine::SceneNode::GetChildFirst(v8, v12);
  *a2 = v12[0];
  a2[1] = v12[1];
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  return a2;
}
