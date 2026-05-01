/*
 * XREFs of CortanaHelpers::AllowCortanaAboveLockByEnterprisePolicy @ 0x180480CF8
 * Callers:
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x180480BE8 (CortanaHelpers--AllowCortanaAboveLock.c)
 *     CortanaHelpers::UpdateCortanaAboveLockValueBasedOnEnterprisePolicy @ 0x180489074 (CortanaHelpers--UpdateCortanaAboveLockValueBasedOnEnterprisePolicy.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
        (int)"desktop\\internal\\shell\\inc\\private\\CortanaHelpers.h",
        (const char *)(unsigned int)PolicyInt);
      return 0;
    }
    return v4 != 0;
  }
  return result;
}
