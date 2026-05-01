/*
 * XREFs of ?ShowWithStart@UndockedSearchAppExperienceManager@@UEAAJE@Z @ 0x18046A790
 * Callers:
 *     <none>
 * Callees:
 *     ?ShowWithStartWithFocusOption@UndockedSearchAppExperienceManager@@UEAAJW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@@Z @ 0x1800459D0 (-ShowWithStartWithFocusOption@UndockedSearchAppExperienceManager@@UEAAJW4ShellExperienceViewFocu.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::ShowWithStart(UndockedSearchAppExperienceManager *this, char a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = UndockedSearchAppExperienceManager::ShowWithStartWithFocusOption((__int64)this, a2 != 0);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A5,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
