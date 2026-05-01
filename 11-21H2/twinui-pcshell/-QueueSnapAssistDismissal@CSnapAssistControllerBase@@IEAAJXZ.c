/*
 * XREFs of ?QueueSnapAssistDismissal@CSnapAssistControllerBase@@IEAAJXZ @ 0x18059CA9C
 * Callers:
 *     ?AppLayoutChanged@CSnapAssistControllerBase@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z @ 0x18059C020 (-AppLayoutChanged@CSnapAssistControllerBase@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation.c)
 *     ?OnWindowMigrationEvent@CSnapAssistControllerBase@@IEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIWindowMigrationEventArgs@3456@@Z @ 0x18059C940 (-OnWindowMigrationEvent@CSnapAssistControllerBase@@IEAAJPEAUIWindowManagementEvents2@WindowManag.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     MakeMultitaskingViewTaskCallback__lambda_41903274476ad81c9acd9f548c5deea7___ @ 0x1801BE544 (MakeMultitaskingViewTaskCallback__lambda_41903274476ad81c9acd9f548c5deea7___.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSnapAssistControllerBase::QueueSnapAssistDismissal(CSnapAssistControllerBase *this, void *a2)
{
  int MultitaskingViewTaskCallback__lambda_41903274476ad81c9acd9f548c5deea7; // eax
  unsigned int v4; // ebx
  void (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rcx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0LL;
  MultitaskingViewTaskCallback__lambda_41903274476ad81c9acd9f548c5deea7 = MakeMultitaskingViewTaskCallback__lambda_41903274476ad81c9acd9f548c5deea7_(
                                                                            &v10,
                                                                            a2);
  v4 = MultitaskingViewTaskCallback__lambda_41903274476ad81c9acd9f548c5deea7;
  if ( MultitaskingViewTaskCallback__lambda_41903274476ad81c9acd9f548c5deea7 >= 0 )
  {
    v5 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 7);
    v9 = 0LL;
    (**v5)(v5, &GUID_b8445672_ee65_4e59_b5ef_fd73ca6b61e2, &v9);
    if ( v9
      && (v6 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v9 + 24LL))(v9, v10, 0LL),
          v4 = v6,
          v6 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30F,
        (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
        (const char *)(unsigned int)v6);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v9);
    }
    else
    {
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v9);
      v4 = 0;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x309,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      (const char *)(unsigned int)MultitaskingViewTaskCallback__lambda_41903274476ad81c9acd9f548c5deea7);
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v10);
  return v4;
}
