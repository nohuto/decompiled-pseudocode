/*
 * XREFs of ?OnApplicationActivatedForLaunch@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@J@Z @ 0x1801B9350
 * Callers:
 *     <none>
 * Callees:
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x1800E8E74 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$InfraFailure@AEA_NAEAJ@StartMenuExperienceTelemetry@@SAXAEA_NAEAJ@Z @ 0x180443D7C (--$InfraFailure@AEA_NAEAJ@StartMenuExperienceTelemetry@@SAXAEA_NAEAJ@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18074BBF4 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

__int64 __fastcall CStartExperienceManager::OnApplicationActivatedForLaunch(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        unsigned int a3)
{
  __int64 v3; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  HWND ShellWindow; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = a3;
  v3 = (int)a3;
  if ( a3 == -2144927148 || a3 == -2147009295 )
  {
    MicrosoftTelemetryAssertTriggeredArgs(this, a3);
    StartMenuExperienceTelemetry::InfraFailure<bool &,long &>((char *)this + 665, &v10);
    if ( *((_BYTE *)this + 665) )
    {
      ShellWindow = GetShellWindow();
      PostMessageW(ShellWindow, 0x533u, 1uLL, 0LL);
    }
  }
  v5 = ExperienceManagerUtils::PostToUIThread(0LL, (struct IUnknown *)this - 12, (void *)0x401, v3);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x365,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  return v6;
}
