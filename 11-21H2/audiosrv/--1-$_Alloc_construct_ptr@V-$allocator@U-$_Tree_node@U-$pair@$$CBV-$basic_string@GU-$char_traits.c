/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180103B54
 * Callers:
 *     _std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__ENDPOINT_REF_DATA__void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__ENDPOINT_REF_DATA__void________std::piecewise_construct_t_const_&_std::tuple_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____&&__std::tuple_____::_1_::dtor$1 @ 0x180071B40 (_std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair_std--basic_string_unsigned_short_.c)
 *     _std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair__GUID_const__HmdInfo__void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair__GUID_const__HmdInfo__void________std::piecewise_construct_t_const_&_std::tuple__GUID_const_&__std::tuple_____::_1_::dtor$1 @ 0x18012C100 (_std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair__GUID_const__HmdInfo__void_______.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::wstring const,ENDPOINT_REF_DATA>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::wstring const,ENDPOINT_REF_DATA>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x48uLL);
}
