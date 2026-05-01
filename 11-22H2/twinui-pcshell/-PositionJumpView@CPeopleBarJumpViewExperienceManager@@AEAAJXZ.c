/*
 * XREFs of ?PositionJumpView@CPeopleBarJumpViewExperienceManager@@AEAAJXZ @ 0x18044185C
 * Callers:
 *     ?OnViewPropertiesChanging@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180441370 (-OnViewPropertiesChanging@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperien.c)
 * Callees:
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1800B5C74 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?CalculateJumpViewPosition@CPeopleBarJumpViewExperienceManager@@AEAAJAEAUtagRECT@@PEAU2@@Z @ 0x18044098C (-CalculateJumpViewPosition@CPeopleBarJumpViewExperienceManager@@AEAAJAEAUtagRECT@@PEAU2@@Z.c)
 *     ?GetAppBarPositionForMonitor@CPeopleBarJumpViewExperienceManager@@AEAAJQEAUHMONITOR__@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x180440BE0 (-GetAppBarPositionForMonitor@CPeopleBarJumpViewExperienceManager@@AEAAJQEAUHMONITOR__@@PEAUtagRE.c)
 */

__int64 __fastcall CPeopleBarJumpViewExperienceManager::PositionJumpView(struct tagRECT *this)
{
  HMONITOR v2; // rax
  int AppBarPositionForMonitor; // edi
  __int64 v4; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  struct tagRECT v8; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( this[22].left <= 0 || this[22].top <= 0 )
    return 0LL;
  v8 = 0LL;
  v2 = MonitorFromRect(this + 20, 1u);
  AppBarPositionForMonitor = CPeopleBarJumpViewExperienceManager::GetAppBarPositionForMonitor(
                               (CPeopleBarJumpViewExperienceManager *)this,
                               v2,
                               &v8,
                               (enum EDGEUI_TRAYSTUCKPLACE *)&this[19].top);
  if ( AppBarPositionForMonitor < 0 )
  {
    v4 = 310LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)AppBarPositionForMonitor);
    return (unsigned int)AppBarPositionForMonitor;
  }
  AppBarPositionForMonitor = CPeopleBarJumpViewExperienceManager::CalculateJumpViewPosition(
                               (CPeopleBarJumpViewExperienceManager *)this,
                               &v8,
                               this + 21);
  if ( AppBarPositionForMonitor < 0 )
  {
    v4 = 313LL;
    goto LABEL_5;
  }
  if ( !*(_QWORD *)&this[5].left )
    return 0LL;
  v6 = CSingleViewShellExperience::SetPosition((CSingleViewShellExperience *)&this[3].right, this + 21);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x13E,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
