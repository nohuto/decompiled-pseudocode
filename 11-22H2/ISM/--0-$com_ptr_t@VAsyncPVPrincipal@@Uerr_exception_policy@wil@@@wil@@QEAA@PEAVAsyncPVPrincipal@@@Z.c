/*
 * XREFs of ??0?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVAsyncPVPrincipal@@@Z @ 0x180191860
 * Callers:
 *     ??$_Emplace_reallocate@PEAVAsyncPVPrincipal@@@?$vector@V?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV23@$$QEAPEAVAsyncPVPrincipal@@@Z @ 0x18018FDEC (--$_Emplace_reallocate@PEAVAsyncPVPrincipal@@@-$vector@V-$com_ptr_t@VAsyncPVPrincipal@@Uerr_exce.c)
 *     ?CreatePVPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@@Z @ 0x18019471C (-CreatePVPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncPVPrincipal@@Uerr_exceptio.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<AsyncPVPrincipal,wil::err_exception_policy>::com_ptr_t<AsyncPVPrincipal,wil::err_exception_policy>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD))
{
  *a1 = a2;
  if ( a2 )
    (**a2)(a2);
  return a1;
}
