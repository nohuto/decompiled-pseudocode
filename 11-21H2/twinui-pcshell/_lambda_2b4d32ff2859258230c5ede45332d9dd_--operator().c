/*
 * XREFs of _lambda_2b4d32ff2859258230c5ede45332d9dd_::operator() @ 0x18012213C
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2b4d32ff2859258230c5ede45332d9dd___::Run @ 0x180121FA0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_2b4d32ff2859258230c5ede45332d9dd___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003E8F0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_2b4d32ff2859258230c5ede45332d9dd_::operator()(__int64 **a1)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  v2 = **a1;
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL);
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v9);
  v4 = v3(v2, &v9);
  v5 = v4;
  if ( v4 < 0 )
  {
    v7 = 649LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_4;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1[1][35] + 136LL))(a1[1][35], v9);
  v5 = v4;
  if ( v4 < 0 )
  {
    v7 = 650LL;
    goto LABEL_7;
  }
  v5 = 0;
LABEL_4:
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v9);
  return v5;
}
