/*
 * XREFs of ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJPEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800177A0
 * Callers:
 *     ?RegisterWithLightDismiss@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800176E8 (-RegisterWithLightDismiss@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnClientWindowReadyForPresentationChanged@CQuickConnectExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x18044E010 (-OnClientWindowReadyForPresentationChanged@CQuickConnectExperienceManager@@AEAAJPEAUIClientWindo.c)
 *     ?RegisterWithLightDismiss@CInsightsExperienceManager@@AEAAXPEAVCSingleViewShellExperience@@@Z @ 0x18045A558 (-RegisterWithLightDismiss@CInsightsExperienceManager@@AEAAXPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180474160 (-OnViewShown@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?InternalRegisterWithLightDismiss@SingleViewLightDismissHelper@@AEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800662A4 (-InternalRegisterWithLightDismiss@SingleViewLightDismissHelper@@AEAAJW4LIGHT_DISMISS_FLAGS@@PEAU.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SingleViewLightDismissHelper::RegisterWithLightDismiss(
        SingleViewLightDismissHelper *this,
        struct ILightDismissNotification *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = SingleViewLightDismissHelper::InternalRegisterWithLightDismiss(this, 2050LL, a2, a3);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\lightdismisshelper.cpp",
      (const char *)(unsigned int)v3,
      v6);
  return v4;
}
