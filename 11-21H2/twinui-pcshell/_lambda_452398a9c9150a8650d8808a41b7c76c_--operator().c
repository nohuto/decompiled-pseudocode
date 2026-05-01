/*
 * XREFs of _lambda_452398a9c9150a8650d8808a41b7c76c_::operator() @ 0x1801B56C8
 * Callers:
 *     CVirtualDesktopManager::_OnViewAdded__lambda_452398a9c9150a8650d8808a41b7c76c___ @ 0x1801B521C (CVirtualDesktopManager--_OnViewAdded__lambda_452398a9c9150a8650d8808a41b7c76c___.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_452398a9c9150a8650d8808a41b7c76c_::operator()(_QWORD **a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*a1)[14] + 56LL))(
         (*a1)[14],
         *a1[1],
         *a1[2],
         (*a1)[12]);
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44C,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
