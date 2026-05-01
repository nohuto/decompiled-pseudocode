/*
 * XREFs of ?add_WindowChanged@SearchAppExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@UWindowId@UI@5@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180460E90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 SearchAppExperienceManager::add_WindowChanged()
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2B1,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
