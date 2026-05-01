/*
 * XREFs of ?SetMonitorManager@CVirtualDesktopSwitcherService@@UEAAXPEAUIImmersiveMonitorManager@@@Z @ 0x180137A90
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$com_ptr_t@UIImmersiveMonitorManager@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIImmersiveMonitorManager@@@Z @ 0x180137B24 (--4-$com_ptr_t@UIImmersiveMonitorManager@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIImmer.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801CF85C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CVirtualDesktopSwitcherService::SetMonitorManager(
        CVirtualDesktopSwitcherService *this,
        struct IImmersiveMonitorManager *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, _QWORD, SID *, GUID *); // rbp
  __int64 v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  wil::com_ptr_t<IImmersiveMonitorManager,wil::err_exception_policy>::operator=((char *)this + 32, a2);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    v4 = *(__int64 (__fastcall **)(__int64, _QWORD, SID *, GUID *))(*(_QWORD *)v3 + 72LL);
    v5 = *((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = 0LL;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v6 = v4(v3, 0LL, &SID_MultitaskingViewVisibilityService, &GUID_ac11cda3_1601_4ad7_a40e_fe2ced187307);
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1E,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopswitcherservice.cpp",
        (const char *)(unsigned int)v6,
        (_DWORD)this + 40);
  }
}
