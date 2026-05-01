/*
 * XREFs of ?OnViewUncloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180373760
 * Callers:
 *     <none>
 * Callees:
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x180025640 (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800C912C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18017C488 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z @ 0x18017E4E4 (-SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019033C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_JTest01@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18037398C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_JTest01@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x1805F2C54 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@_ea_1805F2C54.c)
 */

__int64 __fastcall CJumpViewExperienceManager::OnViewUncloaking(HSTRING *this, ExperienceManagerUtils **a2)
{
  HWND v3; // rdi
  HSTRING v4; // r8
  __int64 v5; // rdx
  const WCHAR *StringRawBuffer; // rax
  const char *v7; // r9
  int v8; // ecx
  int v9; // edi
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(
               a2[3],
               (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2);
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                       (Microsoft::WRL::Wrappers::Details *)this[45],
                       0LL,
                       v4) )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(this[45], 0LL);
    if ( !SetWindowTextW(v3, StringRawBuffer) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x1E6,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
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
  LOBYTE(v5) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_JTest01>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_JTest01>::GetImpl'::`2'::impl,
    v5);
  CSingleViewShellExperience::ShowBorder((__int64)(this + 11), 0, 0LL, 0LL, 0);
  if ( *((_DWORD *)this + 109) == 3 )
  {
    if ( (int)DwmpBeginTransitionRequest(64LL) >= 0 )
      DwmpEndTransitionRequest(64LL);
    v12 = CExperienceManagerAnimationHelper::Begin(this + 46, this[14], v9 | 0x200000u, 0LL, 0LL, 0LL, 0LL, this + 56);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x219,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
  }
  return 0LL;
}
