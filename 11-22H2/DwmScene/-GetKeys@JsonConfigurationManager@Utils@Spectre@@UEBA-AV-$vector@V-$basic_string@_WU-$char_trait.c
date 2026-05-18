/*
 * XREFs of ?GetKeys@JsonConfigurationManager@Utils@Spectre@@UEBA?AV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x1800DE790
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Find_lower_bound@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VSceneLayer@Engine@Spectre@@@2@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VSceneLayer@Engine@Spectre@@@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VSceneLayer@Engine@Spectre@@@2@@std@@PEAX@std@@@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x18003F46C (--$_Find_lower_bound@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@-$_Tree@V.c)
 *     ??$_Lower_bound_duplicate@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VSceneLayer@Engine@Spectre@@@2@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VSceneLayer@Engine@Spectre@@@2@@std@@@2@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VSceneLayer@Engine@Spectre@@@2@@std@@PEAX@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x18003F594 (--$_Lower_bound_duplicate@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@-$_T.c)
 *     ?GetKeys@ConfigurationValue@Utils@Spectre@@QEAA?AV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@XZ @ 0x1800DFA14 (-GetKeys@ConfigurationValue@Utils@Spectre@@QEAA-AV-$vector@V-$basic_string@_WU-$char_traits@_W@s.c)
 */

_QWORD *__fastcall Spectre::Utils::JsonConfigurationManager::GetKeys(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v3; // rsi
  _QWORD *v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rcx
  _BYTE v10[16]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h]

  v3 = (_QWORD *)(a1 + 144);
  std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<Spectre::Engine::SceneLayer>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<Spectre::Engine::SceneLayer>>>,0>>::_Find_lower_bound<std::wstring>(
    (__int64 *)(a1 + 144),
    (__int64)v10,
    a3);
  v6 = a3;
  v7 = v11;
  if ( !std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<Spectre::Engine::SceneLayer>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<Spectre::Engine::SceneLayer>>>,0>>::_Lower_bound_duplicate<std::wstring>(
          v8,
          v11,
          v6)
    || v7 == *v3 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
  }
  else
  {
    Spectre::Utils::ConfigurationValue::GetKeys(v7 + 64, a2);
  }
  return a2;
}
