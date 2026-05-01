/*
 * XREFs of ??0?$_Hash@V?$_Uset_traits@Uguid@winrt@@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@Uguid@winrt@@@4@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@1@AEBV?$allocator@Uguid@winrt@@@1@@Z @ 0x18001D110
 * Callers:
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x18001B964 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 *     ??0?$unordered_set@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@V?$allocator@Uguid@winrt@@@4@@std@@QEAA@XZ @ 0x18001D0E0 (--0-$unordered_set@Uguid@winrt@@U-$hash@Uguid@winrt@@@std@@U-$equal_to@Uguid@winrt@@@4@V-$alloca.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@Uguid@winrt@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@Uguid@winrt@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18001D188 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_s.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>::_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>(
        __int64 a1,
        _DWORD *a2)
{
  _QWORD *v3; // rax

  *(_DWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v3 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(32LL);
  *v3 = v3;
  v3[1] = v3;
  *(_QWORD *)(a1 + 8) = v3;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<winrt::guid>>,std::_Iterator_base0>>>::_Assign_grow(
    a1 + 24,
    16LL,
    *(_QWORD *)(a1 + 8));
  return a1;
}
