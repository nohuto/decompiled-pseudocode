/*
 * XREFs of ?OnSessionIdleStateChanged@CSingleViewShellExperience@@QEAAJH@Z @ 0x1800B9450
 * Callers:
 *     SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea___::OnIdleStateChanged @ 0x180062DE0 (SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea___--OnIdleStateChanged.c)
 *     ?RegisterSessionIdleDetector@DesktopSingleViewShellExperiencePersonality@@AEAAJXZ @ 0x1800E671C (-RegisterSessionIdleDetector@DesktopSingleViewShellExperiencePersonality@@AEAAJXZ.c)
 * Callees:
 *     ?EnableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x180072F24 (-EnableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@View.c)
 *     ??$SessionIdleState@AEA_N@SingleViewExperienceTelemetry@@SAXAEA_N@Z @ 0x1800B94FC (--$SessionIdleState@AEA_N@SingleViewExperienceTelemetry@@SAXAEA_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x18018B9EC (-NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewMa.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSingleViewShellExperience::OnSessionIdleStateChanged(CSingleViewShellExperience *this, int a2)
{
  _BYTE *v2; // rdi
  __int64 v5; // r8
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (char *)this + 53;
  *((_BYTE *)this + 53) = a2 != 0;
  SingleViewExperienceTelemetry::SessionIdleState<bool &>((char *)this + 53);
  if ( *((_QWORD *)this + 3) )
  {
    LOBYTE(v5) = *v2;
    v7 = (*(__int64 (__fastcall **)(_QWORD, CSingleViewShellExperience *, __int64))(**((_QWORD **)this + 11) + 96LL))(
           *((_QWORD *)this + 11),
           this,
           v5);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA6,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v7,
        v13);
    v8 = *((_QWORD *)this + 3);
    if ( v8 )
    {
      if ( !a2 )
      {
        v9 = *((unsigned int *)this + 18);
        if ( (_DWORD)v9 )
        {
          v10 = ShellExperienceHelpers::NavigationLevelOverrideHelper::NavigateView((char *)this + 72, v8, v9);
          if ( v10 >= 0 )
          {
            *((_DWORD *)this + 18) = 0;
            return 0LL;
          }
          v11 = (unsigned int)v10;
          v12 = 190LL;
        }
        else
        {
          v11 = 2147947423LL;
          v12 = 187LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (unsigned int)"desktop\\internal\\Shell\\inc\\private\\NavigationLevelOverrideHelper.h",
          (const char *)v11,
          v13);
        return 0LL;
      }
      ShellExperienceHelpers::NavigationLevelOverrideHelper::EnableOverride((_DWORD *)this + 18, v8);
    }
  }
  return 0LL;
}
