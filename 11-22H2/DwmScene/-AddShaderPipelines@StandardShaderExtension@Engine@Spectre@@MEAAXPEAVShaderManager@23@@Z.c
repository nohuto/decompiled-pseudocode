/*
 * XREFs of ?AddShaderPipelines@StandardShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z @ 0x18007D290
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18000B4B0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?_Tidy@?$vector@U?$pair@II@std@@V?$allocator@U?$pair@II@std@@@2@@std@@AEAAXXZ @ 0x1800105A8 (-_Tidy@-$vector@U-$pair@II@std@@V-$allocator@U-$pair@II@std@@@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Erase_head@V?$allocator@U?$_Tree_node@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAX@std@@@1@@Z @ 0x18004D844 (--$_Erase_head@V-$allocator@U-$_Tree_node@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@.c)
 *     ?GetOptionGroup@ShaderManager@Engine@Spectre@@QEBA_KV?$set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z @ 0x18004FB58 (-GetOptionGroup@ShaderManager@Engine@Spectre@@QEBA_KV-$set@V-$basic_string@DU-$char_traits@D@std.c)
 *     ??$?0V?$allocator@U?$_Tree_node@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAX@std@@@std@@@?$_Tree@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@std@@QEAA@AEBV01@$$QEAV?$allocator@U?$_Tree_node@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAX@std@@@1@@Z @ 0x18005E994 (--$-0V-$allocator@U-$_Tree_node@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@PE.c)
 *     ??0?$set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QEAA@V?$initializer_list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@@Z @ 0x180063CA4 (--0-$set@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@U-$less@V-$b_ea_180063CA4.c)
 *     ??0?$vector@_KV?$allocator@_K@std@@@std@@QEAA@V?$initializer_list@_K@1@AEBV?$allocator@_K@1@@Z @ 0x18007CA0C (--0-$vector@_KV-$allocator@_K@std@@@std@@QEAA@V-$initializer_list@_K@1@AEBV-$allocator@_K@1@@Z.c)
 *     ?AddBackgroundShaderPipelines@StandardShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@@Z @ 0x18007CC8C (-AddBackgroundShaderPipelines@StandardShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@.c)
 *     ?AddStochasticTransparencyShaderPipelines@StandardShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@@Z @ 0x18007D3B0 (-AddStochasticTransparencyShaderPipelines@StandardShaderExtension@Engine@Spectre@@IEAAXPEAVShade.c)
 *     ?AddBaseShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@AEBV?$vector@_KV?$allocator@_K@std@@@std@@@Z @ 0x180098B0C (-AddBaseShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@AEBV-$vect.c)
 *     ?AddDepthOnlyShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@_N@Z @ 0x180099D68 (-AddDepthOnlyShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@_N@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Spectre::Engine::StandardShaderExtension::AddShaderPipelines(
        Spectre::Engine::StandardShaderExtension *this,
        struct Spectre::Engine::ShaderManager *a2)
{
  char v4; // r8
  __int64 v5; // r8
  __m128i OptionGroup; // [rsp+20h] [rbp-19h] BYREF
  void *v7[2]; // [rsp+30h] [rbp-9h] BYREF
  _QWORD v8[2]; // [rsp+40h] [rbp+7h] BYREF
  __int64 v9[3]; // [rsp+50h] [rbp+17h] BYREF
  _QWORD v10[4]; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v11; // [rsp+88h] [rbp+4Fh] BYREF

  Spectre::Engine::BaseShaderExtension::AddDepthOnlyShaderPipelines(this, a2, 1);
  Spectre::Engine::StandardShaderExtension::AddBackgroundShaderPipelines((__int64 **)this, a2);
  Spectre::Engine::StandardShaderExtension::AddStochasticTransparencyShaderPipelines(this, a2);
  std::string::string(v10, (__int64)&Spectre::Engine::ShaderConstants::kOption_GLTFMaterial);
  OptionGroup.m128i_i64[0] = (__int64)v10;
  OptionGroup.m128i_i64[1] = (__int64)&v11;
  std::set<std::string>::set<std::string>((__int64 *)v7, &OptionGroup);
  `eh vector destructor iterator'(
    (char *)v10,
    32LL,
    1LL,
    (void (*)(void *))std::pair<std::string const,float>::~pair<std::string const,float>);
  std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>(
    &OptionGroup,
    v7,
    v4);
  OptionGroup = (__m128i)(unsigned __int64)Spectre::Engine::ShaderManager::GetOptionGroup(
                                             (__int64)a2,
                                             (void **)&OptionGroup);
  v8[0] = &OptionGroup;
  v8[1] = v7;
  std::vector<unsigned __int64>::vector<unsigned __int64>(v9, (__int64)v8, v5);
  Spectre::Engine::BaseShaderExtension::AddBaseShaderPipelines(this, a2, v9);
  std::vector<std::pair<unsigned int,unsigned int>>::_Tidy((__int64)v9);
  std::_Tree_val<std::_Tree_simple_types<std::string>>::_Erase_head<std::allocator<std::_Tree_node<std::string,void *>>>(
    v7,
    (__int64)v7);
}
