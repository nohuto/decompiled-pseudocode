/*
 * XREFs of ??1?$list@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180544774
 * Callers:
 *     _std::_Hash_std::_Umap_traits_HMONITOR_____std::vector_wil::com_ptr_t_IApplicationView_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IApplicationView_wil::err_returncode_policy______std::_Uhash_compare_HMONITOR_____std::hash_HMONITOR______std::equal_to_HMONITOR________std::allocator_std::pair_HMONITOR_____const_std::vector_wil::com_ptr_t_IApplicationView_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IApplicationView_wil::err_returncode_policy__________0___::_Hash_std::_Umap_traits_HMONITOR_____std::vector_wil::com_ptr_t_IApplicationView_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IApplicationView_wil::err_returncode_policy______std::_Uhash_compare_HMONITOR_____std::hash_HMONITOR______std::equal_to_HMONITOR________std::allocator_std::pair_HMONITOR_____const_std::vector_wil::com_ptr_t_IApplicationView_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IApplicationView_wil::err_returncode_policy__________0____::_1_::dtor$0 @ 0x180544279 (_std--_Hash_std--_Umap_traits_HMONITOR_____std--vector_wil--com_ptr_t_IApplicationV_ea_180544279.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180543C0C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAUHMONITOR__@@V-$vector@V-$com_ptr_t@UIAp.c)
 */

void __fastcall std::list<std::pair<HMONITOR__ * const,std::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>>>::~list<std::pair<HMONITOR__ * const,std::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>>>(
        void **a1)
{
  std::_List_node<std::pair<HMONITOR__ * const,std::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<HMONITOR__ * const,std::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, 0x30uLL);
}
