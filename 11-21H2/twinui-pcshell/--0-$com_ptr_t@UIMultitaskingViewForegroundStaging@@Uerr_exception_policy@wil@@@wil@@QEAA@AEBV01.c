/*
 * XREFs of ??0?$com_ptr_t@UIMultitaskingViewForegroundStaging@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1801EA478
 * Callers:
 *     _lambda_b057d2eecf04af11f3f014dd266c7d19_::operator() @ 0x1801EA6B8 (_lambda_b057d2eecf04af11f3f014dd266c7d19_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::com_ptr_t<IMultitaskingViewForegroundStaging,wil::err_exception_policy>::com_ptr_t<IMultitaskingViewForegroundStaging,wil::err_exception_policy>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rcx

  v3 = *a2;
  *a1 = *a2;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a1;
}
