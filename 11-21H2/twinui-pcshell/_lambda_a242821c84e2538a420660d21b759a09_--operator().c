/*
 * XREFs of _lambda_a242821c84e2538a420660d21b759a09_::operator() @ 0x1801B57D8
 * Callers:
 *     wil::details::ScopeExitFn__lambda_a242821c84e2538a420660d21b759a09___::_ScopeExitFn__lambda_a242821c84e2538a420660d21b759a09___ @ 0x1801B5548 (wil--details--ScopeExitFn__lambda_a242821c84e2538a420660d21b759a09___--_ScopeExitFn__lambda_a242.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_a242821c84e2538a420660d21b759a09_::operator()(_QWORD **a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*a1)[15] + 40LL))(
         (*a1)[15],
         *a1[1],
         *a1[2],
         *a1[3]);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x369,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
