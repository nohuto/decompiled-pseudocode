/*
 * XREFs of ?TakeKeyboardFocus@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x18005A850
 * Callers:
 *     <none>
 * Callees:
 *     ?BringToForeground@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x18005A874 (-BringToForeground@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::TakeKeyboardFocus(UndockedSearchAppExperienceManager *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = UndockedSearchAppExperienceManager::BringToForeground(this);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5BA,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
    (const char *)(unsigned int)v1,
    v4);
  return v2;
}
