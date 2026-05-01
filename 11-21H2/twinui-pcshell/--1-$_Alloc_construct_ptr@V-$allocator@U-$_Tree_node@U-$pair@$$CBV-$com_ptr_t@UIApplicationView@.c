/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1803C8798
 * Callers:
 *     _std::map_wil::com_ptr_t_IApplicationView_wil::err_exception_policy__Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue_Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::ApplicationViewComparator_std::allocator_std::pair_wil::com_ptr_t_IApplicationView_wil::err_exception_policy__const__Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue_____::_Try_emplace_wil::com_ptr_t_IApplicationView_wil::err_exception_policy____::_1_::dtor$6 @ 0x18021EFAD (_std--map_wil--com_ptr_t_IApplicationView_wil--err_exception_policy__Windows--Internal--Shell--T.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_int_KeyboardHosting::ViewState_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__KeyboardHosting::ViewState____0___::_Try_emplace_unsigned_int_const_&__::_1_::dtor$5 @ 0x180480154 (_std--_Hash_std--_Umap_traits_unsigned_int_KeyboardHosting--ViewState_std--_Uhash_compare_unsign.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_int_KeyboardHosting::ViewState_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__KeyboardHosting::ViewState____0___::_Try_emplace_unsigned_int_const_&__::_1_::dtor$0 @ 0x180480160 (_std--_Hash_std--_Umap_traits_unsigned_int_KeyboardHosting--ViewState_std--_Uhash_c_ea_180480160.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x58uLL);
}
