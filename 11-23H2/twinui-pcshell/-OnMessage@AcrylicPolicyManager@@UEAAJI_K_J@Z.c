/*
 * XREFs of ?OnMessage@AcrylicPolicyManager@@UEAAJI_K_J@Z @ 0x180392E30
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z @ 0x18012874C (-UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsHighContrast@AcrylicPolicyManager@@CA_NXZ @ 0x1801BB778 (-_IsHighContrast@AcrylicPolicyManager@@CA_NXZ.c)
 */

__int64 __fastcall AcrylicPolicyManager::OnMessage(AcrylicPolicyManager *this, int a2)
{
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == 794 )
    *((_BYTE *)this + 225) = AcrylicPolicyManager::_IsHighContrast();
  updated = AcrylicPolicyManager::UpdateAcrylicState((AcrylicPolicyManager *)((char *)this - 128), 0);
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xFF,
      (int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)updated);
  return 0LL;
}
