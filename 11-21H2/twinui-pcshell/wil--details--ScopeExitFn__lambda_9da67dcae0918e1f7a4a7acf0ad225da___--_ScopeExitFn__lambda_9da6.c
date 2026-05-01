/*
 * XREFs of wil::details::ScopeExitFn__lambda_9da67dcae0918e1f7a4a7acf0ad225da___::_ScopeExitFn__lambda_9da67dcae0918e1f7a4a7acf0ad225da___ @ 0x1801AF708
 * Callers:
 *     ?OnAutoInvokeInDesktopModePolicyChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1801758E0 (-OnAutoInvokeInDesktopModePolicyChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     _TouchKeyboardExperienceManager::OnAutoInvokeInDesktopModePolicyChanged_::_1_::dtor$0 @ 0x180223A19 (_TouchKeyboardExperienceManager--OnAutoInvokeInDesktopModePolicyChanged_--_1_--dtor$0.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_9da67dcae0918e1f7a4a7acf0ad225da___::_ScopeExitFn__lambda_9da67dcae0918e1f7a4a7acf0ad225da___(
        __int64 a1)
{
  int PolicyData; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    if ( **(_QWORD **)a1 )
    {
      PolicyData = PolicyManager_FreeGetPolicyData();
      if ( PolicyData < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x14B9,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)PolicyData);
    }
  }
}
