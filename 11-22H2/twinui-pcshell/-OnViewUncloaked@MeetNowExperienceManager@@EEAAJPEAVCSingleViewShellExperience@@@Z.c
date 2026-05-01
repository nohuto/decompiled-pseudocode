/*
 * XREFs of ?OnViewUncloaked@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1804743C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x1802EBC48 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 */

__int64 __fastcall MeetNowExperienceManager::OnViewUncloaked(
        MeetNowExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CExperienceManagerAnimationHelper::End((MeetNowExperienceManager *)((char *)this + 48));
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x205,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  return 0LL;
}
