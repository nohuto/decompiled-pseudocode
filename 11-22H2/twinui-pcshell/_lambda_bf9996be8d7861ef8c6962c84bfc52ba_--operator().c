/*
 * XREFs of _lambda_bf9996be8d7861ef8c6962c84bfc52ba_::operator() @ 0x1802181C8
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_bf9996be8d7861ef8c6962c84bfc52ba__&_::Run @ 0x1802182F0 (wil--details--functor_wrapper_void__lambda_bf9996be8d7861ef8c6962c84bfc52ba__-_--Run.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsActiveSessionCountLimited@@YA_NXZ @ 0x1801334E0 (-IsActiveSessionCountLimited@@YA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall lambda_bf9996be8d7861ef8c6962c84bfc52ba_::operator()(__int64 a1)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( IsActiveSessionCountLimited() )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 72LL) + 56LL))(
           *(_QWORD *)(*(_QWORD *)a1 + 72LL),
           *(_QWORD *)(*(_QWORD *)a1 + 80LL));
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3A,
        (int)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
        (const char *)(unsigned int)v2);
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 72LL) + 88LL))(
           *(_QWORD *)(*(_QWORD *)a1 + 72LL),
           *(_QWORD *)(*(_QWORD *)a1 + 88LL));
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3B,
        (int)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
        (const char *)(unsigned int)v3);
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 72LL) + 72LL))(
           *(_QWORD *)(*(_QWORD *)a1 + 72LL),
           *(_QWORD *)(*(_QWORD *)a1 + 96LL));
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3C,
        (int)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
        (const char *)(unsigned int)v4);
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 72LL) + 144LL))(*(_QWORD *)(*(_QWORD *)a1 + 72LL));
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3D,
        (int)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
        (const char *)(unsigned int)v5);
  }
}
