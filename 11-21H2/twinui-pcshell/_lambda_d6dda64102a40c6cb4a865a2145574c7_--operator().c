/*
 * XREFs of _lambda_d6dda64102a40c6cb4a865a2145574c7_::operator() @ 0x1801220A4
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d6dda64102a40c6cb4a865a2145574c7___::Run @ 0x180121FD0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_d6dda64102a40c6cb4a865a2145574c7___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_d6dda64102a40c6cb4a865a2145574c7_::operator()(__int64 a1)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  v2 = **(__int64 ***)a1;
  v3 = *v2;
  v9 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 48))(v2, &v9);
  v5 = v4;
  if ( v4 < 0 )
  {
    v7 = 425LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_4;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 280LL) + 48LL))(
         *(_QWORD *)(*(_QWORD *)(a1 + 8) + 280LL),
         v9);
  v5 = v4;
  if ( v4 < 0 )
  {
    v7 = 426LL;
    goto LABEL_7;
  }
  v5 = 0;
LABEL_4:
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v9);
  return v5;
}
