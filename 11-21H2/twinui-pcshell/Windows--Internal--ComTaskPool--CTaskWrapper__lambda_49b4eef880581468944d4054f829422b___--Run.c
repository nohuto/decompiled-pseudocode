/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_49b4eef880581468944d4054f829422b___::Run @ 0x1801933D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?CompleteHide@CActionCenterExperienceManager@@AEAAJXZ @ 0x18004F168 (-CompleteHide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$try_query@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18017799C (--$try_query@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@-$com_ptr_t@UIW.c)
 *     ?EM_DismissAnimationTimeout@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x18034E1C0 (-EM_DismissAnimationTimeout@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_49b4eef880581468944d4054f829422b___::Run(
        __int64 a1)
{
  __int64 v2; // rdx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::try_query<Windows::Internal::Shell::Experience::IActionCenterExperienceManager>(
    (__int64 *)(a1 + 24),
    &v5);
  if ( v5 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 425LL) )
    {
      NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DismissAnimationTimeout();
      *(_BYTE *)(*(_QWORD *)(a1 + 16) + 425LL) = 0;
      v3 = CActionCenterExperienceManager::CompleteHide(*(CActionCenterExperienceManager **)(a1 + 16), v2);
      if ( v3 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x380,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v3);
    }
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v5);
}
