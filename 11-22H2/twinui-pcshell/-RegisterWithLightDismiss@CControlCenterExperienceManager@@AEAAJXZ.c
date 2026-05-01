/*
 * XREFs of ?RegisterWithLightDismiss@CControlCenterExperienceManager@@AEAAJXZ @ 0x180422AA4
 * Callers:
 *     ?OnViewUncloaking@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180421450 (-OnViewUncloaking@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CastProjectL2s@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180422C1C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CastProjectL2s@@@details@wil@@QEAAX_NW4Re.c)
 *     ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180749428 (-RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDi.c)
 */

__int64 __fastcall CControlCenterExperienceManager::RegisterWithLightDismiss(CControlCenterExperienceManager *this)
{
  LSTATUS ValueW; // eax
  bool v3; // zf
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v8; // [rsp+58h] [rbp+10h] BYREF
  DWORD v9; // [rsp+60h] [rbp+18h] BYREF
  DWORD v10; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0;
  v10 = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell\\Launcher",
             L"DisableLightDismiss",
             0x10000012u,
             &v9,
             &v8,
             &v10);
  if ( !ValueW )
  {
    if ( v9 == 4 )
    {
      if ( v8 <= 1 )
      {
        v3 = v8 == 1;
        goto LABEL_8;
      }
    }
    else if ( v10 == 4 && (unsigned __int16)(v8 - 48) <= 1u )
    {
      ValueW = 0;
      v3 = (_WORD)v8 == 49;
LABEL_8:
      LOBYTE(ValueW) = v3;
      if ( ValueW )
        return 0LL;
    }
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CastProjectL2s>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_CastProjectL2s>::GetImpl'::`2'::impl,
    1LL);
  v4 = SingleViewLightDismissHelper::RegisterWithLightDismiss(
         (char *)this + 384,
         2066LL,
         ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
         *((_QWORD *)this + 18));
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x519,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  return 0LL;
}
