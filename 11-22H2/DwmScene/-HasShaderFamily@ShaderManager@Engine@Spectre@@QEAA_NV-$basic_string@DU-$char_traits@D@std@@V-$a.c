/*
 * XREFs of ?HasShaderFamily@ShaderManager@Engine@Spectre@@QEAA_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180050484
 * Callers:
 *     ?CreateShaderFamily@ShaderManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@V?$shared_ptr@VIShaderExtension@Engine@Spectre@@@5@@Z @ 0x18004F6E0 (-CreateShaderFamily@ShaderManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderFamily@Engine@Spect.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@@std@@@std@@@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z @ 0x180050C30 (-find@-$_Tree@V-$_Tmap_traits@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@USha.c)
 */

bool __fastcall Spectre::Engine::ShaderManager::HasShaderFamily(__int64 a1, __int64 a2)
{
  bool v3; // bl
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)std::_Tree<std::_Tmap_traits<std::string,Spectre::Engine::ShaderManager::ShaderInfo,std::less<std::string>,std::allocator<std::pair<std::string const,Spectre::Engine::ShaderManager::ShaderInfo>>,0>>::find(
                    a1 + 18560,
                    v5,
                    a2) != *(_QWORD *)(a1 + 18560);
  std::string::_Tidy_deallocate(a2);
  return v3;
}
