/*
 * XREFs of CMultitaskingViewTaskCallback__lambda_41903274476ad81c9acd9f548c5deea7___::RunTask @ 0x1801BEAB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMultitaskingViewTaskCallback__lambda_41903274476ad81c9acd9f548c5deea7___::RunTask(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = a1;
  v2 = *a2;
  v5 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, __int64, GUID *, __int64 *))(v2 + 40))(
         a2,
         4LL,
         &GUID_b63cb15a_d1aa_4a39_bc06_78e9843bf5c4,
         &v5) >= 0 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5);
    if ( v3 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x305,
        (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
        (const char *)(unsigned int)v3);
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v5);
}
