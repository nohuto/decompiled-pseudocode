/*
 * XREFs of ?_Buy_raw@?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAX_K@Z @ 0x1804A2B98
 * Callers:
 *     ?_Clear_and_reserve_geometric@?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAX_K@Z @ 0x1804ABCC0 (-_Clear_and_reserve_geometric@-$vector@V-$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@.c)
 *     ??0?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@V?$initializer_list@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@1@AEBV?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@1@@Z @ 0x18054430C (--0-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$co.c)
 *     ??0?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1805443B8 (--0-$vector@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com.c)
 *     ??0?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@V?$initializer_list@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@1@AEBV?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@1@@Z @ 0x180544440 (--0-$vector@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V-$all_ea_180544440.c)
 *     ?GetViewsPerMonitor@CVirtualDesktopManager@@AEAAJAEAV?$unordered_map@PEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U?$hash@PEAUHMONITOR__@@@3@U?$equal_to@PEAUHMONITOR__@@@3@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@3@@std@@@Z @ 0x180545CD8 (-GetViewsPerMonitor@CVirtualDesktopManager@@AEAAJAEAV-$unordered_map@PEAUHMONITOR__@@V-$vector@V.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18009B6E0 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 */

char *__fastcall std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_exception_policy>>::_Buy_raw(
        _QWORD *a1,
        unsigned __int64 a2)
{
  size_t size_of; // rax
  char *v5; // rax
  char *result; // rax

  size_of = std::_Get_size_of_n<8>(a2);
  v5 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = v5;
  a1[1] = v5;
  result = &v5[8 * a2];
  a1[2] = result;
  return result;
}
