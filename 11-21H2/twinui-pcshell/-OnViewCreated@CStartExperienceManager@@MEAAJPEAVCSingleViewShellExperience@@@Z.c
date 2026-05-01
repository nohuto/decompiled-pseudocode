/*
 * XREFs of ?OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800C9000
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnViewCreated@PriorityBoostHelper@@QEAAJXZ @ 0x1800C8E68 (-OnViewCreated@PriorityBoostHelper@@QEAAJXZ.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800C912C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?KeepAlive@CSingleViewShellExperience@@QEAAJXZ @ 0x1800C91C8 (-KeepAlive@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z @ 0x1800C92C8 (-SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z.c)
 */

__int64 __fastcall CStartExperienceManager::OnViewCreated(
        PriorityBoostHelper **this,
        struct CSingleViewShellExperience *a2)
{
  CSingleViewShellExperience *v2; // rdi
  int v4; // eax
  int v5; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v6; // rdx
  ExperienceManagerUtils *v7; // rcx
  HWND v8; // rax
  HWND v9; // rbx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (CSingleViewShellExperience *)(this + 28);
  v4 = CSingleViewShellExperience::SetPreferentialRMSettings(this + 28, 3LL);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x20B,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  v5 = PriorityBoostHelper::OnViewCreated(this[27]);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x20D,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  if ( this[31] )
  {
    CSingleViewShellExperience::KeepAlive(v2);
    v7 = this[31];
  }
  else
  {
    v7 = 0LL;
  }
  v8 = ExperienceManagerUtils::WindowFromViewWrapper(v7, v6);
  v9 = v8;
  if ( !v8 )
    return 0LL;
  if ( SetPropW(v8, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
  {
    if ( SetPropW(v9, L"WindowShouldReportLayoutCompletedTelemetryProp", HANDLE_FLAG_INHERIT) )
      return 0LL;
    v11 = 545LL;
  }
  else
  {
    v11 = 541LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
    (const char *)0x80004005LL);
  return 2147500037LL;
}
