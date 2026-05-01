/*
 * XREFs of _lambda_51bb635e1ede125b1e9590b7696bcce9_::operator() @ 0x18021533C
 * Callers:
 *     wil::details::ScopeExitFn__lambda_51bb635e1ede125b1e9590b7696bcce9___::_ScopeExitFn__lambda_51bb635e1ede125b1e9590b7696bcce9___ @ 0x1802152B4 (wil--details--ScopeExitFn__lambda_51bb635e1ede125b1e9590b7696bcce9___--_ScopeExitFn__lambda_51bb.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_51bb635e1ede125b1e9590b7696bcce9_::operator()(_QWORD **a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*a1)[16] + 40LL))((*a1)[16], *a1[1], *a1[2]);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3E3,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
