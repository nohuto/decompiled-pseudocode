/*
 * XREFs of ??1?$_Tree_temp_node_alloc@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1805674D4
 * Callers:
 *     _std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_HWND_____const_ExeData__void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_HWND_____const_ExeData__void________std::piecewise_construct_t_const_&_std::tuple_HWND_____const_&__std::tuple_unsigned_int_&_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_&_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_&____::_1_::dtor$1 @ 0x1805665C8 (_std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair_HWND_____const_ExeData__void_____.c)
 *     _std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_HWND_____const_ExeData__void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_HWND_____const_ExeData__void________std::piecewise_construct_t_const_&_std::tuple_HWND_____const_&__std::tuple_unsigned_int_&_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_&_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_&____::_1_::dtor$0 @ 0x1805665D4 (_std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair_HWND_____const_ExeDa_ea_1805665D4.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *>>>::~_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x70uLL);
}
