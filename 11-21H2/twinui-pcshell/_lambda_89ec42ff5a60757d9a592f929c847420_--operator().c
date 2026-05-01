/*
 * XREFs of _lambda_89ec42ff5a60757d9a592f929c847420_::operator() @ 0x180031A28
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_89ec42ff5a60757d9a592f929c847420___::Run @ 0x180031A00 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_89ec42ff5a60757d9a592f929c847420___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIAppViewPreview@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAppViewPreview@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801A91C4 (--$query@UIAppViewPreview@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr_t@UIApp.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_89ec42ff5a60757d9a592f929c847420_::operator()(__int64 a1)
{
  int v2; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppView,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IAppViewPreview>(
    *(_QWORD *)a1 + 104LL,
    &v6);
  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v6 + 72LL))(
         v6,
         **(_QWORD **)(a1 + 8),
         **(_QWORD **)(a1 + 16));
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x59F,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v2,
      v4);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v6);
  return 0LL;
}
