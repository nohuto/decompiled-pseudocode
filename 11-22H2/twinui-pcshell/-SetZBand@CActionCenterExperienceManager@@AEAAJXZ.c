/*
 * XREFs of ?SetZBand@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800808D4
 * Callers:
 *     ?OnIdleStateFlagsChanged@CActionCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x18006D890 (-OnIdleStateFlagsChanged@CActionCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z.c)
 *     ?OnViewCreated@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18007FC60 (-OnViewCreated@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z @ 0x18010DDF4 (-SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CActionCenterExperienceManager::SetZBand(CActionCenterExperienceManager *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_QWORD *)this + 19) )
    return 0LL;
  v1 = CSingleViewShellExperience::SetWindowBand((char *)this + 128, *((_BYTE *)this + 468) != 0 ? 18 : 4);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x623,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v1,
    v4);
  return v2;
}
