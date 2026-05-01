/*
 * XREFs of ?PositionFlyout@MeetNowExperienceManager@@AEAAJUSize@Foundation@Windows@@@Z @ 0x180474614
 * Callers:
 *     ?OnViewUncloaking@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1804744C0 (-OnViewUncloaking@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1800B5C74 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?CalculateFlyoutPosition@MeetNowExperienceManager@@AEAAJUSize@Foundation@Windows@@UtagRECT@@PEAU5@@Z @ 0x180471A9C (-CalculateFlyoutPosition@MeetNowExperienceManager@@AEAAJUSize@Foundation@Windows@@UtagRECT@@PEAU.c)
 *     ?GetTaskBarPositionForMonitor@MeetNowExperienceManager@@AEAAJQEAUHMONITOR__@@PEAUtagRECT@@@Z @ 0x180472354 (-GetTaskBarPositionForMonitor@MeetNowExperienceManager@@AEAAJQEAUHMONITOR__@@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall MeetNowExperienceManager::PositionFlyout(__int64 a1, SIZE a2)
{
  HMONITOR v3; // rax
  int TaskBarPositionForMonitor; // edi
  __int64 v5; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  RECT v10; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v11; // [rsp+40h] [rbp-38h] BYREF
  struct tagRECT v12; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  *(SIZE *)&v11.left = a2;
  if ( *(float *)&a2.cx <= 0.0 || *(float *)&a2.cy <= 0.0 )
    return 0LL;
  v11 = 0LL;
  v3 = MonitorFromRect((LPCRECT)(a1 + 408), 1u);
  TaskBarPositionForMonitor = MeetNowExperienceManager::GetTaskBarPositionForMonitor(
                                (MeetNowExperienceManager *)a1,
                                v3,
                                &v11);
  if ( TaskBarPositionForMonitor < 0 )
  {
    v5 = 472LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
      (const char *)(unsigned int)TaskBarPositionForMonitor);
    return (unsigned int)TaskBarPositionForMonitor;
  }
  v10 = v11;
  TaskBarPositionForMonitor = MeetNowExperienceManager::CalculateFlyoutPosition(
                                (MeetNowExperienceManager *)a1,
                                a2,
                                &v10,
                                &v12);
  if ( TaskBarPositionForMonitor < 0 )
  {
    v5 = 475LL;
    goto LABEL_5;
  }
  if ( !*(_QWORD *)(a1 + 208) )
    return 0LL;
  v7 = CSingleViewShellExperience::SetPosition((CSingleViewShellExperience *)(a1 + 184), &v12);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1E0,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
