/*
 * XREFs of ?InputHostShowing@CStartExperienceManager@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x180444F30
 * Callers:
 *     <none>
 * Callees:
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x1800B5A04 (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsViewVisible@CStartExperienceManager@@AEBA_NXZ @ 0x1801BD4A0 (-IsViewVisible@CStartExperienceManager@@AEBA_NXZ.c)
 */

__int64 __fastcall CStartExperienceManager::InputHostShowing(__int64 a1, __int64 a2, _OWORD *a3, int a4)
{
  __int64 v4; // rcx
  __int64 v5; // r10
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a4 == 3 )
    *(_OWORD *)(a1 + 672) = *a3;
  else
    *(_OWORD *)(a1 + 672) = 0LL;
  if ( !CStartExperienceManager::IsViewVisible((CStartExperienceManager *)(a1 - 72)) )
    return 0LL;
  v6 = CStartExperienceManager::PositionMenu(v4, v5 + 248, 1);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5C0,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
