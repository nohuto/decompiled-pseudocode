/*
 * XREFs of ?PostDeferralMessage@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x1800FAC90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x1800FACF4 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::PostDeferralMessage(ExperienceManagerUtils **this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = ExperienceManagerUtils::PostToUIThread(this[4], (struct IUnknown *)this - 3, (void *)0x401, 1u, v4);
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x534,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
