/*
 * XREFs of ?WasPreviouslyInstalled@StartExperiencePackageHelper@@QEAAX_N@Z @ 0x180247BBC
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1 @ 0x180242400 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvasD_ea_180242400.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WasPreviouslyInstalled@LockScreenWidgetPackageHelperBase@@IEAAJPEBG_N@Z @ 0x180247A98 (-WasPreviouslyInstalled@LockScreenWidgetPackageHelperBase@@IEAAJPEBG_N@Z.c)
 */

void __fastcall StartExperiencePackageHelper::WasPreviouslyInstalled(
        StartExperiencePackageHelper *this,
        unsigned __int8 a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = LockScreenWidgetPackageHelperBase::WasPreviouslyInstalled(this, L"StartExperiencesInstalled", a2);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x380,
      (int)"shellcommon\\internal\\shell\\inc\\LockScreenWidgetPackageHelper.h",
      (const char *)(unsigned int)v2);
}
