/*
 * XREFs of ?FindProperty@ShaderManager@Engine@Spectre@@QEBA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18004F9DC
 * Callers:
 *     ?AddProperty@ShaderManager@Engine@Spectre@@QEAA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18004F2E0 (-AddProperty@ShaderManager@Engine@Spectre@@QEAA-AW4ShaderProperty@23@AEBV-$basic_string@DU-$char.c)
 *     ?ApplySpecialEffects@ImageProcessingManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@V45@@Z @ 0x1800725CC (-ApplySpecialEffects@ImageProcessingManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VTexture@Engine@.c)
 *     ?FindProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180082C58 (-FindProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA-AW4ShaderProperty@23@AEBV-$basic_string@.c)
 * Callees:
 *     ??$_Find_lower_bound@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderProperty@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderProperty@Engine@Spectre@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderProperty@Engine@Spectre@@@std@@PEAX@std@@@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x18001CA20 (--$_Find_lower_bound@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@-$_Tree@V-$_.c)
 *     ??$_Lower_bound_duplicate@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVLevelSettings@Trace@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVLevelSettings@Trace@@@std@@@2@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVLevelSettings@Trace@@@std@@PEAX@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x18001CAC0 (--$_Lower_bound_duplicate@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@-$_Tree.c)
 */

__int64 __fastcall Spectre::Engine::ShaderManager::FindProperty(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rcx
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v2 = (_QWORD *)(a1 + 2088);
  std::_Tree<std::_Tmap_traits<std::string,enum Spectre::Engine::ShaderProperty,std::less<std::string>,std::allocator<std::pair<std::string const,enum Spectre::Engine::ShaderProperty>>,0>>::_Find_lower_bound<std::string>(
    (__int64 *)(a1 + 2088),
    (__int64)v8,
    a2);
  v4 = a2;
  v5 = v9;
  if ( !std::_Tree<std::_Tmap_traits<std::string,Trace::LevelSettings *,std::less<std::string>,std::allocator<std::pair<std::string const,Trace::LevelSettings *>>,0>>::_Lower_bound_duplicate<std::string>(
          v6,
          v9,
          v4)
    || v5 == *v2 )
  {
    return 511LL;
  }
  else
  {
    return *(unsigned __int16 *)(v5 + 64);
  }
}
