/*
 * XREFs of wil::details::lambda_call__lambda_d7b889f00800c56d2c67f3f2c35d2843___::_lambda_call__lambda_d7b889f00800c56d2c67f3f2c35d2843___ @ 0x1801F498C
 * Callers:
 *     _UwpWindowEventDispatcher::RecoverViews_::_1_::dtor$5 @ 0x1802B8389 (_UwpWindowEventDispatcher--RecoverViews_--_1_--dtor$5.c)
 *     sub_1802F6078 @ 0x1802F6078 (sub_1802F6078.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::lambda_call__lambda_d7b889f00800c56d2c67f3f2c35d2843___::_lambda_call__lambda_d7b889f00800c56d2c67f3f2c35d2843___(
        _BYTE *a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[8] )
  {
    a1[8] = 0;
    v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(***(_QWORD ***)a1 + 344LL))(**(_QWORD **)a1, 0LL);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8E1,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v1);
  }
}
