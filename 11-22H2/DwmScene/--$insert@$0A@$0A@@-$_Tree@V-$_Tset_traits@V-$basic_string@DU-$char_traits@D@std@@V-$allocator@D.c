/*
 * XREFs of ??$insert@$0A@$0A@@?$_Tree@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x18004DEA4
 * Callers:
 *     ?GetShaderFamilyNames@ShaderManager@Engine@Spectre@@QEBA?AV?$set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ @ 0x1800502BC (-GetShaderFamilyNames@ShaderManager@Engine@Spectre@@QEBA-AV-$set@V-$basic_string@DU-$char_traits.c)
 *     ?AddOption@ShaderFamily@Engine@Spectre@@QEAA?AW4ShaderOption@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18005FE4C (-AddOption@ShaderFamily@Engine@Spectre@@QEAA-AW4ShaderOption@23@AEBV-$basic_string@DU-$char_trai.c)
 *     ?GetShaderOptionsDescription@ShaderRegistration@Engine@Spectre@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_KQEBV45@H@Z @ 0x18007C2B8 (-GetShaderOptionsDescription@ShaderRegistration@Engine@Spectre@@YA-AV-$basic_string@DU-$char_tra.c)
 * Callees:
 *     ??$_Emplace@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$_Tree@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAX@std@@_N@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x18004D56C (--$_Emplace@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@-$_Tree@V-$_Tset_t.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::insert<0,0>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Emplace<std::string const &>(
    a1,
    (__int64)&v5,
    a3);
  *(_QWORD *)a2 = v5;
  *(_BYTE *)(a2 + 8) = v6;
  return a2;
}
