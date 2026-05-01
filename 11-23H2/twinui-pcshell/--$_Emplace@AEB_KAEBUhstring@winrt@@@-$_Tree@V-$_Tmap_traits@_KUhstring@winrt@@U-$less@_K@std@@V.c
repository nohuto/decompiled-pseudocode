/*
 * XREFs of ??$_Emplace@AEB_KAEBUhstring@winrt@@@?$_Tree@V?$_Tmap_traits@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KUhstring@winrt@@@std@@PEAX@std@@_N@1@AEB_KAEBUhstring@winrt@@@Z @ 0x18070A28C
 * Callers:
 *     ?Insert@?$map_base@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@_KUhstring@3@@winrt@@QEAA_NAEB_KAEBUhstring@2@@Z @ 0x180713B5C (-Insert@-$map_base@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$less@_K@std@@V-$all.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1801F0194 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1803DCE94 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$_Find_lower_bound@_K@?$_Tree@V?$_Tmap_traits@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CB_KUhstring@winrt@@@std@@PEAX@std@@@1@AEB_K@Z @ 0x1806E0928 (--$_Find_lower_bound@_K@-$_Tree@V-$_Tmap_traits@_KUhstring@winrt@@U-$less@_K@std@@V-$allocator@U.c)
 *     ??$?0AEB_KAEBUhstring@winrt@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KUhstring@winrt@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KUhstring@winrt@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KUhstring@winrt@@@std@@PEAX@1@AEB_KAEBUhstring@winrt@@@Z @ 0x180708EB0 (--$-0AEB_KAEBUhstring@winrt@@@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KUhstrin.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KUhstring@winrt@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18070E614 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KUhstring@winrt@@@std@@PEAX@std@@@s.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned __int64,winrt::hstring,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,winrt::hstring>>,0>>::_Emplace<unsigned __int64 const &,winrt::hstring const &>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 lower; // rax
  _QWORD *v6; // r10
  winrt::impl **v7; // r11
  __int128 v8; // xmm6
  _QWORD *v9; // rax
  __int64 v10; // rbx
  _QWORD v12[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v13; // [rsp+40h] [rbp-38h] BYREF
  __int64 v14; // [rsp+50h] [rbp-28h]

  lower = std::_Tree<std::_Tmap_traits<unsigned __int64,winrt::hstring,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,winrt::hstring>>,0>>::_Find_lower_bound<unsigned __int64>(
            a1,
            (__int64)&v13,
            a3);
  v8 = *(_OWORD *)lower;
  v14 = *(_QWORD *)(lower + 16);
  if ( *(_BYTE *)(v14 + 25) || *v6 < *(_QWORD *)(v14 + 32) )
  {
    if ( a1[1] == 0x555555555555555LL )
      std::_Throw_tree_length_error();
    v9 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,winrt::hstring>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,winrt::hstring>,void *>>>(
           v12,
           (__int64)a1,
           *a1,
           v6,
           v7);
    v10 = v9[1];
    v9[1] = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,winrt::hstring>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,winrt::hstring>,void *>>>(v12);
    v13 = v8;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v13,
                      v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v14;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
