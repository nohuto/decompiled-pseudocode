/*
 * XREFs of ?OnViewUncloaking@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1804744C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionFlyout@MeetNowExperienceManager@@AEAAJUSize@Foundation@Windows@@@Z @ 0x180474614 (-PositionFlyout@MeetNowExperienceManager@@AEAAJUSize@Foundation@Windows@@@Z.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x180748F0C (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@_ea_180748F0C.c)
 */

__int64 __fastcall MeetNowExperienceManager::OnViewUncloaking(
        MeetNowExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v3; // eax
  __int64 v4; // r8
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = MeetNowExperienceManager::PositionFlyout((char *)this - 56, *(_QWORD *)((char *)a2 + 44));
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1E8,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  v4 = 92LL;
  v5 = *((_DWORD *)this + 94);
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 1 )
          v4 = 90LL;
      }
      else
      {
        v4 = 88LL;
      }
    }
    else
    {
      v4 = 91LL;
    }
  }
  else
  {
    v4 = 89LL;
  }
  LODWORD(v4) = v4 | 0x200000;
  v8 = CExperienceManagerAnimationHelper::Begin(
         (char *)this + 48,
         *((_QWORD *)this + 19),
         v4,
         0LL,
         0LL,
         0LL,
         0LL,
         (char *)this + 336);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1FF,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
  return 0LL;
}
