/*
 * XREFs of ??$emplace_back@AEAPEAUIApplicationView@@@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@AEAPEAUIApplicationView@@@Z @ 0x1804EF294
 * Callers:
 *     ?EnterFullScreenForView@KioskPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1804F0080 (-EnterFullScreenForView@KioskPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?HandleView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1804F0A50 (-HandleView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V-$fun.c)
 * Callees:
 *     ??0?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@@Z @ 0x18004FE34 (--0-$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@@.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::emplace_back<IApplicationView * &>(
        __int64 a1,
        __int64 *a2)
{
  __int64 *result; // rax

  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a1 + 16) )
    return std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Emplace_reallocate<IApplicationView * &>(
             (__int64 **)a1,
             *(__int64 **)(a1 + 8),
             a2);
  wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>::com_ptr_t<IApplicationView,wil::err_returncode_policy>(
    *(_QWORD **)(a1 + 8),
    *a2);
  result = *(__int64 **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 1;
  return result;
}
