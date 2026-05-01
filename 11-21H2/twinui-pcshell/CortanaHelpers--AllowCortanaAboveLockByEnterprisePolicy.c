/*
 * XREFs of CortanaHelpers::AllowCortanaAboveLockByEnterprisePolicy @ 0x1803A58EC
 * Callers:
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x1803A57D8 (CortanaHelpers--AllowCortanaAboveLock.c)
 *     CortanaHelpers::UpdateCortanaAboveLockValueBasedOnEnterprisePolicy @ 0x1803ADDB4 (CortanaHelpers--UpdateCortanaAboveLockValueBasedOnEnterprisePolicy.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

bool CortanaHelpers::AllowCortanaAboveLockByEnterprisePolicy()
{
  int v0; // ecx
  bool result; // al
  int PolicyInt; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v0 = SHWindowsPolicy(&POLID_AllowCortanaAboveLock);
  if ( !v0 )
    return 0;
  result = 1;
  if ( v0 == -1 )
  {
    PolicyInt = PolicyManager_GetPolicyInt(L"AboveLock", L"AllowCortanaAboveLock", &v4);
    if ( PolicyInt < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1B,
        (__int64)"internal\\shell\\private\\inc\\CortanaHelpers.h",
        (const char *)(unsigned int)PolicyInt);
      return 0;
    }
    return v4 != 0;
  }
  return result;
}
