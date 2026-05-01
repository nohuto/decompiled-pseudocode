/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b1b1adeb4908864363732ebe2cc2a796___::Run @ 0x180315F30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIBlueLightReductionManager@BlueLightReduction@Shell@Internal@Windows@@@?$com_ptr_t@UIServiceHostComponent@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIBlueLightReductionManager@BlueLightReduction@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180190EF0 (--$query@UIBlueLightReductionManager@BlueLightReduction@Shell@Internal@Windows@@@-$com_ptr_t@UIS.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b1b1adeb4908864363732ebe2cc2a796___::Run(
        __int64 a1)
{
  _QWORD *v1; // rax
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = wil::com_ptr_t<IServiceHostComponent,wil::err_exception_policy>::query<Windows::Internal::Shell::BlueLightReduction::IBlueLightReductionManager>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*(_QWORD *)(a1 + 16) + 168LL),
         &v4);
  v2 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 72LL))(*v1);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x138,
      (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
      (const char *)(unsigned int)v2);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v4);
}
