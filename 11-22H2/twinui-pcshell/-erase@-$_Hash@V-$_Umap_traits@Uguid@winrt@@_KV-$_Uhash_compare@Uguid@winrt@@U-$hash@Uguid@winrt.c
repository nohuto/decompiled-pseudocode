/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@QEAA_KAEBUguid@winrt@@@Z @ 0x18003295C
 * Callers:
 *     ?RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEBV?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@8@@Z @ 0x1800327D4 (-RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV-.c)
 * Callees:
 *     ??$_Find_last@Uguid@winrt@@@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUguid@winrt@@_K@std@@PEAX@std@@@1@AEBUguid@winrt@@_K@Z @ 0x180032B10 (--$_Find_last@Uguid@winrt@@@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@winrt.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::erase(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rbx
  unsigned __int64 i; // rcx
  __int64 v5; // rax
  _QWORD *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 0x10; ++i )
  {
    v5 = *(unsigned __int8 *)(i + a2);
    v3 = 0x100000001B3LL * (v5 ^ v3);
  }
  v6 = *(_QWORD **)(std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Find_last<winrt::guid>(
                      a1,
                      v12,
                      a2,
                      v3)
                  + 8);
  if ( !v6 )
    return 0LL;
  v7 = a1[3];
  v8 = 2 * (v3 & a1[6]);
  if ( *(_QWORD **)(v7 + 16 * (v3 & a1[6]) + 8) == v6 )
  {
    if ( *(_QWORD **)(v7 + 16 * (v3 & a1[6])) == v6 )
    {
      v9 = a1[1];
      *(_QWORD *)(v7 + 16 * (v3 & a1[6])) = v9;
    }
    else
    {
      v9 = v6[1];
    }
    *(_QWORD *)(v7 + 8 * v8 + 8) = v9;
  }
  else if ( *(_QWORD **)(v7 + 16 * (v3 & a1[6])) == v6 )
  {
    *(_QWORD *)(v7 + 16 * (v3 & a1[6])) = *v6;
  }
  v10 = *v6;
  --a1[2];
  *(_QWORD *)v6[1] = v10;
  *(_QWORD *)(v10 + 8) = v6[1];
  std::_Deallocate<16,0>(v6, 40LL);
  return 1LL;
}
