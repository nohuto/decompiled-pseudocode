/*
 * XREFs of ??0SuppressViewTransition@@QEAA@PEAUHWND__@@AEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801EA4B4
 * Callers:
 *     ??$make_unique@VSuppressViewTransition@@AEAPEAUHWND__@@AEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@$0A@@std@@YA?AV?$unique_ptr@VSuppressViewTransition@@U?$default_delete@VSuppressViewTransition@@@std@@@0@AEAPEAUHWND__@@AEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801EA308 (--$make_unique@VSuppressViewTransition@@AEAPEAUHWND__@@AEAV-$com_ptr_t@UIApplicationView@@Uerr_e.c)
 * Callees:
 *     ??0?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@@Z @ 0x18004FE34 (--0-$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SuppressViewTransition::SuppressViewTransition(__int64 a1, __int64 a2, __int64 *a3)
{
  int pvAttribute; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)a1 = a2;
  wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>::com_ptr_t<IApplicationView,wil::err_returncode_policy>(
    (_QWORD *)(a1 + 8),
    *a3);
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 8) + 96LL))(*(_QWORD *)(a1 + 8), 1LL, 1LL);
  pvAttribute = 1;
  DwmSetWindowAttribute(*(HWND *)a1, 3u, &pvAttribute, 4u);
  return a1;
}
