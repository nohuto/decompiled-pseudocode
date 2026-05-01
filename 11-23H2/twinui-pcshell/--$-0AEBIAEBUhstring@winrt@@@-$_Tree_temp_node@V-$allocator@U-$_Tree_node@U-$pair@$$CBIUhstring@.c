/*
 * XREFs of ??$?0AEBIAEBUhstring@winrt@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@1@AEBIAEBUhstring@winrt@@@Z @ 0x180708C98
 * Callers:
 *     ??$_Emplace@AEBIAEBUhstring@winrt@@@?$_Tree@V?$_Tmap_traits@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@std@@_N@1@AEBIAEBUhstring@winrt@@@Z @ 0x18070A0D0 (--$_Emplace@AEBIAEBUhstring@winrt@@@-$_Tree@V-$_Tmap_traits@IUhstring@winrt@@U-$less@I@std@@V-$a.c)
 * Callees:
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x180093A9C (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,winrt::hstring>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,winrt::hstring>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        winrt::impl **a5)
{
  size_t size_of; // rax
  _DWORD *v9; // rbx
  struct winrt::impl::hstring_header *v10; // rdx
  unsigned int v11; // r8d
  __int64 i; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  size_of = std::_Get_size_of_n<48>(1uLL);
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  a1[1] = v9;
  v9[8] = *a4;
  *((_QWORD *)v9 + 5) = winrt::impl::duplicate_hstring(*a5, v10, v11);
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(a1[1] + i + 24) = 0;
  return a1;
}
