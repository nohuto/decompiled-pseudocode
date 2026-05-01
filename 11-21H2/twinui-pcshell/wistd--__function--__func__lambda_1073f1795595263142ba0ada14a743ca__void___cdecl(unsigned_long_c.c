/*
 * XREFs of wistd::__function::__func__lambda_1073f1795595263142ba0ada14a743ca__void___cdecl(unsigned_long_const_&)_::operator() @ 0x18037CDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_e2e25d0fd8ac3b6efa773a0ca67a125e___ @ 0x18037C1B8 (Windows--Internal--ComTaskPool--QueueTask__lambda_e2e25d0fd8ac3b6efa773a0ca67a125e___.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wistd::__function::__func__lambda_1073f1795595263142ba0ada14a743ca__void___cdecl_unsigned_long_const____::operator()(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a2 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    v5 = v2;
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v3 = Windows::Internal::ComTaskPool::QueueTask__lambda_e2e25d0fd8ac3b6efa773a0ca67a125e___(v2, &v5);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xDE,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v5);
  }
}
