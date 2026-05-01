/*
 * XREFs of _lambda_e68365d89e6ffd9292af92cce9779ecf_::operator() @ 0x180494850
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_e68365d89e6ffd9292af92cce9779ecf___::RunTask @ 0x180494B70 (CMultitaskingViewTaskCallback__lambda_e68365d89e6ffd9292af92cce9779ecf___--RunTask.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_e68365d89e6ffd9292af92cce9779ecf_::operator()(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64 *, __int64, GUID *, __int64 *); // rsi
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v4 = *a2;
  v11 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, __int64, GUID *, __int64 *))(v4 + 40))(
         a2,
         16LL,
         &GUID_1be71764_e771_4442_b78f_eda2c7f067f3,
         &v11) < 0 )
  {
    v5 = *(__int64 (__fastcall **)(__int64 *, __int64, GUID *, __int64 *))(*a2 + 24);
    v6 = v11;
    v11 = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v7 = v5(a2, 16LL, &GUID_1be71764_e771_4442_b78f_eda2c7f067f3, &v11);
    v8 = v7;
    if ( v7 < 0 )
      goto LABEL_6;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 48LL))(
         v11,
         *(_QWORD *)a1,
         *(unsigned int *)(a1 + 8));
  v8 = v7;
  if ( v7 >= 0 )
    v8 = 0;
  else
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopswitcherservice.cpp",
      (const char *)(unsigned int)v7);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v11);
  return v8;
}
