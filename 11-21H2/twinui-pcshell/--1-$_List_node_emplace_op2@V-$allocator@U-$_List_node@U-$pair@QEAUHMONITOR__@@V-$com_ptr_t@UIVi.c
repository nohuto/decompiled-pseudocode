/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180544690
 * Callers:
 *     ??$_Try_emplace@AEBQEAUHMONITOR__@@$$V@?$_Hash@V?$_Umap_traits@PEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUHMONITOR__@@U?$hash@PEAUHMONITOR__@@@std@@U?$equal_to@PEAUHMONITOR__@@@3@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBQEAUHMONITOR__@@@Z @ 0x180543C5C (--$_Try_emplace@AEBQEAUHMONITOR__@@$$V@-$_Hash@V-$_Umap_traits@PEAUHMONITOR__@@V-$com_ptr_t@UIVi.c)
 *     _std::_Hash_std::_Umap_traits_HMONITOR_____wil::com_ptr_t_IVirtualDesktop_wil::err_returncode_policy__std::_Uhash_compare_HMONITOR_____std::hash_HMONITOR______std::equal_to_HMONITOR________std::allocator_std::pair_HMONITOR_____const_wil::com_ptr_t_IVirtualDesktop_wil::err_returncode_policy______0___::_Try_emplace_HMONITOR_____const_&__::_1_::dtor$0 @ 0x180543D70 (_std--_Hash_std--_Umap_traits_HMONITOR_____wil--com_ptr_t_IVirtualDesktop_wil--err__ea_180543D70.c)
 *     ??$emplace@U?$pair@QEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@?$_Hash@V?$_Umap_traits@PEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUHMONITOR__@@U?$hash@PEAUHMONITOR__@@@std@@U?$equal_to@PEAUHMONITOR__@@@3@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@QEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@1@@Z @ 0x180543EBC (--$emplace@U-$pair@QEAUHMONITOR__@@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@w.c)
 *     _std::_Hash_std::_Umap_traits_HMONITOR_____wil::com_ptr_t_IVirtualDesktop_wil::err_returncode_policy__std::_Uhash_compare_HMONITOR_____std::hash_HMONITOR______std::equal_to_HMONITOR________std::allocator_std::pair_HMONITOR_____const_wil::com_ptr_t_IVirtualDesktop_wil::err_returncode_policy______0___::emplace_std::pair_HMONITOR_____const_wil::com_ptr_t_IVirtualDesktop_wil::err_returncode_policy______::_1_::dtor$0 @ 0x180543FD8 (_std--_Hash_std--_Umap_traits_HMONITOR_____wil--com_ptr_t_IVirtualDesktop_wil--err__ea_180543FD8.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<HMONITOR__ * const,wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<HMONITOR__ * const,wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(v2 + 24));
    v3 = *(void **)(a1 + 8);
    if ( v3 )
      std::_Deallocate<16,0>(v3, 0x20uLL);
  }
}
