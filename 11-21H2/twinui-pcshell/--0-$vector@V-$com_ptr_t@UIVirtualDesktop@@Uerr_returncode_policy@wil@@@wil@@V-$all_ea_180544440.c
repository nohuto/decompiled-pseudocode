/*
 * XREFs of ??0?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@V?$initializer_list@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@1@AEBV?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@1@@Z @ 0x180544440
 * Callers:
 *     ?PlaceOrphanedViewsInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x1805472F0 (-PlaceOrphanedViewsInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180547810 (-RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?TransitionViewsInMonitor@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@AEBV?$unordered_map@PEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U?$hash@PEAUHMONITOR__@@@3@U?$equal_to@PEAUHMONITOR__@@@3@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@3@@std@@PEAUIVirtualDesktop@@22PEAPEAU5@@Z @ 0x18054BC7C (-TransitionViewsInMonitor@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@AEBV-$unordered_map@PEAUH.c)
 * Callees:
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIVirtualDesktop@@@Z @ 0x18009D1E4 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIVirtualDesktop@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18016978C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ?_Buy_raw@?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAX_K@Z @ 0x1804A2B98 (-_Buy_raw@-$vector@V-$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@V-$allocator@.c)
 */

__int64 **__fastcall std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>(
        __int64 **a1,
        __int64 **a2)
{
  __int64 *v2; // rbp
  __int64 *v3; // rsi
  unsigned __int64 v5; // rdx
  __int64 *v6; // rbx

  v2 = a2[1];
  v3 = *a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  v5 = v2 - v3;
  a1[2] = 0LL;
  if ( v5 )
  {
    if ( v5 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_exception_policy>>::_Buy_raw(a1, v5);
    v6 = *a1;
    while ( v3 != v2 )
      wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
        v6++,
        *v3++);
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>(v6, v6);
    a1[1] = v6;
  }
  return a1;
}
