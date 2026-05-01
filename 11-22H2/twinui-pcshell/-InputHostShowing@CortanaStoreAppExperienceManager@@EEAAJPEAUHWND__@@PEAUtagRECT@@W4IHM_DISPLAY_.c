/*
 * XREFs of ?InputHostShowing@CortanaStoreAppExperienceManager@@EEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x18045BC10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckThread@CortanaStoreAppExperienceManager@@AEAAXXZ @ 0x18045B014 (-CheckThread@CortanaStoreAppExperienceManager@@AEAAXXZ.c)
 *     ?HandleInputHostVisibilityChange@CortanaStoreAppExperienceManager@@AEAAJPEAUHWND__@@@Z @ 0x18045B9D0 (-HandleInputHostVisibilityChange@CortanaStoreAppExperienceManager@@AEAAJPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::InputHostShowing(
        __int64 a1,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  CortanaStoreAppExperienceManager *v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (CortanaStoreAppExperienceManager *)(a1 - 136);
  CortanaStoreAppExperienceManager::CheckThread((CortanaStoreAppExperienceManager *)(a1 - 136));
  v4 = CortanaStoreAppExperienceManager::HandleInputHostVisibilityChange(v3, a2);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x50E,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
