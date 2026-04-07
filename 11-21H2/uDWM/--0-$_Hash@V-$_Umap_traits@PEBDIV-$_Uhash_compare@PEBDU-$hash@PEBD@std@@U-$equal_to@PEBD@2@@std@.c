/*
 * XREFs of ??0?$_Hash@V?$_Umap_traits@PEBDIV?$_Uhash_compare@PEBDU?$hash@PEBD@std@@U?$equal_to@PEBD@2@@std@@V?$allocator@U?$pair@QEBDI@std@@@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEBDU?$hash@PEBD@std@@U?$equal_to@PEBD@2@@1@AEBV?$allocator@U?$pair@QEBDI@std@@@1@@Z @ 0x1800430EC
 * Callers:
 *     ??0?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAA@QEAVJSONOutputArchive@1@@Z @ 0x180042F00 (--0-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAA@QEAVJSONOutputArchive@1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180037FCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBDI@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBDI@std@@@std@@@std@@@2@@Z @ 0x180043298 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<char const *,unsigned int,std::_Uhash_compare<char const *,std::hash<char const *>,std::equal_to<char const *>>,std::allocator<std::pair<char const * const,unsigned int>>,0>>::_Hash<std::_Umap_traits<char const *,unsigned int,std::_Uhash_compare<char const *,std::hash<char const *>,std::equal_to<char const *>>,std::allocator<std::pair<char const * const,unsigned int>>,0>>(
        __int64 a1,
        _DWORD *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rdx

  *(_DWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v3 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v3 = v3;
  v3[1] = v3;
  *(_QWORD *)(a1 + 8) = v3;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<char const * const,unsigned int>>>>>>::_Assign_grow(
    a1 + 24,
    v4,
    *(_QWORD *)(a1 + 8));
  return a1;
}
