/*
 * XREFs of ?OnPriorityBoostRequested@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180473080
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::details::ScopeExitFn__lambda_f34acece6393082ae65dd9a39a5dfc96___::_ScopeExitFn__lambda_f34acece6393082ae65dd9a39a5dfc96___ @ 0x1801F1814 (wil--details--ScopeExitFn__lambda_f34acece6393082ae65dd9a39a5dfc96___--_ScopeExitFn__lambda_f34a.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnPriorityBoostRequested(
        CBaseTrayFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  int v11[2]; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *((_QWORD *)this + 1);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19F,
        (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
  }
  v8 = *((_QWORD *)this + 42);
  if ( v8 )
  {
    *(_QWORD *)v11 = (char *)this - 48;
    v12 = 1;
    v9 = (*(__int64 (__fastcall **)(__int64, struct CSingleViewShellExperience *))(*(_QWORD *)v8 + 120LL))(v8, a2);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1AD,
        (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
        (const char *)(unsigned int)v9);
      wil::details::ScopeExitFn__lambda_f34acece6393082ae65dd9a39a5dfc96___::_ScopeExitFn__lambda_f34acece6393082ae65dd9a39a5dfc96___(v11);
      return v10;
    }
    v12 = 0;
    wil::details::ScopeExitFn__lambda_f34acece6393082ae65dd9a39a5dfc96___::_ScopeExitFn__lambda_f34acece6393082ae65dd9a39a5dfc96___(v11);
  }
  return 0LL;
}
