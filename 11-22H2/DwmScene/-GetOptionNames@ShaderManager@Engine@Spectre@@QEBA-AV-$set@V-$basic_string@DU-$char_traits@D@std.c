/*
 * XREFs of ?GetOptionNames@ShaderManager@Engine@Spectre@@QEBA?AV?$set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@_K@Z @ 0x18004FCB0
 * Callers:
 *     ?SetShaders@ShaderPipeline@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_K0@Z @ 0x180087868 (-SetShaders@ShaderPipeline@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@s_ea_180087868.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??$_Emplace@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$_Tree@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x18004D634 (--$_Emplace@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@-$_Tree@V-$_Tset_trai.c)
 *     ??0?$set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QEAA@XZ @ 0x18004E698 (--0-$set@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@U-$less@V-$basic_string@D.c)
 *     ?GetOptionName@ShaderManager@Engine@Spectre@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderOption@23@@Z @ 0x18004FC64 (-GetOptionName@ShaderManager@Engine@Spectre@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$all.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall Spectre::Engine::ShaderManager::GetOptionNames(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int v6; // ebx
  _QWORD *OptionName; // rax
  _BYTE v9[16]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v10[4]; // [rsp+40h] [rbp-48h] BYREF

  v6 = 0;
  std::set<std::string>::set<std::string>(a2);
  do
  {
    if ( _bittest64(&a3, v6) )
    {
      OptionName = Spectre::Engine::ShaderManager::GetOptionName(a1, v10, v6);
      std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Emplace<std::string>(
        a2,
        (__int64)v9,
        (__int64)OptionName);
      std::string::_Tidy_deallocate((__int64)v10);
    }
    ++v6;
  }
  while ( v6 < 0x40 );
  return a2;
}
