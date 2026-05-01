/*
 * XREFs of ?PostDeferralMessage@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x1800E89D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x1800E8E74 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::PostDeferralMessage(ExperienceManagerUtils **this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v4; // [rsp+20h] [rbp-8h]
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = ExperienceManagerUtils::PostToUIThread(this[4], (struct IUnknown *)this - 3, (void *)0x401, 1u, v4);
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6C7,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v1,
      v5);
  return v2;
}
