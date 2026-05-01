/*
 * XREFs of ?OnCompositionCapabilitiesChanged@AcrylicPolicyManager@@UEAAJXZ @ 0x180128710
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDeviceAcrylicCapable@@YA_NXZ @ 0x18005F4C0 (-IsDeviceAcrylicCapable@@YA_NXZ.c)
 *     ?UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z @ 0x18012874C (-UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AcrylicPolicyManager::OnCompositionCapabilitiesChanged(AcrylicPolicyManager *this)
{
  int updated; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_BYTE *)this + 212) = IsDeviceAcrylicCapable();
  updated = AcrylicPolicyManager::UpdateAcrylicState((AcrylicPolicyManager *)((char *)this - 144), 0);
  v3 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9B,
    (unsigned int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
    (const char *)(unsigned int)updated,
    v5);
  return v3;
}
