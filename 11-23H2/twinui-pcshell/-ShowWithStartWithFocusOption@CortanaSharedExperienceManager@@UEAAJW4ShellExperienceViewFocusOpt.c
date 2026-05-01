/*
 * XREFs of ?ShowWithStartWithFocusOption@CortanaSharedExperienceManager@@UEAAJW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@@Z @ 0x18042DC30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 CortanaSharedExperienceManager::ShowWithStartWithFocusOption()
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1DE,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
