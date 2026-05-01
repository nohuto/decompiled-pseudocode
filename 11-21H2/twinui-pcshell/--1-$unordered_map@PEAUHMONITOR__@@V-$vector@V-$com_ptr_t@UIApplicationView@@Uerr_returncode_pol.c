/*
 * XREFs of ??1?$unordered_map@PEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U?$hash@PEAUHMONITOR__@@@3@U?$equal_to@PEAUHMONITOR__@@@3@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@3@@std@@QEAA@XZ @ 0x1805447B0
 * Callers:
 *     _CVirtualDesktopManager::TransitionToGlobalMode_::_1_::dtor$0 @ 0x18054B7AD (_CVirtualDesktopManager--TransitionToGlobalMode_--_1_--dtor$0.c)
 *     _CVirtualDesktopManager::TransitionToPerMonitorMode_::_1_::dtor$0 @ 0x18054BBF1 (_CVirtualDesktopManager--TransitionToPerMonitorMode_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180543C0C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAUHMONITOR__@@V-$vector@V-$com_ptr_t@UIAp.c)
 */

void __fastcall std::unordered_map<HMONITOR__ *,std::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>>::~unordered_map<HMONITOR__ *,std::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  std::_Deallocate<16,0>(*(void **)(a1 + 24), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  std::_List_node<std::pair<HMONITOR__ * const,std::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<HMONITOR__ * const,std::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>>,void *>>>(
    v2,
    *(_QWORD ***)(a1 + 8));
  std::_Deallocate<16,0>(*(void **)(a1 + 8), 0x30uLL);
}
