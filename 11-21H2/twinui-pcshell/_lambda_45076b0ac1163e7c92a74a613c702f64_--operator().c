/*
 * XREFs of _lambda_45076b0ac1163e7c92a74a613c702f64_::operator() @ 0x1801B5668
 * Callers:
 *     CVirtualDesktopManager::_OnViewAdded__lambda_45076b0ac1163e7c92a74a613c702f64___ @ 0x1801B507C (CVirtualDesktopManager--_OnViewAdded__lambda_45076b0ac1163e7c92a74a613c702f64___.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_45076b0ac1163e7c92a74a613c702f64_::operator()(_QWORD **a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*a1)[14] + 112LL))((*a1)[14], *a1[1], 0LL);
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x456,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
