/*
 * XREFs of ??0?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1805443B8
 * Callers:
 *     ?SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z @ 0x18054ACB0 (-SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIVirtualDesktop@@@Z @ 0x18009D1E4 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIVirtualDesktop@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18016978C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ?_Buy_raw@?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAX_K@Z @ 0x1804A2B98 (-_Buy_raw@-$vector@V-$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@V-$allocator@.c)
 */

__int64 **__fastcall std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>(
        __int64 **a1,
        __int64 **a2)
{
  __int64 *v3; // rsi
  __int64 *v4; // rbp
  __int64 *v5; // rdi

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v3 = *a2;
  v4 = a2[1];
  if ( *a2 != v4 )
  {
    std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_exception_policy>>::_Buy_raw(a1, v4 - v3);
    v5 = *a1;
    do
      wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
        v5++,
        *v3++);
    while ( v3 != v4 );
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>(v5, v5);
    a1[1] = v5;
  }
  return a1;
}
