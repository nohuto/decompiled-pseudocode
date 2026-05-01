/*
 * XREFs of ?OnIdleStateFlagsChanged@CControlCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x180071E90
 * Callers:
 *     <none>
 * Callees:
 *     ?Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z @ 0x180071C60 (-Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CControlCenterExperienceManager::OnIdleStateFlagsChanged(__int64 a1, char a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (a2 & 2) == 0 )
    return 0LL;
  v2 = CControlCenterExperienceManager::Hide((CControlCenterExperienceManager *)(a1 - 8), 0LL, 0);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2BB,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v2,
    v5);
  return v3;
}
