/*
 * XREFs of ?FindOption@ShaderFamily@Engine@Spectre@@QEBA?AW4ShaderOption@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180060910
 * Callers:
 *     ?SetOption@ShaderFamily@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x180061184 (-SetOption@ShaderFamily@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 *     ?AddDepthOnlyShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@_N@Z @ 0x180099D68 (-AddDepthOnlyShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@_N@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FindOption@ShaderManager@Engine@Spectre@@QEBA?AW4ShaderOption@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18004F988 (-FindOption@ShaderManager@Engine@Spectre@@QEBA-AW4ShaderOption@23@AEBV-$basic_string@DU-$char_tr.c)
 *     ?GetShaderManager@ShaderFamily@Engine@Spectre@@QEBA?AV?$shared_ptr@VShaderManager@Engine@Spectre@@@std@@XZ @ 0x180060D1C (-GetShaderManager@ShaderFamily@Engine@Spectre@@QEBA-AV-$shared_ptr@VShaderManager@Engine@Spectre.c)
 */

__int64 __fastcall Spectre::Engine::ShaderFamily::FindOption(__int64 a1)
{
  __int64 *ShaderManager; // rax
  _QWORD *v3; // r9
  unsigned __int64 Option; // rbx
  __int64 v5; // rcx
  _BYTE v7[8]; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-10h]

  ShaderManager = (__int64 *)Spectre::Engine::ShaderFamily::GetShaderManager(a1, v7);
  Option = (unsigned int)Spectre::Engine::ShaderManager::FindOption(*ShaderManager, v3);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  v5 = *(_QWORD *)(a1 + 64);
  if ( !_bittest64(&v5, Option) )
    LODWORD(Option) = -1;
  return (unsigned int)Option;
}
