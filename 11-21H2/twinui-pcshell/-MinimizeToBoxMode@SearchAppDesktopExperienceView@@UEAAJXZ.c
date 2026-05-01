/*
 * XREFs of ?MinimizeToBoxMode@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x18039B450
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801343F8 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803571E4 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ??1CortanaExperienceManager_Dismiss@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180398318 (--1CortanaExperienceManager_Dismiss@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x180399E10 (-GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?Relaunch@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18039D824 (-Relaunch@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 *     ?SetZBand@SearchAppDesktopExperienceView@@AEAAJW4ZBID@@@Z @ 0x18039DEA0 (-SetZBand@SearchAppDesktopExperienceView@@AEAAJW4ZBID@@@Z.c)
 *     ?StartActivity@CortanaExperienceManager_Dismiss@CortanaProactiveTelemetry@@QEAAXXZ @ 0x18039E6EC (-StartActivity@CortanaExperienceManager_Dismiss@CortanaProactiveTelemetry@@QEAAXXZ.c)
 *     ?UnregisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18039F9A8 (-UnregisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SearchAppDesktopExperienceView::MinimizeToBoxMode(SearchAppDesktopExperienceView *this)
{
  char *v2; // rdi
  int v3; // eax
  int ActivateArgs; // eax
  unsigned int v5; // ebx
  int v6; // eax
  HSTRING string; // [rsp+20h] [rbp-E0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-D8h] BYREF
  HSTRING string1; // [rsp+40h] [rbp-C0h]
  RTL_SRWLOCK v11[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v11,
    (__int64)"CortanaExperienceManager_Dismiss");
  v11[0].Ptr = &CortanaProactiveTelemetry::CortanaExperienceManager_Dismiss::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_Dismiss::StartActivity((CortanaProactiveTelemetry::CortanaExperienceManager_Dismiss *)v11);
  *((_BYTE *)this + 181) = 1;
  v2 = (char *)this - 24;
  v3 = SearchAppDesktopExperienceView::SetZBand((char *)this - 24);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x238,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
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
        (void *)0x23F,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v6);
    wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v11);
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23E,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)ActivateArgs);
  }
  WindowsDeleteString(string);
  string = 0LL;
  CortanaProactiveTelemetry::CortanaExperienceManager_Dismiss::~CortanaExperienceManager_Dismiss((CortanaProactiveTelemetry::CortanaExperienceManager_Dismiss *)v11);
  return v5;
}
