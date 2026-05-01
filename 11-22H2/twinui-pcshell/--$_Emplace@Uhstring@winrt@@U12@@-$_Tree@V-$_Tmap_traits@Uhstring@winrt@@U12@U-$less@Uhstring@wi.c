/*
 * XREFs of ??$_Emplace@Uhstring@winrt@@U12@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$00@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@_N@1@$$QEAUhstring@winrt@@0@Z @ 0x18072B14C
 * Callers:
 *     ?to_multimap@implementation@Shell@Internal@Windows@winrt@@YA@AEBUWwwFormUrlDecoder@Foundation@45@@Z @ 0x18072BEEC (-to_multimap@implementation@Shell@Internal@Windows@winrt@@YA@AEBUWwwFormUrlDecoder@Foundation@45.c)
 * Callees:
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x180093A9C (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1801F0194 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1803DCE94 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1806C74A8 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@.c)
 *     ??$_Find_upper_bound@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$00@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@1@AEBUhstring@winrt@@@Z @ 0x18072B300 (--$_Find_upper_bound@Uhstring@winrt@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@U12@U-$less@Uhstri.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Tree<std::_Tmap_traits<winrt::hstring,winrt::hstring,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,1>>::_Emplace<winrt::hstring,winrt::hstring>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v8; // rdi
  size_t size_of; // rax
  _QWORD *v10; // r15
  __int64 v11; // rax
  __int64 v12; // rax
  __int128 v13; // xmm6
  __int128 v15; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v16[32]; // [rsp+30h] [rbp-48h] BYREF

  v8 = *a1;
  *(_QWORD *)&v15 = a1;
  size_of = std::_Get_size_of_n<48>(1uLL);
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *((_QWORD *)&v15 + 1) = v10;
  v11 = *a3;
  *a3 = 0LL;
  v10[4] = v11;
  v12 = *a4;
  *a4 = 0LL;
  v10[5] = v12;
  *v10 = v8;
  v10[1] = v8;
  v10[2] = v8;
  *((_WORD *)v10 + 12) = 0;
  v13 = *(_OWORD *)std::_Tree<std::_Tmap_traits<winrt::hstring,winrt::hstring,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,1>>::_Find_upper_bound<winrt::hstring>(
                     a1,
                     v16);
  if ( a1[1] == 0x555555555555555LL )
    std::_Throw_tree_length_error();
  *((_QWORD *)&v15 + 1) = 0LL;
  std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,winrt::hstring>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,winrt::hstring>,void *>>>((__int64)&v15);
  v15 = v13;
  *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Insert_node(
                    (__int64)a1,
                    (__int64)&v15,
                    (__int64)v10);
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
