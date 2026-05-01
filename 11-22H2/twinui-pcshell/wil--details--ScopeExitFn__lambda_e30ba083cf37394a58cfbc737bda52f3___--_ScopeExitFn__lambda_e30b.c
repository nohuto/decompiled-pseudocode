/*
 * XREFs of wil::details::ScopeExitFn__lambda_e30ba083cf37394a58cfbc737bda52f3___::_ScopeExitFn__lambda_e30ba083cf37394a58cfbc737bda52f3___ @ 0x180206A10
 * Callers:
 *     ?OnAutoInvokeInDesktopModePolicyChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18051434C (-OnAutoInvokeInDesktopModePolicyChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     _TouchKeyboardExperienceManager::OnAutoInvokeInDesktopModePolicyChanged_::_1_::dtor$0 @ 0x180514435 (_TouchKeyboardExperienceManager--OnAutoInvokeInDesktopModePolicyChanged_--_1_--dtor$0.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_e30ba083cf37394a58cfbc737bda52f3___::_ScopeExitFn__lambda_e30ba083cf37394a58cfbc737bda52f3___(
        __int64 **a1)
{
  __int64 v1; // rcx
  int PolicyData; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)a1 + 8) )
  {
    *((_BYTE *)a1 + 8) = 0;
    v1 = **a1;
    if ( v1 )
    {
      PolicyData = PolicyManager_FreeGetPolicyData(v1);
      if ( PolicyData < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x13C4,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)PolicyData);
    }
  }
}
