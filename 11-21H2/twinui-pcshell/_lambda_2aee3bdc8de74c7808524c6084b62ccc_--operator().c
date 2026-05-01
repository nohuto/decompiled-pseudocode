/*
 * XREFs of _lambda_2aee3bdc8de74c7808524c6084b62ccc_::operator() @ 0x180315A70
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2aee3bdc8de74c7808524c6084b62ccc___::Run @ 0x180315E70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2aee3bdc8de74c7808524c6084b62ccc___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIBlueLightReductionManager@BlueLightReduction@Shell@Internal@Windows@@@?$com_ptr_t@UIServiceHostComponent@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIBlueLightReductionManager@BlueLightReduction@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180190EF0 (--$query@UIBlueLightReductionManager@BlueLightReduction@Shell@Internal@Windows@@@-$com_ptr_t@UIS.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_2aee3bdc8de74c7808524c6084b62ccc_::operator()(_QWORD *a1)
{
  __int64 (__fastcall ****v1)(_QWORD, GUID *, _QWORD *); // rcx
  _QWORD *v2; // rax
  int v3; // eax
  const char *v4; // r9
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*a1 + 168LL);
  try
  {
    v2 = wil::com_ptr_t<IServiceHostComponent,wil::err_exception_policy>::query<Windows::Internal::Shell::BlueLightReduction::IBlueLightReductionManager>(
           v1,
           &v7);
    v3 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 48LL))(*v2);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xE5,
        (int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v3,
        v5);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v7);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xE7,
      (int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
      v4);
  }
}
