/*
 * XREFs of ?HotKeyInvoked@CControlCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x180040540
 * Callers:
 *     <none>
 * Callees:
 *     ?Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE@Z @ 0x18000A170 (-Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE@Z.c)
 *     ?Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z @ 0x18004F0C0 (-Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CControlCenterExperienceManager::HotKeyInvoked(__int64 a1, int a2)
{
  int v2; // ebx
  __int64 v4; // rdx
  int v5; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 )
    return 0LL;
  if ( *(_DWORD *)(a1 + 128) == 2 )
  {
    if ( *(_BYTE *)(a1 + 674) )
    {
      v2 = CControlCenterExperienceManager::Show((CControlCenterExperienceManager *)a1, 0LL, 0, 1, 1u, 1u);
      if ( v2 >= 0 )
        return 0LL;
      v4 = 448LL;
    }
    else
    {
      v2 = CControlCenterExperienceManager::Hide((CControlCenterExperienceManager *)a1, 0LL, 0);
      if ( v2 >= 0 )
        return 0LL;
      v4 = 452LL;
    }
  }
  else
  {
    v2 = CControlCenterExperienceManager::Show((CControlCenterExperienceManager *)a1, 0LL, 0, 1, 1u, 1u);
    if ( v2 >= 0 )
      return 0LL;
    v4 = 457LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v2,
    v5);
  return (unsigned int)v2;
}
