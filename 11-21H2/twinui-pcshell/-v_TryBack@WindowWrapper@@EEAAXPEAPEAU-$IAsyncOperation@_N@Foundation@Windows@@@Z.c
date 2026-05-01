/*
 * XREFs of ?v_TryBack@WindowWrapper@@EEAAXPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x1803FCDF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall WindowWrapper::v_TryBack(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  int v6; // eax
  int v7; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v4 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 280) + 144LL))(
                   *(_QWORD *)(a1 + 280),
                   &v10);
  v5 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v4 + 40LL))(*v4, &v9);
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)*v5 + 248LL))(
         *v5,
         *(unsigned int *)(a1 + 352),
         0LL,
         a2);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x166,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
      (const char *)(unsigned int)v6,
      v7);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v9);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v10);
}
