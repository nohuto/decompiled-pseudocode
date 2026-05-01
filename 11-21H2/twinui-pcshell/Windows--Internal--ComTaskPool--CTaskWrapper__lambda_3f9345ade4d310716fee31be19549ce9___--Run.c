/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3f9345ade4d310716fee31be19549ce9___::Run @ 0x180195690
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?CompleteHide@CControlCenterExperienceManager@@AEAAJXZ @ 0x18003C984 (-CompleteHide@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$try_query@UIControlCenterExperienceManager@Experience@Shell@Internal@Windows@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIControlCenterExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801756C8 (--$try_query@UIControlCenterExperienceManager@Experience@Shell@Internal@Windows@@@-$com_ptr_t@UI.c)
 *     ?EM_DismissAnimationTimeout@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXXZ @ 0x180353844 (-EM_DismissAnimationTimeout@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXXZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3f9345ade4d310716fee31be19549ce9___::Run(
        __int64 a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::try_query<Windows::Internal::Shell::Experience::IControlCenterExperienceManager>(
    (__int64 *)(a1 + 24),
    &v4);
  if ( v4 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 390LL) )
    {
      ControlCenterUITelemetry::ControlCenterTelemetry::EM_DismissAnimationTimeout();
      *(_BYTE *)(*(_QWORD *)(a1 + 16) + 390LL) = 0;
      v2 = CControlCenterExperienceManager::CompleteHide(*(CControlCenterExperienceManager **)(a1 + 16));
      if ( v2 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3E5,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v2);
    }
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v4);
}
