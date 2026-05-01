/*
 * XREFs of ?HotKeyInvoked@CActionCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x18000AAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x18000AC38 (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x18004D9FC (-Hide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CActionCenterExperienceManager::HotKeyInvoked(__int64 a1, int a2)
{
  int v2; // ebx
  __int64 v4; // rdx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
    return 0LL;
  if ( *(_DWORD *)(a1 + 136) == 2 )
  {
    v2 = CActionCenterExperienceManager::Hide((CActionCenterExperienceManager *)(a1 - 32));
    if ( v2 >= 0 )
      return 0LL;
    v4 = 473LL;
  }
  else
  {
    v2 = CActionCenterExperienceManager::Show((PVOID)(a1 - 32));
    if ( v2 >= 0 )
      return 0LL;
    v4 = 477LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v2,
    v5);
  return (unsigned int)v2;
}
