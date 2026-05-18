/*
 * XREFs of ??$?0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@PEAX@1@$$QEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@$$QEAUShaderInfo@ShaderManager@Engine@Spectre@@@Z @ 0x18004CF74
 * Callers:
 *     ??$_Emplace@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@$$QEAUShaderInfo@ShaderManager@Engine@Spectre@@@Z @ 0x18004D758 (--$_Emplace@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UShaderInfo@ShaderMana.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::ShaderManager::ShaderInfo>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::ShaderManager::ShaderInfo>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _QWORD *v8; // rax
  __int64 i; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  v8 = operator new(0x68uLL);
  a1[1] = v8;
  v8[4] = 0LL;
  v8[6] = 0LL;
  v8[7] = 0LL;
  *((_OWORD *)v8 + 2) = *(_OWORD *)a4;
  *((_OWORD *)v8 + 3) = *(_OWORD *)(a4 + 16);
  *(_QWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)(a4 + 24) = 15LL;
  *(_BYTE *)a4 = 0;
  v8[8] = 0LL;
  v8[9] = 0LL;
  v8[8] = *(_QWORD *)a5;
  v8[9] = *(_QWORD *)(a5 + 8);
  *(_QWORD *)a5 = 0LL;
  *(_QWORD *)(a5 + 8) = 0LL;
  *((_DWORD *)v8 + 20) = *(_DWORD *)(a5 + 16);
  v8[11] = 0LL;
  v8[12] = 0LL;
  v8[11] = *(_QWORD *)(a5 + 24);
  v8[12] = *(_QWORD *)(a5 + 32);
  *(_QWORD *)(a5 + 24) = 0LL;
  *(_QWORD *)(a5 + 32) = 0LL;
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(i + a1[1] + 24) = 0;
  return a1;
}
