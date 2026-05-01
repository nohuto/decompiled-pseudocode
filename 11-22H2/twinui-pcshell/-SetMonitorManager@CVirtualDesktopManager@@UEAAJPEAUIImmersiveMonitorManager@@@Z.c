/*
 * XREFs of ?SetMonitorManager@CVirtualDesktopManager@@UEAAJPEAUIImmersiveMonitorManager@@@Z @ 0x180137B90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UIImmersiveMonitorManager@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIImmersiveMonitorManager@@@Z @ 0x180137B24 (--4-$com_ptr_t@UIImmersiveMonitorManager@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIImmer.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::SetMonitorManager(
        CVirtualDesktopManager *this,
        struct IImmersiveMonitorManager *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, _QWORD, SID *, GUID *, char *); // rbp
  __int64 v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (__int64 *)((char *)this + 160);
  wil::com_ptr_t<IImmersiveMonitorManager,wil::err_exception_policy>::operator=((__int64 *)this + 20, (__int64)a2);
  v4 = *v3;
  if ( *v3 )
  {
    v5 = *(__int64 (__fastcall **)(__int64, _QWORD, SID *, GUID *, char *))(*(_QWORD *)v4 + 72LL);
    v6 = *((_QWORD *)this + 25);
    *((_QWORD *)this + 25) = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v7 = v5(
           v4,
           0LL,
           &SID_MultitaskingViewVisibilityService,
           &GUID_ac11cda3_1601_4ad7_a40e_fe2ced187307,
           (char *)this + 200);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x106,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v7);
  }
  return 0LL;
}
