/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1805A237C
 * Callers:
 *     ??$_Try_emplace@AEBK$$V@?$map@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1805A2414 (--$_Try_emplace@AEBK$$V@-$map@KV-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U-$less@K@std@@V-$a.c)
 *     ??$_Try_emplace@AEBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@$$V@?$map@W4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_KU?$less@W4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@@std@@V?$allocator@U?$pair@$$CBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_K@std@@@8@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_K@std@@PEAX@std@@_N@1@AEBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@@Z @ 0x1806E0978 (--$_Try_emplace@AEBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@$$V@-$map@W4Backgrou.c)
 * Callees:
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x180093A9C (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD **a5)
{
  size_t size_of; // rax
  _DWORD *v8; // rax
  __int64 i; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  size_of = std::_Get_size_of_n<48>(1uLL);
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  a1[1] = v8;
  v8[8] = **a5;
  *((_QWORD *)v8 + 5) = 0LL;
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(a1[1] + i + 24) = 0;
  return a1;
}
