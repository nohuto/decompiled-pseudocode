/*
 * XREFs of ?InputHostHiding@CStartExperienceManager@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x1802D4A60
 * Callers:
 *     <none>
 * Callees:
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x1800B5A04 (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsViewVisible@CStartExperienceManager@@AEBA_NXZ @ 0x1801BD4A0 (-IsViewVisible@CStartExperienceManager@@AEBA_NXZ.c)
 */

__int64 __fastcall CStartExperienceManager::InputHostHiding(_DWORD *a1)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[168] >= a1[170] )
    return 0LL;
  if ( a1[169] >= a1[171] )
    return 0LL;
  *((_OWORD *)a1 + 42) = 0LL;
  if ( !CStartExperienceManager::IsViewVisible((CStartExperienceManager *)(a1 - 18)) )
    return 0LL;
  v3 = CStartExperienceManager::PositionMenu(v1, v2 + 248, 1);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5CC,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
