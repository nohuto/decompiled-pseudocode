/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1805654C4
 * Callers:
 *     _std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::shared_ptr_UwpAppPackageInfo____void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::shared_ptr_UwpAppPackageInfo____void________std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_&_std::shared_ptr_UwpAppPackageInfo__&__::_1_::dtor$1 @ 0x180564E66 (_std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair_std--basic_string_un_ea_180564E66.c)
 *     _std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::shared_ptr_UwpAppPackageInfo____void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::shared_ptr_UwpAppPackageInfo____void________std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_&_std::shared_ptr_UwpAppPackageInfo__&__::_1_::dtor$0 @ 0x180564E72 (_std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair_std--basic_string_un_ea_180564E72.c)
 *     _std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::shared_ptr_Win32AppInfo____void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::shared_ptr_Win32AppInfo____void________std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____&_std::shared_ptr_Win32AppInfo____::_1_::dtor$1 @ 0x180566517 (_std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair_std--basic_string_un_ea_180566517.c)
 *     _std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::shared_ptr_Win32AppInfo____void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::shared_ptr_Win32AppInfo____void________std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____&_std::shared_ptr_Win32AppInfo____::_1_::dtor$0 @ 0x180566523 (_std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair_std--basic_string_un_ea_180566523.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x50uLL);
}
