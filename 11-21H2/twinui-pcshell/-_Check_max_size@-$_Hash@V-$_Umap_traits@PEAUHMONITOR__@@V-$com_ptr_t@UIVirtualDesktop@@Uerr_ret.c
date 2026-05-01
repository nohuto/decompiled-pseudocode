/*
 * XREFs of ?_Check_max_size@?$_Hash@V?$_Umap_traits@PEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUHMONITOR__@@U?$hash@PEAUHMONITOR__@@@std@@U?$equal_to@PEAUHMONITOR__@@@3@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEBAXXZ @ 0x18054C6FC
 * Callers:
 *     ??$_Try_emplace@AEBQEAUHMONITOR__@@$$V@?$_Hash@V?$_Umap_traits@PEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUHMONITOR__@@U?$hash@PEAUHMONITOR__@@@std@@U?$equal_to@PEAUHMONITOR__@@@3@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBQEAUHMONITOR__@@@Z @ 0x180543C5C (--$_Try_emplace@AEBQEAUHMONITOR__@@$$V@-$_Hash@V-$_Umap_traits@PEAUHMONITOR__@@V-$com_ptr_t@UIVi.c)
 *     ??$emplace@U?$pair@QEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@?$_Hash@V?$_Umap_traits@PEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUHMONITOR__@@U?$hash@PEAUHMONITOR__@@@std@@U?$equal_to@PEAUHMONITOR__@@@3@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@QEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@1@@Z @ 0x180543EBC (--$emplace@U-$pair@QEAUHMONITOR__@@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@w.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<HMONITOR__ *,wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>,std::_Uhash_compare<HMONITOR__ *,std::hash<HMONITOR__ *>,std::equal_to<HMONITOR__ *>>,std::allocator<std::pair<HMONITOR__ * const,wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>,0>>::_Check_max_size(
        __int64 a1)
{
  __int64 result; // rax

  result = 0x7FFFFFFFFFFFFFFLL;
  if ( *(_QWORD *)(a1 + 16) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("unordered_map/set too long");
  return result;
}
