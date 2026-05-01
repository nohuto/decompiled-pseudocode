/*
 * XREFs of ?MinimizeToBoxMode@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x180479DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18014D168 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18042955C (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ??1CortanaExperienceManager_Dismiss@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180476D88 (--1CortanaExperienceManager_Dismiss@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x180478730 (-GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?Relaunch@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18047C08C (-Relaunch@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 *     ?SetZBand@SearchAppDesktopExperienceView@@AEAAJW4ZBID@@@Z @ 0x18047C748 (-SetZBand@SearchAppDesktopExperienceView@@AEAAJW4ZBID@@@Z.c)
 *     ?StartActivity@CortanaExperienceManager_Dismiss@CortanaProactiveTelemetry@@QEAAXXZ @ 0x18047CF70 (-StartActivity@CortanaExperienceManager_Dismiss@CortanaProactiveTelemetry@@QEAAXXZ.c)
 *     ?UnregisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18047E0B4 (-UnregisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SearchAppDesktopExperienceView::MinimizeToBoxMode(SearchAppDesktopExperienceView *this)
{
  char *v2; // rdi
  int v3; // eax
  int ActivateArgs; // eax
  unsigned int v5; // ebx
  int v6; // eax
  DWORD v7; // edx
  HSTRING string; // [rsp+20h] [rbp-E0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-D8h] BYREF
  HSTRING string1; // [rsp+40h] [rbp-C0h]
  _QWORD v12[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v12,
    (__int64)"CortanaExperienceManager_Dismiss");
  v12[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_Dismiss::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_Dismiss::StartActivity((CortanaProactiveTelemetry::CortanaExperienceManager_Dismiss *)v12);
  *((_BYTE *)this + 173) = 1;
  v2 = (char *)this - 24;
  v3 = SearchAppDesktopExperienceView::SetZBand((char *)this - 24);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x22F,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v3);
  SearchAppDesktopExperienceView::UnregisterGlobalBackButton((SearchAppDesktopExperienceView *)((char *)this - 24));
  WindowsDeleteString(0LL);
  string = 0LL;
  string1 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"StartMode=QFSearchBox&QuerySource=StartLightDismiss&Positioner=desktop",
    0x47u,
    0x46u);
  ActivateArgs = SearchAppDesktopExperienceView::GetActivateArgs(
                   (SearchAppDesktopExperienceView *)((char *)this - 24),
                   string1,
                   &string);
  v5 = ActivateArgs;
  if ( ActivateArgs >= 0 )
  {
    v6 = SearchAppDesktopExperienceView::Relaunch(v2, string, 0LL);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x236,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v6);
    wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v12,
      v7);
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x235,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)ActivateArgs);
  }
  WindowsDeleteString(string);
  string = 0LL;
  CortanaProactiveTelemetry::CortanaExperienceManager_Dismiss::~CortanaExperienceManager_Dismiss((CortanaProactiveTelemetry::CortanaExperienceManager_Dismiss *)v12);
  return v5;
}
