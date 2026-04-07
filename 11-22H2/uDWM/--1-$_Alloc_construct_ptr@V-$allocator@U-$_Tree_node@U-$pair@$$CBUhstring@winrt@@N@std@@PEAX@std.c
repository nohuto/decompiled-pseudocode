/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800FCBE0
 * Callers:
 *     _std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_winrt::hstring_const__double__void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_winrt::hstring_const__double__void________std::pair_winrt::hstring_const__double__const_&__::_1_::dtor$0 @ 0x1800FBAAC (_std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair_winrt--hstring_const__double__voi.c)
 *     _std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_winrt::hstring_const__double__void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_winrt::hstring_const__double__void________winrt::hstring_const_&_double_const_&__::_1_::dtor$0 @ 0x1800FBB6C (_std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair_winrt--hstring_const_ea_1800FBB6C.c)
 *     _std::_Tree_temp_node_alloc_std::allocator_std::_Tree_node_std::pair_winrt::hstring_const__double__void_______::_Tree_temp_node_alloc_std::allocator_std::_Tree_node_std::pair_winrt::hstring_const__double__void________::_1_::dtor$0 @ 0x1800FC922 (_std--_Tree_temp_node_alloc_std--allocator_std--_Tree_node_std--pair_winrt--hstring_const__doubl.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800558D4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,double>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,double>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return std::_Deallocate<16,0>(v1, 0x30uLL);
  return result;
}
