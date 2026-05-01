/*
 * XREFs of ?PreloadExperience@CControlCenterExperienceManager@@UEAAJXZ @ 0x180354340
 * Callers:
 *     <none>
 * Callees:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18000B4DC (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ControlCenterPage_PreloadStarted@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXXZ @ 0x180353704 (-ControlCenterPage_PreloadStarted@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXXZ.c)
 */

__int64 __fastcall CControlCenterExperienceManager::PreloadExperience(CControlCenterExperienceManager *this)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_QWORD *)this + 14) )
  {
    *((_BYTE *)this + 675) = 1;
    ControlCenterUITelemetry::ControlCenterTelemetry::ControlCenterPage_PreloadStarted((__int64)this);
    v2 = CSingleViewShellExperience::Show(
           (__int64)this + 88,
           (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)3);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x225,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
  }
  return 0LL;
}
