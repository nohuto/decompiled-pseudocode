/*
 * XREFs of ??$make_unique@VSuppressViewTransition@@AEAPEAUHWND__@@AEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@$0A@@std@@YA?AV?$unique_ptr@VSuppressViewTransition@@U?$default_delete@VSuppressViewTransition@@@std@@@0@AEAPEAUHWND__@@AEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801EA308
 * Callers:
 *     _lambda_b057d2eecf04af11f3f014dd266c7d19_::operator() @ 0x1801EA6B8 (_lambda_b057d2eecf04af11f3f014dd266c7d19_--operator().c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??0SuppressViewTransition@@QEAA@PEAUHWND__@@AEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801EA4B4 (--0SuppressViewTransition@@QEAA@PEAUHWND__@@AEBV-$com_ptr_t@UIApplicationView@@Uerr_exception_po.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_unique<SuppressViewTransition,HWND__ * &,wil::com_ptr_t<IApplicationView,wil::err_exception_policy> &,0>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  void *v7; // [rsp+30h] [rbp+8h]

  v7 = operator new(0x10uLL);
  *a1 = SuppressViewTransition::SuppressViewTransition(v7, *a2, a3);
  return a1;
}
