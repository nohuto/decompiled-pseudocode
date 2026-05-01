/*
 * XREFs of ?OnViewUncloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1804494E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x18001A83C (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18009A320 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800B879C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z @ 0x18010DDF4 (-SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SSFJVTest@@@details@wil@@QEAA_NXZ @ 0x1801E334C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SSFJVTest@@@details@wil@@QEAA_NXZ.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x180748F0C (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@_ea_180748F0C.c)
 */

__int64 __fastcall CJumpViewExperienceManager::OnViewUncloaking(HSTRING *this, ExperienceManagerUtils **a2)
{
  HWND v3; // rdi
  HSTRING v4; // r8
  const WCHAR *StringRawBuffer; // rax
  const char *v7; // r9
  int v8; // ecx
  int v9; // edi
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(
               a2[3],
               (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_SSFJVTest>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_SSFJVTest>::GetImpl'::`2'::impl)
    && !SetPropA(v3, "AttachToDesktop", HANDLE_FLAG_INHERIT) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27A,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                       (Microsoft::WRL::Wrappers::Details *)this[45],
                       0LL,
                       v4) )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(this[45], 0LL);
    if ( !SetWindowTextW(v3, StringRawBuffer) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x27E,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        v7);
  }
  if ( this[14] )
    CSingleViewShellExperience::SetWindowBand((__int64)(this + 11));
  v8 = *((_DWORD *)this + 108);
  v9 = 92;
  if ( v8 )
  {
    v10 = v8 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 == 1 )
          v9 = 90;
      }
      else
      {
        v9 = 88;
      }
    }
    else
    {
      v9 = 91;
    }
  }
  else
  {
    v9 = 89;
  }
  CSingleViewShellExperience::ShowBorder((__int64)(this + 11), 0, 0LL, 0LL, 0);
  if ( *((_DWORD *)this + 109) == 3 )
  {
    v12 = DwmpBeginTransitionRequest(64LL);
    if ( v12 >= 0 )
    {
      v12 = DwmpEndTransitionRequest(64LL);
      if ( v12 >= 0 )
        goto LABEL_23;
      v13 = 672LL;
    }
    else
    {
      v13 = 670LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
LABEL_23:
    v14 = CExperienceManagerAnimationHelper::Begin(
            this + 46,
            this[14],
            v9 | 0x200000u,
            0LL,
            0LL,
            0LL,
            0LL,
            (char *)this + 460);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2A3,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v14);
  }
  return 0LL;
}
