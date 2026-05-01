/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180543C0C
 * Callers:
 *     ??1?$list@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180544774 (--1-$list@U-$pair@QEAUHMONITOR__@@V-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_returncode_poli.c)
 *     ??1?$unordered_map@PEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U?$hash@PEAUHMONITOR__@@@3@U?$equal_to@PEAUHMONITOR__@@@3@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@3@@std@@QEAA@XZ @ 0x1805447B0 (--1-$unordered_map@PEAUHMONITOR__@@V-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_returncode_pol.c)
 *     ?TransitionToGlobalMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18054B414 (-TransitionToGlobalMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@WRL@.c)
 *     ?TransitionToPerMonitorMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18054B82C (-TransitionToPerMonitorMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x180232220 (-_Tidy@-$vector@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocat.c)
 */

void __fastcall std::_List_node<std::pair<HMONITOR__ * const,std::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<HMONITOR__ * const,std::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>>,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx

  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Tidy((__int64)(v2 + 3));
      std::_Deallocate<16,0>(v2, 0x30uLL);
      v2 = v3;
    }
    while ( v3 );
  }
}
