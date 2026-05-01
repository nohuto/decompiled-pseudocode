/*
 * XREFs of ?MaximizeWindow@CShellSnapComponent@@UEAAJPEAUHWND__@@@Z @ 0x1805941E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CShellSnapComponent::MaximizeWindow(CShellSnapComponent *this, HWND a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, HWND))(**((_QWORD **)this + 34) + 32LL))(*((_QWORD *)this + 34), a2);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3BC,
    (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
