/*
 * XREFs of ?OnViewUncloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1804416B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x18001A83C (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18009A320 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800B879C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetMonitorWorkArea@CPeopleBarJumpViewExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x180440E48 (-GetMonitorWorkArea@CPeopleBarJumpViewExperienceManager@@AEAAJAEAUtagRECT@@@Z.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x180748F0C (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@_ea_180748F0C.c)
 */

__int64 __fastcall CPeopleBarJumpViewExperienceManager::OnViewUncloaking(HSTRING *this, ExperienceManagerUtils **a2)
{
  HWND v3; // rbx
  HSTRING v4; // r8
  const WCHAR *StringRawBuffer; // rax
  const char *v6; // r9
  int v7; // ecx
  unsigned int v8; // edx
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // ebx
  int v14; // ecx
  int v15; // ecx
  int MonitorWorkArea; // eax
  __int64 v17; // rdx
  struct tagRECT v19; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(
               a2[3],
               (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2);
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                       (Microsoft::WRL::Wrappers::Details *)this[39],
                       0LL,
                       v4) )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(this[39], 0LL);
    if ( !SetWindowTextW(v3, StringRawBuffer) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0xB9,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
        v6);
  }
  v7 = *((_DWORD *)this + 65);
  v8 = 15;
  if ( v7 )
  {
    v9 = v7 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 == 1 )
          v8 = 7;
      }
      else
      {
        v8 = 11;
      }
    }
    else
    {
      v8 = 13;
    }
  }
  else
  {
    v8 = 14;
  }
  v11 = CSingleViewShellExperience::ShowBorder((__int64)(this + 1), v8, 1LL, 0LL, 0);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xBC,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
  v12 = *((_DWORD *)this + 65);
  v13 = 92;
  if ( v12 )
  {
    v14 = v12 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        if ( v15 == 1 )
          v13 = 90;
      }
      else
      {
        v13 = 88;
      }
    }
    else
    {
      v13 = 91;
    }
  }
  else
  {
    v13 = 89;
  }
  MonitorWorkArea = CPeopleBarJumpViewExperienceManager::GetMonitorWorkArea((const RECT *)this - 3, &v19);
  if ( MonitorWorkArea < 0 )
  {
    v17 = 209LL;
LABEL_26:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v17,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)MonitorWorkArea);
    return 0LL;
  }
  MonitorWorkArea = CExperienceManagerAnimationHelper::Begin(
                      this + 40,
                      this[4],
                      v13 | 0x200000u,
                      0LL,
                      0LL,
                      0LL,
                      0LL,
                      &v19);
  if ( MonitorWorkArea < 0 )
  {
    v17 = 212LL;
    goto LABEL_26;
  }
  return 0LL;
}
