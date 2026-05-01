/*
 * XREFs of ?SetIsPerMonitor@VirtualDesktopController@@UEAAJE@Z @ 0x18048DFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualDesktopController::SetIsPerMonitor(VirtualDesktopController *this, char a2)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 10);
  if ( !v2 )
  {
    v3 = -2147019873;
    v4 = 374LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, bool))(*(_QWORD *)v2 + 160LL))(v2, a2 != 0);
  if ( v3 < 0 )
  {
    v4 = 375LL;
    goto LABEL_3;
  }
  return 0LL;
}
